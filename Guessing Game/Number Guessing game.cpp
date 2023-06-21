#include <iostream>
using namespace std;

int main() {


// Declaring variables
int radnumber;
int userinput;
int tries = 0;
string Start;

// random number generator

radnumber = rand() % 10;
 
 
std::cout << "Enter any key, and press enter to begin the game" << std::endl;
std::cin >> Start;
 
    //While loop to check if user input is valid

    while (userinput != radnumber) {

        // user input is to high

        if (userinput > radnumber) {
            std::cout << "Too high" << std::endl;
        }

        //user input is to low

        else if (userinput < radnumber) {
            std::cout << "Too low" << std::endl;
        }
        //user entered a valid number

        std::cout << "Guess a  number between 1 and 10" << std::endl;
        std:: cin >> userinput;
        tries++;
    } 
    std::cout << "You guessed it in " << tries << " tries" << std::endl;
    return 0;

}

 


