#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007
#define INT_MAX 2147483647

char s[1010];
char a[52][52];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(a, 0, sizeof(a));
        int n;
        cin >> n >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
                v.push_back(i + 1);
        }
        if (v.size() == 2 || v.size() == 1)
        {
            cout << "NO\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
            a[i][i] = 'X';
        for (int i = 0; i < v.size(); i++)
        {
            int j = (i + 1) % (v.size());
            //printf("%d %d\n",v[i],v[j]);
            a[v[i]][v[j]] = '+';
            a[v[j]][v[i]] = '-';
        }
        cout << "YES\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j])
                    cout << a[i][j];
                else
                    cout << "=";
            }
            cout << "\n";
        }
    }
}
