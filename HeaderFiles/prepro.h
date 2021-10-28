#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

//Global Variables + Settings Functions
extern std::string playerLocation; //Stores Player Location
void gameLogo(); //Display Game Logo + Centered
void displayGameWindow(int width, int height); //Centre and Size game Window
void textTyper(std::string inputText); //Type Text In Typewriter Style
void inputTooltip(); //Allows the player to know when to input text
void gamePlay(); //Main script to handle all gameplay elements
void createPrison();

//Initialize the player
class Player
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

//Initialize side characters class
class SideCharacters
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

//Extern to Side Characters
extern SideCharacters playerSidekick;

//Initialize the rooms
class PrisonRooms
{
public:
	bool playerAccess;						//If Player Can Access The Room
	bool firstVisit;						//If Player Is Visiting For The First Time
	std::string roomDesc1;					//If Player Wakes In The Room
	std::string roomDesc2;					//If Player Walks Into The Room
	std::string roomDescription;			//Description Of The Room And What Can Be Seen
	//int pPresentAtDay[14];					//Prisoners Present At Each Hour Of The Day
	//int pPresentAtNight;					//Prisoners Present At Night
	int gPresentAtDay;						//Guards Present During The Day
	int gPresentAtNight;					//Guards Present During The Night
	bool playerActions[7];					//How Many Actions The Player Can Choose In Each Room
	std::string actionDescription[7];		//Description Of The Actions
	bool locationsOpen[18];					//How Many Rooms Are Accessible
	std::string locationsDescription[18];	//Description Of The Rooms


	void showRoomDescription()
	{
		system("CLS");
		if (firstVisit)
		{
			textTyper(roomDesc2 + roomDescription);
			firstVisit = false;
		}

		else
		{
			std::cout << roomDescription;
		}
	}

	void showRoomActions()
	{
		std::cout << "\n\n";

		for (int i = 0; i != 7; i++)
		{
			if (playerActions[i] == true)
			{
				std::cout << actionDescription[i];
			}
		}
	}

	void showRoomLocations()
	{
		std::cout << "\n";

		for (int i = 0; i != 18; i++)
		{
			if (locationsOpen[i] == true)
			{
				std::cout << locationsDescription[i];
			}
		}
	}
};

//Extern to Prison Rooms
extern PrisonRooms cellBlockA;
extern PrisonRooms cellBlockB;
extern PrisonRooms cellBlockC;
extern PrisonRooms cellBlockD;
extern PrisonRooms reception;
extern PrisonRooms courtyard;
extern PrisonRooms canteen;
extern PrisonRooms kitchen;
extern PrisonRooms infirmary;
extern PrisonRooms chapel;
extern PrisonRooms commonRoom;
extern PrisonRooms laundry;
extern PrisonRooms classroom;
extern PrisonRooms prisonShop;
extern PrisonRooms visitation;
extern PrisonRooms personalCell;
extern PrisonRooms tunnel;
extern PrisonRooms therapistOffice;
extern PrisonRooms shower;
