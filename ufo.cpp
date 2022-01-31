#include <iostream>
#include <string>
#include "ufo_functions.hpp"

using namespace std;

int main()
{

    greet();

    string codeword = "codecademy";
    string answer = "__________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {

        display_misses(misses);
        display_status(incorrect, answer);
        cout << "Please enter your guess: ";
        cin >> letter;

        if (!reused(incorrect, letter))
        {

            for (int i = 0; i < codeword.length(); i++)
            {
                if (codeword[i] == letter)
                {
                    answer[i] = codeword[i];
                    guess = true;
                }
            }

            if (guess)
                cout << "Correct!\n";
            else
            {
                cout << "Incorrect! The tractor beam pulls the person in further.\n";
                incorrect.push_back(letter);
                misses++;
            }

            guess = false;
        }
        else
        {
            cout << "You have already entered this letter. Try again!\n";
            continue;
        }
    }

    cout << endl;
    end_game(codeword, answer);
}
