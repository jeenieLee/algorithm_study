#include <iostream>
#include <cmath>
#include <string>
#include <map> //key + value
using namespace std;
int main(){
    map<string,int> m={{"black",0},{"brown",1},{"red",2},{"orange",3},{"yellow",4},{"green",5},{"blue",6},{"violet",7},{"grey",8},{"white",9}};
    string a,b,c;
    cin>>a>>b>>c;
    long long ans=(long long)(m[a]*10+m[b]);
    ans*=pow(10,m[c]);
    cout<<ans<<"\n";
    return 0;
}