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
	std::cout << "5: Quit\n";		//1-1000
	std::cout << "#####################################################################\n";
	std::cout << "Please select a number from the menu to play the guessing number game: ";
}

void NotAValidOption() 
{
	//ClearConsole();
	system("cls");
	std::cout << "\n---------------------------------------------\n";
	std::cout << "That is not a valid option, please try again!\n";
	std::cout << "---------------------------------------------\n";
}


void GameOverMenu() 
{
	std::cout << "\n";
	std::cout << "--------------------\n";
	std::cout << "Game Over, You Lose!\n";
	std::cout << "--------------------\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Would you like to play again? (Y/N): ";
}

void LowerNumberLine() 
{
	std::cout << "\n-------------------";
	std::cout << "\n Number is lower!\n";
	std::cout << "-------------------\n";
}

void HigherNumberLine() 
{
	std::cout << "\n-------------------";
	std::cout << "\n Number is higher!\n";
	std::cout << "-------------------\n";
}

void ThanksForPlaying() 
{
	system("cls");
	std::cout << "--------------------\n";
	std::cout << "Thanks for playing!\n";
	std::cout << "--------------------\n";
	exit(2);
}

void ClearConsole() 
{
	system("cls");
}

int main()
{
	srand(time(NULL)); //random seed for number gen
	int chances;
	int gameMode;
	int randomnumberToGuess;
	int userguess;
	bool startGame = false;
	std::string playAgain;

	do
	{
		MainMenu();
		std::cin >> gameMode;

		if (gameMode < 1 || gameMode > 5)
		{
			NotAValidOption();
		}
		else
		{
			startGame = true;
			break;
		}

	} while (gameMode < 1 || gameMode > 5 || startGame == false);

	while (startGame == true && gameMode != 5)
	{
		//Guessing Mode Games here based on difficulity choice
		switch (gameMode)
		{
			while (startGame == true && gameMode == 1)
			{
			case 1:									//Easy Mode

			ClearConsole();
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

				//Higher
				if (userguess < randomnumberToGuess)
				{
					HigherNumberLine();
				}

				//Lower
				else if (userguess != randomnumberToGuess)
				{
					LowerNumberLine();
				}

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

					if (playAgain == "Y" || playAgain == "y")
					{
						//PlayAgain Function goes here
						do
						{
							ClearConsole();
							MainMenu();
							std::cin >> gameMode;
							std::cin.ignore();


							if (gameMode < 1 || gameMode > 5)
							{
								NotAValidOption();
							}
							else
							{
								startGame = true;
							}

						} while (gameMode < 1 || gameMode > 5 || startGame == false);
					}
					else
					{
						//Exit Apllication
						ThanksForPlaying();
					}
				}
			} while (userguess != randomnumberToGuess && chances != 0);

			//Game lose Logic
			if (chances == 0 && userguess != randomnumberToGuess)
			{
				GameOverMenu();

				//readline logic here
				std::cin.ignore();
				std::getline(std::cin, playAgain);


				//Higher
				if (userguess < randomnumberToGuess)
				{
					HigherNumberLine();
				}

				//Lower
				else if (userguess != randomnumberToGuess)
				{
					LowerNumberLine();
				}


				if (playAgain == "Y" || playAgain == "y")
				{
					//PlayAgain Function goes here
					do
					{
						ClearConsole();
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();

						if (gameMode < 1 || gameMode > 5)
						{
							NotAValidOption();
						}
						else
						{
							startGame = true;
						}

					} while (gameMode < 1 || gameMode > 5 || startGame == false);
				}
				else
				{
					//Exit Apllication
					ThanksForPlaying();
				}
			}
			}

			while (startGame == true && gameMode == 2)
			{
		case 2:									//Medium Mode
			ClearConsole();
			chances = 5;
			randomnumberToGuess = (rand() % 50) + 1;
			do
			{
				std::cout << "\n";
				std::cout << "Number is " << randomnumberToGuess << "\n";
				std::cout << "You have " << chances << " chances left\n";
				std::cout << "Guess the number between 0 to 50: ";
				std::cin >> userguess;
				--chances;

				//Higher
				if (userguess < randomnumberToGuess)
				{
					HigherNumberLine();
				}

				//Lower
				else if (userguess != randomnumberToGuess)
				{
					LowerNumberLine();
				}

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

					if (playAgain == "Y" || playAgain == "y")
					{
						//PlayAgain Function goes here
						do
						{
							ClearConsole();
							MainMenu();
							std::cin >> gameMode;
							std::cin.ignore();

							if (gameMode < 1 || gameMode > 5)
							{
								NotAValidOption();
							}
							else
							{
								startGame = true;
							}

						} while (gameMode < 1 || gameMode > 5 || startGame == false);
					}
					else
					{
						//Exit Apllication
						ThanksForPlaying();
					}
				}
			} while (userguess != randomnumberToGuess && chances != 0);

			//Game lose Logic
			if (chances == 0 && userguess != randomnumberToGuess)
			{
				GameOverMenu();

				//readline logic here
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y" || playAgain == "y")
				{
					//PlayAgain Function goes here
					do
					{
						ClearConsole();
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();

						if (gameMode < 1 || gameMode > 5)
						{
							NotAValidOption();
						}
						else
						{
							startGame = true;
						}

					} while (gameMode < 1 || gameMode > 5 || startGame == false);
				}
				else
				{
					//Exit Apllication
					ThanksForPlaying();
				}
			}

			while (startGame == true && gameMode == 3)
			{
		case 3:									//Hard Mode
			ClearConsole();
			chances = 5;
			randomnumberToGuess = (rand() % 100) + 1;
			do
			{
				std::cout << "\n";
				std::cout << "Number is " << randomnumberToGuess << "\n";
				std::cout << "You have " << chances << " chances left\n";
				std::cout << "Guess the number between 0 to 100: ";
				std::cin >> userguess;
				--chances;

				//Higher
				if (userguess < randomnumberToGuess)
				{
					HigherNumberLine();
				}

				//Lower
				else if (userguess != randomnumberToGuess)
				{
					LowerNumberLine();
				}


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

					if (playAgain == "Y" || playAgain == "y")
					{
						//PlayAgain Function goes here
						do
						{
							ClearConsole();
							MainMenu();
							std::cin >> gameMode;
							std::cin.ignore();


							if (gameMode < 1 || gameMode > 4)
							{
								NotAValidOption();
							}
							else
							{
								startGame = true;
							}

						} while (gameMode < 1 || gameMode > 5 || startGame == false);
					}
					else
					{
						//Exit Apllication
						ThanksForPlaying();
					}
				}
			} while (userguess != randomnumberToGuess && chances != 0);

			//Game lose Logic
			if (chances == 0 && userguess != randomnumberToGuess)
			{
				GameOverMenu();

				//readline logic here
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y" || playAgain == "y")
				{
					//PlayAgain Function goes here
					do
					{
						ClearConsole();
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();

						if (gameMode < 1 || gameMode > 5)
						{
							NotAValidOption();
						}
						else
						{
							startGame = true;
						}

					} while (gameMode < 1 || gameMode > 5 || startGame == false);
				}
				else
				{
					//Exit Apllication
					ThanksForPlaying();
				}
			}

			while (startGame == true && gameMode == 4)
			{
		case 4:									//Extreme Mode
			ClearConsole();
			chances = 5;
			randomnumberToGuess = (rand() % 1000) + 1;
			do
			{
				std::cout << "\n";
				std::cout << "Number is " << randomnumberToGuess << "\n";
				std::cout << "You have " << chances << " chances left\n";
				std::cout << "Guess the number between 0 to 1000: ";
				std::cin >> userguess;
				--chances;

				//Higher
				if (userguess < randomnumberToGuess)
				{
					HigherNumberLine();
				}

				//Lower
				else if (userguess != randomnumberToGuess)
				{
					LowerNumberLine();
				}

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

					if (playAgain == "Y" || playAgain == "y")
					{
						//PlayAgain Function goes here
						do
						{
							ClearConsole();
							MainMenu();
							std::cin >> gameMode;
							std::cin.ignore();

							if (gameMode < 1 || gameMode > 5)
							{
								NotAValidOption();
							}
							else
							{
								startGame = true;

							}

						} while (gameMode < 1 || gameMode > 5 || startGame == false);
					}
					else
					{
						//Exit Apllication
						ThanksForPlaying();
					}
				}
			} while (userguess != randomnumberToGuess && chances != 0);

			//Game lose Logic
			if (chances == 0 && userguess != randomnumberToGuess)
			{
				GameOverMenu();

				//readline logic here
				std::cin.ignore();
				std::getline(std::cin, playAgain);

				if (playAgain == "Y" || playAgain == "y")
				{
					//PlayAgain Function goes here
					do
					{
						ClearConsole();
						MainMenu();
						std::cin >> gameMode;
						std::cin.ignore();

						if (gameMode < 1 || gameMode > 5)
						{
							NotAValidOption();
						}
						else
						{
							startGame = true;
						}

					} while (gameMode < 1 || gameMode > 5 || startGame == false);
				}
				else
				{
					//Exit Apllication
					ThanksForPlaying();
				}
			}

			if (gameMode == 5)
			{
		case 5:
			ThanksForPlaying();
			break;
		default:
			break;
			}
			}
			}
			}
		}
	}
}