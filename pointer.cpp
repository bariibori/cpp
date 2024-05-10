#include<iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Assign the address of the first element to the pointer

   cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
       cout << arr[i] << " ";
    }
   cout <<endl;

    *ptr = 10; // Modify the value of the first element using the pointer

   cout << "Modified Array: ";
    for (int i = 0; i < 5; i++) {
       cout << arr[i] << " ";
    }
   cout <<endl;

    return 0;
}