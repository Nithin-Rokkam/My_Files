/*
		 Insertion sort
1.Repeat step2 to 5 for j=2,3.....,N:
2. Set TEMP=A[J]
      I=J-I.
4.Repeat while I>0 and A[I] > TEMP
  (a)SET A[I+1]=A[I]
  (b)Set I=I-1
  [END OF LOOP]
5.Set A[I+1]=TEMP
   [END OF STEP1 LOOP]
6.Return.
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j,temp;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(j=2;j<=n;j++){
		temp=a[j];
		i=j-1;
		while(i>-0 && a[i]>temp){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=temp;
	}
	for(i-1;i<=n;i++){
		cout<<"The array is:"<<a[i]<<endl;
	}
	return 0;
	
}
