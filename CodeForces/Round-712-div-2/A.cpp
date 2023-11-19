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
        string s;
        cin >> s;
        n = s.size();
        ll ot = 0;
        ll chk = 0;
        ll i = 0;
        ll id = -1;
        for(i = 0; i < n; i++){
            if(s[i] != 'a'){
                chk = 1;
                id = n-1-i;
                break;
            }
        }
        i = 0;
        if(chk){
        cout << "YES" << "\n";
        string s1, s2;
        s1 = "a" + s;
        reverse(s1.begin(), s1.end());
        s2 = "a" + s;

        if(s1 == s2)
            cout << s << "a";
        else
            cout << s2;

        }
        else
            cout << "NO";


        cout << "\n";
    }
    return 0;
}
