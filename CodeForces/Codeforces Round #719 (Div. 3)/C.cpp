#include<bits/stdc++.h>
#define ll              long long
#define test_case(t)    for(int z=1;z<=t;z++)
#define print_case      printf("Case %d: ",z)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb              push_back
#define ff              front
#define fi              first
#define ss              second
#define pll             pair< ll, ll >
#define mpp(a,b,c)      mp(mp(a,b),c)
#define mp              make_pair
#define clr(x)          memset(x,0,sizeof(x));
// Have to comment out the following lines befor submitting, they are for debugging.
#define _GLIBCXX_DEBUG       // Iterator safety; out-of-bounds access for Containers, etc.
#pragma GCC optimize "trapv" // abort() on (signed) integer overflow.
using namespace std;
ll a[105][105];

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

int main()
{
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif    */

    fast;
    ll t;
    cin >> t;
    while(t--){
        ll n, input;
        cin >> n;
        if(n == 2){
            cout << -1 << "\n";
            continue;
        }
        else{
            for(ll i = 0; i < 105; i++){
                for(ll j = 0; j <105;j++){
                    a[i][j]=0;
                }
            }
            ll num = 1;
            for(ll i = 1; i <= n; i++){
                a[i][i] = num;
                num++;
            }

            for(ll i = 1; i <= n; i++){
                for(ll j = 1; j < i; j++){
                    a[i][j] = num;
                    num++;
                    a[j][i] = num;
                    num++;
                }
            }
            //cout << num;
            for(ll i = 1; i <= n; i++){
                for(ll j = 1; j <= n;j++){
                    cout << a[i][j] << " ";
                }
                cout << "\n";
            }
        }

    }
    return 0;
}
