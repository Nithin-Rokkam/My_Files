#include<iostream>
using namespace std;
int main(){
	int row,col,i,j;
	cout<<"Enter the no of rows and coloumns:";
	cin>>row>>col;
	int arr[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\narr["<<i<<"]["<<j<<"]= ";
			cin>>arr[i][j];
		}
	}
		cout<<"Your array is:\n";
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				cout<<"\t"<<arr[i][j];
			}
			cout<<endl;
		}
	return 0;
}
