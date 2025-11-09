#include <iostream>

int main()
{
    int number,i,factorial=1;
    // Factorial value is initialized from 1 because factorial is calculated using multiplication operation.
    // For example: 1 * 2 * 3 * 4 * 5 = 120 (5!=120)
    // If the factorial started at 0, all products would be 0.

     // Ask the user to enter a number
     std::cout << "Enter a number: ";
     std::cin >> number;

     // Negative number control (factorial is not defined for negative numbers)
     if(number < 0){
        std::cout << "Enter a number greater than zero!" << std::endl;
     }

     else{
        // Calculate factorial by multiplying from 1 to the entered number
        for(i=1;i<=number;i++){
            factorial = factorial * i;
        }
        // Print the result to the screen
        std::cout << number << "!=" << factorial << std::endl;
     }


   return 0;
}
