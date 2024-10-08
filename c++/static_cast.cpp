#include<iostream>
using namespace std;
/**enum roll_no
{
amit=1, sumit, priya, ayush, vansh, rohan ,sohan, mohan, jessica
};
int main()
{

roll_no obj;
obj=vansh;
cout<<"Roll no is: "<<obj;
}**/

enum days
{
sun=1, mon,tue,wed,thurs,fri,sat
};
int main()
{
int userinput;
cout<<"Enter the number between 1-7:"<<endl;
cin>>userinput;
if(userinput>=sun && userinput<=sat)
{
days select=static_cast<days>(userinput);
switch(select)
{
case sun:
cout<<"The day is sunday";
break;
case mon:
cout<<"The day is monday";
break;
case tue:
cout<<"The day is tuesday";
break;
case wed:
cout<<"The day is wednesday";
break;
case thurs:
cout<<"The day is thursday";
break;
case fri:
cout<<"The day is friday";
break;
case sat:
cout<<"The day is saturday:";
break;
}
}
else
{
cout<<"Invalid input!!";
}
}
