//Write a recursive function to calculate the factorial of a number.


#include<iostream>
using namespace std;

int factorial(int n) {
  if(n > 1)
  {
  
    return n * factorial(n - 1);//if user enters 5 it calls factorial(5)so it becomes 5*factorial(4)
}                                //4×factorial(3) and so on until it reaches 1
  else  
  {                       
    return 1;
}
}

int main() {

  int num;

  cout << "Enter a positive integer: ";
  cin >> num;

  cout << "Factorial of " << num << " = " << factorial(num);

  return 0;
}


