//Write a recursive function to perform binary search on a sorted array.

#include <iostream>
using namespace std;

int binarySearch(int array[], int search, int end, int start) {
  if (start >= end) {
    int mid = end + (start - end) / 2;

    // If found at mid, then return it
    if (search == array[mid])
      return mid;

    // Search the right half
    if (search> array[mid])
      return binarySearch(array, search, mid + 1, start);

    // Search the right half
    return binarySearch(array, search, end, mid - 1);
  }

  return -1;
}

int main() {
  
  
    int size = 7;  
   
    int array[size] = {3, 4, 5, 6, 7, 8, 9};  
    
     for(int i=0;i<size;i++)
    {
    	cout<<array[i]<<" ";
	}
    cout<<endl;
    int x;  //X=Target element
    cout << "Enter the target value to search: ";
    cin >> x;

    int result = binarySearch(array, x, 0, size - 1); // Start search from index 0 to n - 1


    
    if (result == -1)
        cout << "Not found" << endl;
    else
        cout << "Element is found at index " << result << endl;
}

