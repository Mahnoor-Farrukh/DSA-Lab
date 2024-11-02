/*A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit "lucky" combinations. Write a program that initializes an array or a vector with these numbers and then lets the player enter this week's winning 5-digit number.  55555
The program should perform a linear search through the list of the player's numbers and report whether or not one of the tickets is a winner this week. 
Here are the numbers: 
13579 26791 26792 33445 55555 
62483 77777 79422 85647 93121
If the user enters a number that is not in the array, the program should display a message indicating that the number is invalid.
*/

#include <iostream>
using namespace std;

int main() {

    int luckyNumbers[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

    int search;
    cout << "Enter this week's winning 5-digit number: ";
    cin >> search;

    
    int Winner = 0;  // no winning number has been found yet.

    
    for (int i = 0; i < 10; i++) {
        if (luckyNumbers[i] == search) {
            Winner = 1; //number found
            break;
        }
    }

    // Display result based on the search
    if (Winner) {
        cout << "Congratulations! You have a winning ticket: " << search << endl;
    } else {
        cout << "Sorry, no winning ticket this week." << endl;
    }

    return 0;
}

