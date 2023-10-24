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
    ll n, q, k, input;
    cin >> n >> q >> k;
    vector< ll > v(n+1, 0);
    for(ll i = 1; i <= n; i++){
        cin >> input;
        v[i] = input;
    }
    vector< pll > vec;
    for(ll j = 0; j < q; j++){
        ll a, b;
        cin >> a >> b;
        vec.pb({a, b});
    }

    ll left[n+1], mid[n+1], right[n+1];

    left[0] = 0;
    mid[0] = 0;
    right[0] = 0;

    for(ll i = 1; i <= n; i++){
        ll r, m, l;
        if(i > 1 && i < n){
            l = abs(v[i]-0)-1 + abs(v[i+1]-v[i])-1;
            m = abs(v[i]-v[i-1]) + abs(v[i+1]-v[i])-2;
            r = abs(k-v[i]) + abs(v[i]-v[i-1])-1;
            mid[i] = m;
            left[i] = l;
            right[i] = r;

        }
        else if(i == 1){
            l = abs(v[i]-0);
            m = abs(v[i+1]-v[i])-1 + abs(v[i]-0)-1;
            left[i] = l;
            mid[i] = m;
        }
        else if(i == n){
            r = abs(k-v[i]);
            m = abs(v[i]-v[i-1])-1 + abs(k-v[i]);
            right[i] = r;
            mid[i] = m;
        }
    }
    ll pref[n+1], suf[n+1];
    pref[0] = 0;
    for(ll i = 1; i <= n; i++){
        pref[i] = mid[i];
        pref[i] += pref[i-1];
    }


    for(ll i = 1; i <= q; i++){
        ll l, r;
        l = vec[i-1].first;
        r = vec[i-1].second;
        ll last = 0;
        if(r == n)
            last += abs(k-v[r]);
        else
            last += abs(v[r+1]-v[r])-1;
        ll sum = v[l]-1+ abs(v[l+1]-v[l])-1+ abs(k-v[r])+(pref[r]-pref[l])-last;

        if(l == r)
            sum = k-1;
        cout <<  sum;
        cout << "\n";
    }

    return 0;
}
