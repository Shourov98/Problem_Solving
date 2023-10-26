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
        vector< ll > v(n, 0);
        for(ll i = 0; i < n; i++){
            cin >> input;
            v[i] = input;
        }

        ll chk = 1;
        ll sum = 0;
        ll temp = 0;
        for(ll i = 0; i < n; i++){
            sum += v[i];
            temp += i;
            if(sum < temp){
                chk = 0;
                break;
            }
        }
        if(chk)
            cout << "YES";
        else
            cout << "NO";


        cout << "\n";
    }
    return 0;
}

