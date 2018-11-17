// WannaSmash.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

int main()
{

	srand(time(0));
	bool valid; // validity of player choice
	int rosterInput; // type number between 1 and 3
	int playerNum;
	char redo = 'y'; // run at least once
	const int numPicks = 3;
	const int stringSize = 20;
	const std::string TAKEN = "taken.";
	std::string playerPicks[3];
	std::string roster[73] = {
		"Mario",
		"Donkey Kong",
		"Link",
		"Samus",
		"Dark Samus",
		"Yoshi",
		"Kirby",
		"Fox",
		"Pikachu",
		"Luigi",
		"Ness",
		"Captain Falcon",
		"Jigglypuff",
		"Peach",
		"Daisy",
		"Bowser",
		"Ice Climbers",
		"Sheik",
		"Zelda",
		"Dr. Mario",
		"Pichu",
		"Falco",
		"Marth",
		"Lucina",
		"Young Link",
		"Ganondorf",
		"Mewtwo",
		"Roy",
		"Chrom",
		"Mr. Game and Watch",
		"Meta Knight",
		"Dark Pit",
		"Zero Suit Samus",
		"Wario",
		"Snake",
		"Ike",
		"Pokemon Trainer",
		"Diddy Kong",
		"Lucas",
		"Sonic",
		"King Dedede",
		"Olimar",
		"Lucario",
		"R.O.B.",
		"Toon Link",
		"Wolf",
		"Villager",
		"Mega Man",
		"Wii Fit Trainer",
		"Rosalina & Luma",
		"Little Mac",
		"Greninja",
		"Mii Brawler",
		"Mii Gunner",
		"Mii Swordfighter",
		"Paulutena",
		"Pac-Man",
		"Robin",
		"Shulk",
		"Bowser Jr.",
		"Duck Hunt",
		"Ryu",
		"Ken",
		"Cloud",
		"Corrin",
		"Bayonetta",
		"Inkling",
		"Ridley",
		"Simon",
		"Richter",
		"King K. Rool",
		"Isabelle",
		"Incineroar"
	};

	while (redo != 'n' && redo != 'N') {
		for (int i = 0; i < 3; i++)
		{
			int firstOption = rand() % 73;
			while (roster[firstOption] == TAKEN) { // re-pick until character isn't taken
				firstOption = rand() % 73;
			}

			int secondOption = rand() % 73;
			while (roster[secondOption] == TAKEN) { // re-pick until pickTwo isn't taken
				secondOption = rand() % 73;
			}

			int thirdOption = rand() % 73;
			while (roster[thirdOption] == TAKEN) { // re-pick until pickThree isn't taken
				thirdOption = rand() % 73;
			}

			valid = false;
			while (valid == false) {
				std::cout << "choose one" << std::endl;
				std::cout << "1: " << roster[firstOption] << "   2: " << roster[secondOption] << "   3: " << roster[thirdOption] << std::endl;
				std::cin >> rosterInput;
				switch (rosterInput) {
				case 1:
					playerPicks[i] = roster[firstOption];
					roster[firstOption] = TAKEN;
					valid = true;
					break;

				case 2:
					playerPicks[i] = roster[secondOption];
					roster[secondOption] = TAKEN;
					valid = true;
					break;

				case 3:
					playerPicks[i] = roster[thirdOption];
					roster[thirdOption] = TAKEN;
					valid = true;
					break;

				default:
					std::cout << "Please pick one of the choices given." << std::endl;
					valid = false;
					break;
				}
			}

		}
		std::cout << "your charcters are: " << playerPicks[0] << ", " << playerPicks[1] << ", " << playerPicks[2] << std::endl;
		std::cout << "Start over? (Y/N) " << std::endl;
		std::cin >> redo;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
