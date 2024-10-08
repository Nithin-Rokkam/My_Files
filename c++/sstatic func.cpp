#include<iostream>
using namespace std;
class Account{
	public:
	int acc_no;
	double balance;
	static double rate;
	public:
		void get()
		{
			cout<<"enter accno and bal:"<<endl;
			cin>>acc_no>>balance;
		}
		void print()
		{
			cout<<"account no:"<<acc_no<<endl;
			cout<<"rate of interest:"<<rate<<endl;
			cout<<"balance:"<<balance<<endl;
		}
		void new_bal()
		{
			double interest=(balance*rate*0.25);
			balance=balance+interest;
		}
};
double Account::rate=0.05;
int main()
{
	Account c1,c2;
	c1.get();
	c2.get();
	c1.new_bal();
	c2.new_bal();
	c1.print();
	c2.print();
	return 0;
}
