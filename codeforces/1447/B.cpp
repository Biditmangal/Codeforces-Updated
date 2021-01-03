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
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

void solve(){
    int n,m,neg=0;
    cin>>n>>m;

    int a[11][11];

    FOR(i,0,n){
        FOR(j,0,m){
            cin>>a[i][j];
            if(a[i][j]<0) neg++;
        }
    }
    int ans=0,mini=1e9;
    
    FOR(i,0,n){
        FOR(j,0,m){
            ans+=abs(a[i][j]);
            mini=min(mini,abs(a[i][j]));
        }
    }
    if(neg % 2 != 0){
        ans-=2*mini;
    }
    cout<<ans<<endl;

}

int main(){

    int t;
    cin>>t;
    
    while(t--) solve();

    return 0;
}