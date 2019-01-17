#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Person{
    string name;
    int kor,eng,math;
}; //semicolon!!

bool cmp(Person &p1, Person &p2){
    if(p1.kor>p2.kor){
        return true;
    }else if(p1.kor==p2.kor){
        if(p1.eng<p2.eng){
            return true;
        }else if(p1.eng==p2.eng){
            if(p1.math>p2.math){
                return true;
            }else if(p1.math==p2.math){
                return p1.name<p2.name;
            }
        }
    }
    return false;
}

int main(){
    int n; cin>>n;
    vector<Person> v(n); //v.size()=n;
    for(int i=0;i<n;i++){
        cin>>v[i].name>>v[i].kor>>v[i].eng>>v[i].math;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].name<<"\n";
    }
    /*
     [inefficient code]
     vector<Person> v; //v.size()=n;
     for(int i=0;i<n;i++){
        Person tmp;
        cin>>tmp.name>>tmp.kor>>tmp.eng>>tmp.math;
        v.push_back(tmp);
     }
     sort(v.begin(),v.end(),cmp);
     for(unsigned int i=0;i<v.size();i++){
     cout<<v[i].name<<"\n";
     }
     */
    return 0;
}
