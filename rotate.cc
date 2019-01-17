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
        int i,j,k;
        cin>>i>>j>>k;
        rotate(v.begin()+(i-1),v.begin()+(k-1),v.begin()+j);
    }
    
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<'\n';
    return 0;
}