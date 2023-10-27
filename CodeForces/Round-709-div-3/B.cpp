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
        ll n, input;
        cin >> n;
        vector< ll > v(n+1, 0);
        for(ll i = 1; i <= n; i++){
            cin >> input;
            v[i] = input;
        }




        set< ll >s;

        for(ll i = 2; i <= n; i++){
            ll diff = v[i]-v[i-1];
            //cout << diff << " ";
            s.insert(diff);
        }

        if(s.size() == 1)
            cout << 0;
        else if(s.size() > 2)
            cout << -1;
        else{

            ll d, neg = 0, pos = 0, zero=0;
            for(auto it:s){
                if(it > 0)
                    d = it;

                if(it > 0)
                    pos++;

                if(it < 0)
                    neg++;

                if(it == 0)
                    zero++;
            }


            ll mx, mn;
            for(ll i = 2; i <=n; i++){
                if((v[i]-v[i-1]) < 0){
                    mx = v[i];
                    mn = v[i-1];
                    break;
                }
            }

            if(zero > 0 && (pos > 0 || neg > 0))
                cout << -1;
            else if(pos > 1){
                cout << -1;
            }
            else if(neg > 1)
                cout << -1;
            else{
                if((mn+d-mx) <= mn)
                    cout << -1;
                else
                    cout << mn+d-mx << " " << d;
            }

        }




        cout << "\n";
    }
    return 0;
}
