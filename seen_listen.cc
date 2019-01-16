#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    map<string,int> list;
    vector<string> v;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        list[name]++;
    }
    
    for(int i=0;i<m;i++){
        string name;
        cin>>name;
        if(list[name]==1){
            v.push_back(name);
        }
    }
    
    sort(v.begin(),v.end());
    int size=v.size();
    cout<<size<<"\n";
    for(int i=0;i<size;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}