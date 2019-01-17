#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        swap(v[x-1],v[y-1]);
    }
    
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<'\n';
    return 0;
}