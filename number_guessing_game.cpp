//guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
 {
    // Generate a random number between 1 and 100
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

   cout<< "Welcome to the Number Guessing Game!" <<endl;
    cout << "I'm thinking of a number between 1 and 100." << std::endl;

    // Ask the user to guess the number until they get it right
    do {
        cout << "Take a guess: ";
        cin>>guess;
        tries++;

        if (guess<secretNumber) 
        {
            cout << "Too low! Try again." <<endl;
        } 
            else if (guess>secretNumber) 
           {
               cout <<"Too high! Try again." <<endl;
           } 
             else
              {
                 cout << "Congratulations! You guessed it in " << tries << " tries." <<endl;
        }
    } while (guess != secretNumber);

    return 0;
}