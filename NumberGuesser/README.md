# Number Guesser

## Explanation
This is just a simple little number guesser to get myself refreshed on some C++ basics. Nothing terribly fancy, just a program that generates a random number and gives the user five attempts to guess it right. 

## Approach
My approach is the general approach for this kind of program. I generate a random number and a variable to hold the user's guess, and an additional variable that allows the user to make a set amount of guesses. Then, in a large `while` loop, until the user either gets the number or runs out of guesses, allow them to enter a guess. If it's too low or too high, inform the user and also mention how many guesses they have left. That's really about it! Nothing overly fancy. :)

## Psuedocode
	// Variable Sets
	Set the time to be null so it generates a different number every time
	Generate a random number between 1 and 100
	Set a variable for the user's guess
	Set a variable for the amount of guesses a user gets.

	// Game
	While the user hasn't picked a number or run out of guesses,
		/// Input
		+Ask for an answer from 1 to 100
		+Insert their guess into the guess variable
		+Put a little endline at the end.

		/// Processing
		+Subtract one from count
		+If the user gets the number right,
			-Congratulate them!
		+If the user guesses too high,
			-Inform them of such
			-Tell them how many guesses they have left
		+If the user guesses too low,
			-Inform them of such
			-Tell them how many guesses they have left

		+If they run out of guesses,
			Tell them what the number was.

## C# Code
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

## Implementation
Implementation went perfect! I did make slight alterations because I decided adding a set amount of guesses would be more enjoyable and I trhew in some endlines for better visual look, but besides that it went just fine! Nothing too exciting to report, but that's manily just because it's a very simple program.

## Testing
I did a bunch of testing at the beginning to figure out how to get the random numbers to work, and adding that last output at the end that informs the user of the correct number was a handy tool to ensure there wasn't any issues with the random numbers. Past that, nothing too much to test or report here. :)