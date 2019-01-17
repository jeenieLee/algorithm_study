#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n; cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    for(unsigned int i=0;i<v.size();i++){
        /*
         for(int i=0;i<v.size(;i++)
         => comparison between signed int (i) and unsigned int (v.size())
            [warning] comparison between signed and unsigned integer expressions.
         */
        cout<<v[i].second<<" "<<v[i].first<<"\n";
    }
    return 0;
}
