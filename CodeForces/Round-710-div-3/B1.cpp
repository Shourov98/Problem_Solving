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
//#ifndef ONLINE_JUDGE
  //  freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//#endif
    fast;
    ll t;
    cin >> t;
    while(t--){
        ll n, k, input;
        cin >> n >> k;
        ll ans = 0;
        string s1, s;
        cin >> s1;
        s = "#"+s1;


        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            if(s[i] == '*')
                cnt++;
        }

        if(cnt == 1){
            cout << 1 << "\n";
            continue;
        }

        ll id = 0;
        for(ll i = 1; i <= n; i++){
            if(s[i] == '*'){
                id = i;
                s[i] = 'x';
                break;
            }
        }

        ll j = 0;
        ll i = id;
        while(1){

            for(j = k; j >= 1; j--){
                if(i+j > n)
                    break;
                if(s[i+j] == '*'){
                    s[i+j] = 'x';
                    break;
                }
            }
            if(j > 0)
                i += j;
            else
                i++;

            //cout << i << " ";
            if(i > n)
                break;

        }
        for(ll i = n; i>0; i--){
            if(s[i] == 'x')
                break;

            if(s[i] == '*'){
                s[i] = 'x';
                break;
            }
        }
        for(ll i = 1; i <= n; i++){
            if(s[i] == 'x'){
                ans++;
             //   cout << i << " ";
            }
        }
        if(s[n]=='*')
            ans++;
        cout << ans;


        cout << "\n";
    }
    return 0;
}
