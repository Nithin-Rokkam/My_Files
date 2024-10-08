#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout<<endl;
    // Printing the upper triangle of the matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i <= j) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl; 
    }
    cout<<endl;
    // Printing the lower triangular matrix
    for (int i=0;i<row;i++) { 
        for (int j=0;j<col;j++) { 
            if(i>=j){
            cout<<arr[i][j]<< " "; 
        } 
        }
        cout << endl; 
    }
    
    return 0;
}

