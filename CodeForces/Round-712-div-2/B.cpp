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
        string s1, s2;
        cin >> s1 >> s2;

        ll chk = 0;
        if(s1 == s2){
            chk = 1;
        }

        if(!chk){
            ll id = n;
            for(ll i = n-1; i > 0; i--){
                if(s1[i] != s2[i]){
                    id = i;
                    break;
                }
            }

            ll oner = 0;
            ll zr = 0;
            ll ones = 0;
            ll zs = 0;
            ll c = 1;

            ll rv;
            if(s1[0] == s2[0])
                rv = 0;
            else
                rv = 1;

            for(ll i = 0; i <= id; i++){
                if(s1[i] == s2[i])
                    rv = 0;
                else
                    rv = 1;

                if(rv){
                    //cout << rv << " " <<  ones << " " << zs << "\n";
                    if(ones != zs)
                        c = 0;
                    if(s2[i] == '1')
                        oner++;
                    else
                        zr++;
                }
                else{
                    //cout << rv << " " << oner << " " << zr << "\n";
                    if(oner != zr)
                        c = 0;

                    if(s2[i] == '1')
                        ones++;
                    else
                        zs++;
                }
            }
            if(oner != zr)
                c = 0;
            if(ones != zs)
                c = 0;

            if(c)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "YES";

        cout << "\n";
    }
    return 0;
}
