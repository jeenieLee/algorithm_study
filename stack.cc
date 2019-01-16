#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<int> s;
    int n; cin>>n;
    while(n--){
        string cmd;
        cin>>cmd;
        if(cmd=="push"){
            int x; cin>>x;
            s.push(x);
        }else if(cmd=="pop"){
            if(s.empty()){
                cout<<"-1\n";
            }else{
                cout<<s.top()<<"\n";
                s.pop();
            }
        }else if(cmd=="size"){
            cout<<s.size()<<"\n";
        }else if(cmd=="empty"){
            if(s.empty()){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
        }else{
            if(s.empty()){
                cout<<"-1\n";
            }else{
                cout<<s.top()<<"\n";
            }
        }
    }
    return 0;
}