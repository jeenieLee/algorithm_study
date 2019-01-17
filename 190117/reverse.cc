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
    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        reverse(v.begin()+(x-1),v.begin()+y);
    }
    
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}