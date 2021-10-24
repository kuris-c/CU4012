#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

//Initialize the player
class PlayerStats
{
public:
	//Player Inputted Details
	std::string playerName;
	int playerAge;

	//Player Ingame Stats
	int playerHitPoints;
	int playerHunger;

	//Player Skills
	int playerLockpicking;
	int playerTunneling;
	int playerDeceit;
	int playerSprinting;
};

//Other Main Characters
extern PlayerStats playerSidekick;

//Global Variables

//Text Progressive Typer
void textTyper(std::string inputText)
{
	int i = 0;
	while (inputText[i] != '\0')
	{
		std::cout << inputText[i];
		Sleep(18);
		i++;
	};
}
