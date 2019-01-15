#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    list<char> editor(s.begin(),s.end()); //리스트 선언 방법
    auto cursor=editor.end();
    int n; cin>>n;
    while(n--){
        char cmd;
        cin>>cmd;
        if(cmd=='L'){
            if(cursor!=editor.begin()){
                cursor--;
            }
        }else if(cmd=='D'){
            if(cursor!=editor.end()){
                cursor++;
            }
        }else if(cmd=='B'){
            if(cursor!=editor.begin()){
                auto tmp=cursor;//커서가 가리킬 다음 요소가 있는 위치
                /*
                    e.g: ab|c -> a|c
                */
                cursor--;
                editor.erase(cursor);
                cursor=tmp;
            }
        }else{
            char c; cin>>c;
            editor.insert(cursor, c);
            /*
                insert(iterator pos, const T& x)
                : x를 pos 앞에 삽입.
                
                insert(iterator pos, int n, const T& x)
                : x n개를 pos 앞에 삽입.
            */
        }
    }
    
    for(char c:editor){
        cout<<c;
    }
    cout<<"\n";
    return 0;
}