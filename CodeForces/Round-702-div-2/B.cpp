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
        ll n, input;
        cin >> n;
        vector< ll > v(n+1, 0);
        ll c0, c1, c2;
        ll temp = n/3;
        ll c[3];
        for(ll i = 0; i <3; i++)
            c[i] = 0;
        for(ll i = 1; i <= n; i++){
            cin >> input;
            v[i] = input;
            if(input%3 == 0)
                c[0]++;

            if(input%3 == 1)
                c[1]++;

            if(input%3 == 2)
                c[2]++;
        }


        ll ans = 0;

        if(c[0] < n/3){
            ll d1, d2;
            d1 = c[1]-n/3;
            d2 = c[2]-n/3;

            //cout << d1 << " " << d2 << "\n";
            if(d1 > 0){
                if((n/3-c[0]) <= d1){
                    ans += (n/3-c[0]);
                    c[1] -= (n/3-c[0]);
                    c[0]+= (n/3-c[0]);

                }
                else{
                    c[0] += d1;
                     ans += d1;
                     c[1] -= d1;
                }
            }

            if(d2 > 0){
                if((n/3-c[0]) <= d2){
                    ans += (n/3-c[0])*2;
                    c[2] -= (n/3-c[0]);
                    c[0]+= (n/3-c[0]);

                }
                else{
                     c[0] += d2;
                     ans += d2*2;
                     c[2] -= d2;
                }
            }
        }

        if(c[1] < n/3){
            ll d1, d2;
            d1 = c[2]-n/3;
            d2 = c[0]-n/3;

            if(d1 > 0){
                if((n/3-c[1]) <= d1){
                    ans += (n/3-c[1]);
                    c[2] -= (n/3-c[1]);
                    c[1]+= (n/3-c[1]);

                }
                else{
                    c[1] += d1;
                     ans += d1;
                     c[2] -= d1;
                }
            }

            if(d2 > 0){
                if((n/3-c[1]) <= d2){
                    ans += (n/3-c[1])*2;
                    c[0] -= (n/3-c[1]);
                    c[1]+= (n/3-c[1]);

                }
                else{
                    c[1] += d2;
                     ans += d2*2;
                     c[0] -= d2;
                }
            }
        }

        if(c[2] < n/3){
            ll d1, d2;
            d1 = c[0]-n/3;
            d2 = c[1]-n/3;

            if(d1 > 0){
                if((n/3-c[2]) <= d1){
                    ans += (n/3-c[2]);
                    c[0] -= (n/3-c[2]);
                    c[2]+= (n/3-c[2]);

                }
                else{
                    c[2] += d1;
                     ans += d1;
                     c[0] -= d1;
                }
            }

            if(d2 > 0){
                if((n/3-c[2]) <= d2){
                    ans += (n/3-c[2])*2;
                    c[1] -= (n/3-c[2]);
                    c[2]+= (n/3-c[2]);

                }
                else{
                    c[2] += d2;
                     ans += d2*2;
                     c[1] -= d2;
                }
            }
        }

        //cout << c[0] << " " << c[1] << " " << c[2] << "\n";

        cout << ans;

        cout << "\n";
    }
    return 0;
}

