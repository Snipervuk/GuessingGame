// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there
#include <iostream>
#include <string>

void MainMenu()
{
	std::cout << "\n";
	std::cout << "#####################################################################\n";
	std::cout << "1: Easy Mode\n";			//1-10
	std::cout << "2: Medium Mode\n";		//1-50
	std::cout << "3: Hard Mode\n";			//1-100
	std::cout << "4: Extreme Mode\n";		//1-1000
	std::cout << "#####################################################################\n";
	std::cout << "Please select a number from the menu to play the guessing number game: ";
}

int main()
{
	srand(time(NULL)); //random seed for number gen
	int chances;
	//int guesses;
	int gameMode;
	int randomnumberToGuess;
	int userguess;
	bool startGame = false;
	std::string playAgain;

	//Console Readline Test unit
	/*
	std::string name;
	std::cout << "Please enter in your name: ";
	std::getline(std::cin, name);
	std::cout << "Hello, " << name << "\n";
	*/


	do
	{
		MainMenu();
		std::cin >> gameMode;

		if (gameMode < 1 || gameMode > 4)
		{
			system("cls");
			std::cout << "\n";
			std::cout << "That is not a valid options please try again!\n";
		}
		else
		{
			startGame = true;
			break;
		}

	} while (gameMode < 1 || gameMode > 4 || startGame == false);

	//Guessing Mode Games here based on difficulity choice
	switch (gameMode)
	{
		while (startGame == true)
		{
	case 1:									//Easy Mode
		system("cls"); //clears console
		chances = 5;
		randomnumberToGuess = (rand() % 10) + 1;
		do
		{
			std::cout << "\n";
			std::cout << "Number is " << randomnumberToGuess << "\n";
			std::cout << "You have " << chances << " chances left\n";
			std::cout << "Guess the number between 0 to 10: ";
			std::cin >> userguess;
			--chances;

			if (userguess == randomnumberToGuess)
			{
				startGame = false; //this might need to be removed

				std::cout << "\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "   You have guessed correctly the number was " << randomnumberToGuess << " with " << chances << " chances left!\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "\n";
				std::cout << "\n";
				std::cout << "Would you like to play again? (Y/N): ";
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y")
				{
					//PlayAgain Function goes here
					do
					{
						system("cls");
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();


						if (gameMode < 1 || gameMode > 4)
						{
							system("cls");
							std::cout << "\n";
							std::cout << "That is not a valid options please try again!\n";
						}
						else
						{
							startGame = true;
							//gameMode = 1;
						}

					} while (gameMode < 1 || gameMode > 4 || startGame == false);
				}
				else
				{
					//Exit Apllication
					system("cls");
					std::cout << "--------------------\n";
					std::cout << "Thanks for playing!\n";
					std::cout << "--------------------\n";
					exit(2);
				}
			}
		} while (userguess != randomnumberToGuess && chances != 0);

		//Game lose Logic
		if (chances == 0 && userguess != randomnumberToGuess)
		{
			std::cout << "\n";
			std::cout << "--------------------\n";
			std::cout << "Game Over, You Lose!\n";
			std::cout << "--------------------\n";
			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Would you like to play again? (Y/N): ";

			//readline logic here
			std::cin.ignore();
			std::getline(std::cin, playAgain);

			if (playAgain == "Y")
			{
				//PlayAgain Function goes here
				do
				{
					system("cls");
					MainMenu();
					std::cin >> gameMode;
					std::cin.ignore();

					if (gameMode < 1 || gameMode > 4)
					{
						system("cls");
						std::cout << "\n";
						std::cout << "That is not a valid options please try again!\n";
					}
					else
					{
						startGame = true;
						//gameMode = 1;
					}

				} while (gameMode < 1 || gameMode > 4 || startGame == false);
			}
			else
			{
				//Exit Apllication
				system("cls");
				std::cout << "--------------------\n";
				std::cout << "Thanks for playing!\n";
				std::cout << "--------------------\n";
				exit(2);
			}
		}
		}

		while (startGame == true)
		{
	case 2:									//Medium Mode
		system("cls"); //clears console
		chances = 5;
		randomnumberToGuess = (rand() % 50) + 1;
		do
		{
			std::cout << "\n";
			std::cout << "Number is " << randomnumberToGuess << "\n";
			std::cout << "You have " << chances << " chances left\n";
			std::cout << "Guess the number between 0 to 10: ";
			std::cin >> userguess;
			--chances;

			if (userguess == randomnumberToGuess)
			{
				startGame = false; //this might need to be removed

				std::cout << "\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "   You have guessed correctly the number was " << randomnumberToGuess << " with " << chances << " chances left!\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "\n";
				std::cout << "\n";
				std::cout << "Would you like to play again? (Y/N): ";
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y")
				{
					//PlayAgain Function goes here
					do
					{
						system("cls");
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();


						if (gameMode < 1 || gameMode > 4)
						{
							system("cls");
							std::cout << "\n";
							std::cout << "That is not a valid options please try again!\n";
						}
						else
						{
							startGame = true;
							//gameMode = 1;
						}

					} while (gameMode < 1 || gameMode > 4 || startGame == false);
				}
				else
				{
					//Exit Apllication
					system("cls");
					std::cout << "--------------------\n";
					std::cout << "Thanks for playing!\n";
					std::cout << "--------------------\n";
					exit(2);
				}
			}
		} while (userguess != randomnumberToGuess && chances != 0);

		//Game lose Logic
		if (chances == 0 && userguess != randomnumberToGuess)
		{
			std::cout << "\n";
			std::cout << "--------------------\n";
			std::cout << "Game Over, You Lose!\n";
			std::cout << "--------------------\n";
			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Would you like to play again? (Y/N): ";

			//readline logic here
			std::cin.ignore();
			std::getline(std::cin, playAgain);

			if (playAgain == "Y")
			{
				//PlayAgain Function goes here
				do
				{
					system("cls");
					MainMenu();
					std::cin >> gameMode;
					std::cin.ignore();

					if (gameMode < 1 || gameMode > 4)
					{
						system("cls");
						std::cout << "\n";
						std::cout << "That is not a valid options please try again!\n";
					}
					else
					{
						startGame = true;
						//gameMode = 1;
					}

				} while (gameMode < 1 || gameMode > 4 || startGame == false);
			}
			else
			{
				//Exit Apllication
				system("cls");
				std::cout << "--------------------\n";
				std::cout << "Thanks for playing!\n";
				std::cout << "--------------------\n";
				exit(2);
			}
		}

		while (startGame == true)
		{
	case 3:									//Hard Mode
		system("cls"); //clears console
		chances = 5;
		randomnumberToGuess = (rand() % 100) + 1;
		do
		{
			std::cout << "\n";
			std::cout << "Number is " << randomnumberToGuess << "\n";
			std::cout << "You have " << chances << " chances left\n";
			std::cout << "Guess the number between 0 to 10: ";
			std::cin >> userguess;
			--chances;

			if (userguess == randomnumberToGuess)
			{
				startGame = false; //this might need to be removed

				std::cout << "\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "   You have guessed correctly the number was " << randomnumberToGuess << " with " << chances << " chances left!\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "\n";
				std::cout << "\n";
				std::cout << "Would you like to play again? (Y/N): ";
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y")
				{
					//PlayAgain Function goes here
					do
					{
						system("cls");
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();


						if (gameMode < 1 || gameMode > 4)
						{
							system("cls");
							std::cout << "\n";
							std::cout << "That is not a valid options please try again!\n";
						}
						else
						{
							startGame = true;
							//gameMode = 1;
						}

					} while (gameMode < 1 || gameMode > 4 || startGame == false);
				}
				else
				{
					//Exit Apllication
					system("cls");
					std::cout << "--------------------\n";
					std::cout << "Thanks for playing!\n";
					std::cout << "--------------------\n";
					exit(2);
				}
			}
		} while (userguess != randomnumberToGuess && chances != 0);

		//Game lose Logic
		if (chances == 0 && userguess != randomnumberToGuess)
		{
			std::cout << "\n";
			std::cout << "--------------------\n";
			std::cout << "Game Over, You Lose!\n";
			std::cout << "--------------------\n";
			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Would you like to play again? (Y/N): ";

			//readline logic here
			std::cin.ignore();
			std::getline(std::cin, playAgain);

			if (playAgain == "Y")
			{
				//PlayAgain Function goes here
				do
				{
					system("cls");
					MainMenu();
					std::cin >> gameMode;
					std::cin.ignore();

					if (gameMode < 1 || gameMode > 4)
					{
						system("cls");
						std::cout << "\n";
						std::cout << "That is not a valid options please try again!\n";
					}
					else
					{
						startGame = true;
						gameMode = 1;
					}

				} while (gameMode < 1 || gameMode > 4 || startGame == false);
			}
			else
			{
				//Exit Apllication
				system("cls");
				std::cout << "--------------------\n";
				std::cout << "Thanks for playing!\n";
				std::cout << "--------------------\n";
				exit(2);
			}
		}

		while (startGame == true)
		{
	case 4:									//Extreme Mode
		system("cls"); //clears console
		chances = 5;
		randomnumberToGuess = (rand() % 1000) + 1;
		do
		{
			std::cout << "\n";
			std::cout << "Number is " << randomnumberToGuess << "\n";
			std::cout << "You have " << chances << " chances left\n";
			std::cout << "Guess the number between 0 to 10: ";
			std::cin >> userguess;
			--chances;

			if (userguess == randomnumberToGuess)
			{
				startGame = false; //this might need to be removed

				std::cout << "\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "   You have guessed correctly the number was " << randomnumberToGuess << " with " << chances << " chances left!\n";
				std::cout << "-------------------------------------------------------------------------\n";
				std::cout << "\n";
				std::cout << "\n";
				std::cout << "Would you like to play again? (Y/N): ";
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y")
				{
					//PlayAgain Function goes here
					do
					{
						system("cls");
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();


						if (gameMode < 1 || gameMode > 4)
						{
							system("cls");
							std::cout << "\n";
							std::cout << "That is not a valid options please try again!\n";
						}
						else
						{
							startGame = true;
							gameMode = 1;
						}

					} while (gameMode < 1 || gameMode > 4 || startGame == false);
				}
				else
				{
					//Exit Apllication
					system("cls");
					std::cout << "--------------------\n";
					std::cout << "Thanks for playing!\n";
					std::cout << "--------------------\n";
					exit(2);
				}
			}
		} while (userguess != randomnumberToGuess && chances != 0);

		//Game lose Logic
		if (chances == 0 && userguess != randomnumberToGuess)
		{
			std::cout << "\n";
			std::cout << "--------------------\n";
			std::cout << "Game Over, You Lose!\n";
			std::cout << "--------------------\n";
			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Would you like to play again? (Y/N): ";

			//readline logic here
			std::cin.ignore();
			std::getline(std::cin, playAgain);

			if (playAgain == "Y")
			{
				//PlayAgain Function goes here
				do
				{
					system("cls");
					MainMenu();
					std::cin >> gameMode;
					std::cin.ignore();

					if (gameMode < 1 || gameMode > 4)
					{
						system("cls");
						std::cout << "\n";
						std::cout << "That is not a valid options please try again!\n";
					}
					else
					{
						startGame = true;
						gameMode = 1;
					}

				} while (gameMode < 1 || gameMode > 4 || startGame == false);
			}
			else
			{
				//Exit Apllication
				system("cls");
				std::cout << "--------------------\n";
				std::cout << "Thanks for playing!\n";
				std::cout << "--------------------\n";
				exit(2);
			}
		}
			break;
				default:
				break;
		}

		}
		}
	}
}