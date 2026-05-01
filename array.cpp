#include <iostream>
#include <vector>
using namespace std;
int main(){ 
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    if (n < 0){
        cout << "Enter the value greater than 0";
        return 1;
    }

    vector<int>arr(n);

    //Having the values inside the array
    cout << "Enter the values for the array\n";
    for (int i = 0; i < n; ++i){
        cout << "Element " << i << " ";
        cin >> arr[i];
    }

    //Printing out the elements of the array
    cout << "\nThe elements of the array are: ";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }

    //Printing out the specific element of the array
    int m;
    cout << "\nEnter the position you want to find: ";
    cin >> m;
    if (m >= n){
        cout << "Please enter the position lesser the size of array";
    } else{
        cout << "The element at " << m << "th position is : " << arr[m];
    }
    return 0;
}