#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
typedef long long ll;

int main() {    
    ll n,k;
    cin >> n>>k;
    vector<std::pair<ll,ll>> pV;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pV.push_back({x,i+1});
    }
    sort(pV.begin(),pV.end());
    ll i=0,j=n-1;
    while(i<j){
        if(pV[i].first+pV[j].first==k){
            cout<<pV[i].second<<" "<<pV[j].second<<endl;
            return 0;
        }
        else if(pV[i].first+pV[j].first<k){
            i++;
        }
        else{
            j--;
        }
    }
        cout<<"IMPOSSIBLE\n";
    return 0;
}