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
        ll n, k, input;
        cin >> n >> k;
        string  s1, s;
        cin >> s1;
        s = '#' + s1;
        bool flag = true;
        if(n <= 2*k)
            flag = false;

        bool chk = false;
        if(flag){
            ll mx = (n-1)/2;
            ll mn = k;

            for(ll i = k; i <= mx; i++){
                string a = s.substr(1, i);
                string b = s.substr(n-i+1, i);
                reverse(b.begin(), b.end());
                //cout << a << " " << b << "\n";
                if(a == b){
                    chk = true;
                    break;
                }
            }
        }

        if(k == 0){
            cout << "YES" << "\n";
            continue;
        }
        if(chk)
            cout << "YES";
        else
            cout << "NO";

        cout << "\n";
    }
    return 0;
}
