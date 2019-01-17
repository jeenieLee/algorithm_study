#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int cal(vector<int> &v){
    int sum=0;
    for(unsigned int i=1;i<v.size();i++){
        sum+=abs(v[i-1]-v[i]);
    }
    return sum;
}
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    /*
     next_permutation()은 '다음 순열'을 구하기 때문에
     sort()를 하지 않으면 전체 경우의 수를 보지 못할 수도 있음.
     따라서, 전체 경우의 수에 대한 문제일 경우에 반드시 sort()를 해주어야 함!
     */
    int ans=0;
    do{
        ans=max(ans,cal(v));
    }while(next_permutation(v.begin(),v.end()));
    cout<<ans<<"\n";
    return 0;
}
