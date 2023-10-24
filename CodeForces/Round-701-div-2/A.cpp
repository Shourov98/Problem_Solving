#include<bits/stdc++.h>
#define ll              long long
#define test_case(t)    for(int z=1;z<=t;z++)
#define print_case      printf("Case %d: ",z)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb              push_back
#define i               insert
#define p               front
#define f               first
#define s               second
#define pll             pair< ll, ll >
using namespace std;


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
    fast;
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        ll temp_a = a;
        ll temp_b = b;

        ll i = 0;

        ll mn = 1000000000;
        if(b == 1){
            i++;
        }

        for(ll j = i; j <= 100; ++j){
            temp_a = a;
            ll temp = b + j;
            ll ans = 0;
            while(temp_a > 0){
                temp_a = temp_a/temp;
                ans++;
            }
            mn = min(mn, ans+j);
        }
        cout << mn;


        cout << "\n";
    }
    return 0;
}
