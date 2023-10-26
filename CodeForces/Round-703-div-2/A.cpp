#include<bits/stdc++.h>
#define ll              long long
#define test_case(t)    for(int z=1;z<=t;z++)
#define print_case      printf("Case %d: ",z)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb              push_back
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
        ll n, a, b;
        cin >> n;
        vector< ll > x(n, 0);
        vector< ll > y(n, 0);

        ll ans = 0;

        for(ll i = 0; i < n; i++){
            cin >> a >> b;
            x[i] = a;
            y[i] = b;
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        if(n%2){
            ans = 1;
        }
        else{
            ll mid = n/2;

            ll dx = abs(x[mid]-x[mid-1])+1;
            ll dy = abs(y[mid]-y[mid-1])+1;

            ans = dx*dy;
            //cout << dx << " " << dy << "\n";
        }


        cout << ans;
        cout << "\n";
    }
    return 0;
}

