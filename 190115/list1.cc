#include <iostream>
#include <list> //순차리스트
using namespace std;

int main(){
    list<pair<int,int>> l;
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        l.push_back({i,x});
    }
    
    auto it=l.begin();
    for(int i=1;i<n;i++){
        cout<<(it->first)<<" ";
        int step=it->second;
        if(step>0){//go to right
            auto tmp=it;
            ++tmp;
            if(tmp==l.end()){//현재 위치가 n번째 원소.
                tmp=l.begin();
            }
            l.erase(it);
            it=tmp;
            /*
             <vector의 erase(iter)와 list의 erase(iter)의 차이점>
             list는 BidirectionalIterator(순차 접근)이기 때문에
             해당 요소가 삭제되면 다음 요소의 위치(지시자)를 잃어버리게 되기 때문에
             다음 위치를 지정해주어야 함.
             이와 달리, vector는 erase로 삭제된 부분이 다음 요소의 위치로 채워짐.
             */
            for(int i=1;i<step;i++){
                ++it;
                if(it==l.end()){
                    it=l.begin();
                }
            }
        }else if(step<0){//go to left
            step=-step;
            auto tmp=it;
            if(tmp==l.begin()){//현재 위치가 1번째 원소.
                tmp=l.end();
            }
            --tmp;
            /*
             iterator가 가지고 있는 주소 값은 요소의 시작 위치이므로,
             앞의 요소로 이동할 때는 뒤로 이동할 때와 달리
             첫번째 요소인지 먼저 확인하고 이동연산을 해주어야 함.
             */
            l.erase(it);
            it=tmp;
            for(int i=1;i<step;i++){
                if(it==l.begin()){
                    it=l.end();
                }
                --it;
            }
        }
    }
    cout<<l.front().first<<"\n";
    return 0;
}
