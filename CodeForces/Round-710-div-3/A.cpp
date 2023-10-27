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
        ll n, m, x, input;
        cin >> n >> m >> x;
        
        ll c = 0, r = 0;

        c = x/n;
        r = x%n;
        if(r > 0)
            c++;

        if(r == 0)
            r = n;

        cout << (r-1)*m+ c; 
        
 
        cout << "\n";
    }
    return 0;
}