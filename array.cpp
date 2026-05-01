#include <iostream>
#include <vector>
using namespace std;
int main(){ 
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    if (n < 0){
        cout << "Enter the value greater than 0";
    }

    vector<int>arr(n);

    cout << "Enter the values for the array\n";
    for (int i = 0; i < n; ++i){
        cout << "Element " << i << " ";
        cin >> arr[i];
    }
    cout << "\nThe elements of the array are: ";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}