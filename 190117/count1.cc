#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int m; cin>>m;
    cout<<count(v.begin(),v.end(),m)<<"\n";
    return 0;
}