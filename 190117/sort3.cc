#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Person{
    int age;
    string name;
    int join;
};

bool cmp(Person &p1, Person &p2){
    if(p1.age<p2.age){
        return true;
    }else if(p1.age==p2.age){
        if(p1.join<p2.join){
            return true;
        }
    }   
    return false;
}

int main(){
    int n; cin>>n;
    vector<Person> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].age>>v[i].name;
        v[i].join=i;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].age<<" "<<v[i].name<<"\n";
    }
    return 0;
}