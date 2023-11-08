#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
bool fn(long long n){
    if(n==0||n==1) return false;
    if(n==2) return true;
    for(long long i=2;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
        cin>>v[i];
        long long x=sqrt(v[i]);
       if(x*x==v[i] && fn(x)){
        cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
        }
    
}