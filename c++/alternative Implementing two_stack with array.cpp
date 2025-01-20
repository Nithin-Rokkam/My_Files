#include <iostream> 
using namespace std; 

class twoStacks { 
	int* arr; 
	int size; 
	int top1, top2; 

public: 
	// Constructor 
	twoStacks(int n) //declaring the size of the array
	{ 
		size = n; 
		arr = new int[n]; 
		top1 = 0;
		top2 = n-1; 
	} 

	void push1(int x) 
	{ 
		if (top1>=0) { 
			top1++; 
			arr[top1] = x; 
		} 
		else { 
			cout << "Stack1 Overflow"
				<< " By element : " << x << endl; 
			return; 
		} 
	} 
	void push2(int x) 
	{ 
		if (top2 <= size ) { 
			top2++; 
			arr[top2] = x; 
		} 
		else { 
			cout << "Stack2 Overflow"
				<< " By element : " << x << endl; 
			return; 
		} 
	} 

	// Method to pop an element from first stack 
	int pop1() 
	{ 
		if (top1 <top2) { 
			int x = arr[top1]; 
			top1++; 
			return x; 
		} 
		else { 
			cout << "Stack UnderFlow"; 
			exit(1); 
		} 
	} 

	// Method to pop an element from stack2
	int pop2() 
	{ 
		if (top2 >= top1) { 
			int x = arr[top2]; 
			top2--; 
			return x; 
		} 
		else { 
			cout << "Stack UnderFlow" << endl; 
			exit(1); 
		} 
	}
	
	int printarr(int *arr){
		for(int i=0;i<=5;i++){
			cout<<arr[i];
		}
	} 
}; 

int main() 
{ 
	twoStacks ts(5); 
	ts.push1(5); 
	ts.push2(10); 
	ts.push2(15); 
	ts.push1(11); 
	ts.push2(7); 
	ts.push2(23);
	cout << "Popped element from stack1 is "
		<< ": " << ts.pop1() << endl; 
	ts.push2(40); 
	cout << "Popped element from stack2 is "
		<< ": " << ts.pop2() << endl; 
		
	
	return 0; 
}

