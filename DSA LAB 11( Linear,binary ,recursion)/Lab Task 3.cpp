//Write a recursive function to perform linear search on an array.

#include <iostream>
using namespace std;


int linearsearch(int arr[], int size, int target, int index = 0) {
    
    if (size<0) { //the target element is not found cause give size is less than 0
        return -1;
    }
                              
    else if (arr[index] == target) // Check if the current element matches the target
	{ 
        return index; 
    }
    else
    {
	
    return linearsearch(arr, size, target, index + 1);//index + 1 is used to increment the index by 1
}
}

int main() {
    int size = 5;
    int search;
    int array[size] = {2, 4, 6, 8, 9};
    
    cout << "Enter value you want to search: ";
    cin >> search;


    int result = linearsearch(array, size, search);
    
   
    if (result !=-1) //1 means value found
	{  
	                
        cout << "Value found at index: " << result << endl;
    } 
	else 
	{
        cout << "Value not found in the array." << endl;
    }

    return 0;
}

