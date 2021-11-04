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
void gameTopline();
extern bool typeWriterEnabled;
//Time Variables
extern int day, hour, min;
extern std::string sday, shour, smin;
extern int cday, chour, cmin;
extern bool tfhourclock;
void addDay(int days);
void addHour(int hours);
void addMin(int mins);
void displayTime();

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
	//Public Variables
public:
	bool playerAccess;									//If Player Can Access The Room
	bool firstVisit;									//If Player Is Visiting For The First Time
	std::string roomDesc1;								//If Player Wakes In The Room
	std::string roomDesc2;								//If Player Walks Into The Room
	std::string roomDescription;						//Description Of The Room And What Can Be Seen
	//int pPresentAtDay[14];								//Prisoners Present At Each Hour Of The Day
	//int pPresentAtNight;								//Prisoners Present At Night
	int gPresentAtDay;									//Guards Present During The Day
	int gPresentAtNight;								//Guards Present During The Night
	bool playerActions[25];								//How Many Actions The Player Can Choose In Each Room
	std::string actionDescription[25];					//Description Of The Actions

	//Private Variables
private:
	int i = 0;

	//Public Functions
public:
	void showRoomDescription()
	{
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
		i = 0;
		std::cout << "\n\n";

		for (int rA = 0; rA != 25; rA++)
		{
			i++;
			if (playerActions[rA] == true)
			{
				std::cout << "[" << i << "] " << actionDescription[rA];
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
