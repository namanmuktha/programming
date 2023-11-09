// #include<iostream>
// #include<vector>
// #include<map>
// #include<set>
// #include<bitset>
// using namespace std;
// typedef long long ll;

// int main() {
//     ll n;
//     cin >> n;
//     vector<ll>a(n);
//     for(ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     // set  //1 to n  if any number is missing we can find it 
//     //how to get all the subset sums 
//     //bitset
//     bitset<1000001>st(1);
//     for(int i = 0; i < n; i++) {
//         //if(a[i] < 1e6)
//         if(st > 1e6)break;
//         st = (st << a[i]) | st;
//     }
//     int s = st.count() - 1;
//     for(int i = 1; i <= 100000; i++) {
//         //cout << "HELLO";
//         if(st[i] == 0){ cout<< i << " ";break;}
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<bitset>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll>a(n + 1);
    for(ll i =1 ; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll>pref(n + 1);
    set<ll>st;
    pref[0] = 1;
    for(ll i = 1; i <= n; i++) {
        if (pref[i-1] < a[i]) return cout<<pref[i-1], 0;
        pref[i] = pref[i - 1] + a[i];
    }
    // for(ll i = 0; i < n; i++) {
    //     cout << pref[i] << " ";
    // }
    cout << pref[n];
    return 0;
}