#include "prepro.h"
#include <windows.h>

bool playGame = true;
void startMessage(), playerInputDetails();
void displayGameWindow(int x, int y, int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //Stores Consoles Current Dimensions
	int winWidth = r.right - r.left, winHeight = r.bottom - r.top;
	//Creates and Centres the Console
	MoveWindow(console, winWidth - x, winHeight / 2, width, height, TRUE);
}

int main()
{
	displayGameWindow(0, 0, 1250, 750);
	startMessage();
	playerInputDetails();
}

//Plays on Run, after Window is created
void startMessage()
{
	std::cout << R"(
__________        .__                     
\______   \_______|__| __________   ____  
 |     ___/\_  __ \  |/  ___/  _ \ /    \ 
 |    |     |  | \/  |\___ (  <_> )   |  \
 |____|     |__|  |__/____  >____/|___|  /
		__________                        __      
		\______   \_______   ____ _____  |  | __  
		 |    |  _/\_  __ \_/ __ \\__  \ |  |/ /  
		 |    |   \ |  | \/\  ___/ / __ \|    <   
		 |______  / |__|    \___  >____  /__|_ \  
		        \/              \/     \/     \/ 
)" << std::endl;
	Sleep(500);
	textTyper("\n\nPrisoner 401. Welcome to your first day in the clink, I can assure you I will do whatever I can do to make this the most painful experience for you that\nI can. Try not to get into any fights, or you will be punished.\nJust fit in with the other good boys.\n");
	system("pause");
}

void playerInputDetails()
{
	system("CLS");
	std::string playerName;
	int playerAge;
	std::cout << "You cast your eyes over the prison reception, the space is vast, well lit and with cameras monitoring every nook of the room. It is clear to you there \nis no blindspot in this particular room. Around you, you can see other prisoners being stripped and searched, you keep your face down to avoid making \neye contact with the other hardened criminals as you can.\n\nSuddenly you feel a gentle tap on your shoulder, and raise your face to meet the eyeline of another prisoner. He has a slightly muscular frame, blue \neyes with blonde hair, and is clearly one of the youngest and most agile in the room. He looks at you to talk.\nWhat is your name?" << std::endl;
	getline(std::cin, playerName);
	std::cout << "\nHe looks you up and down. That name suits you, " << playerName << ". He looks neither impressed nor the alternative. How old are you? He asks, squinting his eyes \nslightly, as though this will play a role in his judgement of you." << std::endl;
	std::cin >> playerAge;
	while (playerAge < 18)
	{
		std::cout << "You are far too young to be in prison. Are you sure this is your real age?.\nEnter your real age (18+)." << std::endl;
		std::cin >> playerAge;
	}

	//Create the Player following input
	PlayerStats playerOne{ playerName, playerAge, 100, 0, 0 ,0 ,0 ,0 };
}
