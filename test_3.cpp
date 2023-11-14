#include<iostream>
#include<algorithm>
#include<vector>
struct Event{
   int time;
   int type;
};
bool compareEvents(Event &a,Event &b){
    if(a.time==b.time){
        return a.type<b.type
    }
    return a.time<b.time;
}
int main(){
    int n;
    cin>>n;
    vector<Event>entrys(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        entrys.push_back((x,0));
        entrys.push_back((y,1));
    }
    sort(entrys.begin(),entrys.end(),compareEvents);
    int cust=0;
    int maxcust=0;
    for(int i=0;i<n;i++){
        if(x.type==0){
            cust++;
        }
        else{
            cust--;
        }
        maxcust=(cust,maxcust);
    }
    cout<<maxcust<<endl;

}