#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	// Variable Sets
	srand(time(NULL));
	int number = rand() % 100 + 1;
	int guess = 0;
	int count = 5;

	// Game
	while (guess != number && count > 0) {
		/// Input
		cout << "Pick a number (1-100): ";
		cin >> guess;
		cout << endl;

		/// Processing
		count--;
		if (guess == number) {
			cout << "Congrats! You got it!" << endl;
		}
		else if (guess >= number) {
			cout << "Oops! Too high." << endl;
			cout << count << " guesses left..." << endl;
		}
		else if (guess <= number) {
			cout << "Oops! Too low." << endl;
			cout << count << " guesses left..." << endl;
		}

		if (count == 0) 
			cout << "The number was " << number << ". :(" << endl;
		
	}

	return 0;
}
