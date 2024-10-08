//#include<iostream>
//using namespace std;
//int main(){
//   int *pointer,n;
//   cout<<"Enter the amount of memory to be allocated"<<endl;
//   cin>>n;
//   pointer=new int [n];
//   int t;
//   for(int i=1;i<=n;i++){
//   	cout<<"Enter element "<<i<<endl;
//   	cin>>t;
//   	*(pointer+i)=t;
//   }
//   cout<<"The elements u have entered are:"<<endl;
//   for(int i=1;i<=n;i++){
//   	cout<<i<<" element is "<<*(pointer + i)<<endl;
//   }
//   delete []pointer;
//   return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class person{
//	public:
//		int a,b;
//		virtual void introduce(){
//			cout<<"From person..";
//		}
//		
//		int sum(int a,int b){
//			int sum=0;
//			sum=a+b;
//			return sum;
//		}
//};
//
//class student : public person{
//	public:
//		void introduce(){
//			cout<<"From student...";
//		}
//};
//void who(person &p){
//	p.introduce();	
//}
//
//int main(){
//	person nani;
//	student add;
//	cout<<add.sum(2,4)<<endl;
//	who(nani);
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    vector<int> v1(10);
//    
//    cout<<"size is\t"<<v1.size()<<"\n";
//    for(int i=0;i<=9;i++)
//    {
//
//            v1[i]=i;
//            cout<<v1[i]<<"\t";
//    }
//for(int i=10;i<=19;i++)
//    {
//           v1.push_back(i);
//    }
//cout<<"\nsize is\t"<<v1.size()<<"\n";
//for(int i=0;i<=19;i++)
//    {
//           cout<<v1[i]<<"\t";
//    }
//v1.pop_back();
//v1.pop_back();
//cout<<"\n New size of the vector:"<<v1.size();
//// use iterator to access the values
//   vector<int>::iterator v = v1.begin();
//   while( v != v1.end())
//    {
//      cout << "\nvalue of v = " << *v;
//      v++;
//    }
//   return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    vector<int> v1(10);
//    cout<<"size is\t"<<v1.size()<<"\n";
//    for(int i=0;i<=9;i++)
//    {
//
//             v1[i]=i;
//    }
//vector<int>:: iterator i=v1.begin();
//i=i+3;
//v1.insert(i,100);
////v1.erase(v1.begin());
//v1.erase(v1.begin()+1,v1.begin()+5);
// for(int i=0;i<v1.size();i++)
//    {
//           cout<<v1[i]<<"\t";
//    }
//    cout<<"\n"<<v1.size();
//    v1.clear();
//    cout<<"\n"<<v1.size();
//}

//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//int main()  {
//int key;
//int arr[] = { 12, 3, 17, 8, 34, 56, 9  };  // standard C array
//vector<int> v(arr, arr+7);  // initialize vector with C array 
//vector<int>::iterator iter;
//cout << "\nEnter value :";
//cin >> key;
//iter=find(v.begin(),v.end(),key); // finds integer key in v
//if (iter != v.end()) // found the element
//   cout << "Element " << key << " found" << endl;
//else
//  cout << "Element " << key << " not in vector v" << endl;   
//}

#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the array:";
cin>>n;
int arr[] = { n };  // standard C array
for(int i=0;i<n;i++){
	cin>>arr[i];
}
vector<int> v(arr, arr+n);  // initialize vector with C array 
for (vector<int>::iterator ite=v.begin(); ite!=v.end(); ite++)
// initialize i with pointer to first element of v
// i++ increment iterator, move iterator to next element
{
    cout << "the number is:"<<*ite << " \n";   // de-referencing iterator returns the
                             // value of the element the iterator points at 
}
cout << endl;
}




