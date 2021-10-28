#include "prepro.h"

void gameLogo()
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
								\/              \/     \/     \/ )" << std::endl;
}

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

void displayGameWindow(int width, int height)
{
	HWND console = GetConsoleWindow();
	HWND desktop = GetDesktopWindow();
	RECT r, d;
	GetWindowRect(console, &r); //Stores Consoles Current Dimensions
	GetWindowRect(desktop, &d);
	int x = d.right;
	int y = d.bottom;
	//Creates and Centres the Console
	MoveWindow(console, (x - width) / 2, (y - height) / 2, width, height, TRUE);
}

void inputTooltip()
{
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << " -> ";
}
