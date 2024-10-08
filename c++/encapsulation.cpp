#include<iostream>
using namespace std;
class ABC{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};

int main(){
    ABC obj1;
     int n;
     cout<<"enter the value of n:";
     cin>>n;
    obj1.set(n);
    cout<<obj1.get();
    return 0;
}
