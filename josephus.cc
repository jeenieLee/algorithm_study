#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<<"<";
    for(int x=1;x<=n;x++){
        for(int i=1;i<=m;i++){
            if(i==m){
                cout<<q.front();
            }else{
                q.push(q.front());
            }
            q.pop();
        }
        if(x!=n){
            cout<<", ";
        }
    }
    cout<<">\n";
    return 0;
}