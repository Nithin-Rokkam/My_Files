#include<iostream>
using namespace std;
class first{
	int a;
	int b;
	public:
	void get()
	{
		cout<<"Enter the value of a and b:";
		cin>>a>>b;
	}
	void display()
	{
		cout<<"A:"<<a<<endl<<"B:"<<b<<endl;
	}
	friend int swap(first);
};
int swap(first obj)
{
	int temp;
	temp=obj.a;
	obj.a=obj.b;
	obj.b=temp;
	cout<<"A:"<<obj.a<<"\n"<<"B:"<<obj.b<<endl;
}
int main()
{
	first f1;
	f1.get();
	cout<<"Before swapping:"<<endl;
	f1.display();
	cout<<"After swapping:"<<endl;
	swap(f1);
	return 0;
}
