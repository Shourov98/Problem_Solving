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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif    

    fast;
    ll t;
    cin >> t;
    while(t--){
        string a1, a, b1, b;
        cin >> a1 >> b1;
        a = "#"+a1;
        b = "#"+b1;

        ll la = a.size();
        ll lb = b.size();
        ll mx = min(la, lb);
        ll ans = 0;

        for(ll k = 1; k <= mx; k++){
            for(ll i = 1; i <= la-k; i++){
                string sub = a.substr(i, k);
                for(ll j = 1; j <= lb-k; j++){
                    string sub1 = b.substr(j, k);
                    if(sub1 == sub){
                        ans = max(ans, k);
                        break;
                    }
                }
            }
        }

        cout << (lb-ans-1)+(la-ans-1);
        
 
        cout << "\n";
    }
    return 0;
}