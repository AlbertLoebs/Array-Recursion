//  Write a recursive function that prints out the contents of an array 
//  of integers in reverse order.

#include <iostream>
#include <stdlib.h>

using namespace std;

void printArr(int arr[], int size) {

    if (size <= 1){
       if(size = 1){
           cout << arr[0];
       }
        return;
    }

    if(size > 1){
    printArr(arr + 1, size - 1);
    int i = 0;
    cout << " " << arr[i];
    }
}


int main()
{
    cout << "Test 1 : Calling printArr({1,2,3,4,5,6,7,8}, 8). Results are :\n";
    int test[] = {1,2,3,4,5,6,7,8};
    printArr(test, 8);

    cout << "\n\nTest 2 : Calling printArr({10,9,8}, 3). Results are :\n";
    int test2[] = {10,9,8};
    printArr(test2, 3);
    
    cout << "\n\nTest 3 : Calling printArr({100,90,80,70,60,50,40,30,20,10}, 10). Results are :\n";
    int test3[] = {100,90,80,70,60,50,40,30,20,10};
    printArr(test3, 10);

    return 0;
}
