//#include<stdio.h>
//int main(){
//	int n,i;
//	scanf("d",&n);
//	int arr[n];
//	printf("Enter the elements:");
//	for(i=0;i<n;i++){
//		scanf("%d ",arr[i]);
//	}
//	for(i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class person{
    public:
    int a,b;
    virtual void introduce(){
        cout<<"Hi this is from person";
    }
    int sum(int a,int b){
        int sum=0;
        sum=a+b;
        return sum;
    }
    // int show(){
    //     return sum;
    // }
};

class student : public person{
    public:
    void introduce(){
        cout<<"Hi this is from student";
    }
};
int main(){
    student nani;
    student a,b;
    a.sum(1,5);
    nani.introduce();
    return 0;
}
