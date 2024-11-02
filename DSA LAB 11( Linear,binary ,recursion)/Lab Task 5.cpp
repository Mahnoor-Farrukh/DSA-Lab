//Write a recursive function to calculate the sum of elements in an array.

#include <iostream>
using namespace std;

int arraySum(int arr[], int size) {
                      // if the array is empty, return 0
  if (size <= 0)
  {
  
    return 0;
}
   
   else
   {
   	
  return arr[size - 1] + arraySum(arr, size - 1);
}
}

int main() {
   int size = 10; 
    int nums[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    cout << "Array elements: " << endl;
    
    for (int i = 0; i < size; i++) {
        cout << nums[i] << ' ';
    }

    cout<<endl;
    int sum = arraySum(nums, size); // Calling the recursive function to get the sum

    cout << "Sum of array elements using recursion: " << sum << endl; // Display the sum
}

