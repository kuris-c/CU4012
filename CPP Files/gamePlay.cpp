#include "prepro.h"

bool gameRunning = true;
int playerChoice;

void gamePlay()
{
	while (gameRunning)
	{
		if (playerLocation == "cellBlockA")
		{
			cellBlockA.showRoomDescription();
			cellBlockA.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Rummage Through Cell
				break;
			case 2:
				//Socialise With Other Prisoners
				break;
			case 3:
				//Start A Fight
				break;
			case 4:
				//Play Board Games
			case 5:
				playerLocation = "personalCell";
				break;
			case 6:
				playerLocation = "shower";
				break;
			case 7:
				playerLocation = "courtyard";
				break;
			case 8:
				playerLocation = "chapel";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "cellBlockB")
		{
			cellBlockB.showRoomDescription();
			cellBlockB.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Rummage Through Cell
				break;
			case 2:
				//Socialise With Other Prisoners
				break;
			case 3:
				//Start A Fight
				break;
			case 4:
				//Play Board Games
			case 5:
				playerLocation = "prisonShop";
				break;
			case 6:
				playerLocation = "courtyard";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "cellBlockC")
		{
			cellBlockC.showRoomDescription();
			cellBlockC.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Rummage Through Cell
				break;
			case 2:
				//Socialise With Other Prisoners
				break;
			case 3:
				//Start A Fight
				break;
			case 4:
				//Play Board Games
			case 5:
				playerLocation = "laundry";
				break;
			case 6:
				playerLocation = "courtyard";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "cellBlockD")
		{
			cellBlockD.showRoomDescription();
			cellBlockD.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Rummage Through Cell
				break;
			case 2:
				//Socialise With Other Prisoners
				break;
			case 3:
				//Start A Fight
				break;
			case 4:
				//Play Board Games
			case 5:
				playerLocation = "classroom";
				break;
			case 6:
				playerLocation = "courtyard";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "reception")
		{
			reception.showRoomDescription();
			reception.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				if (reception.playerActions[0] == true)
				{
					//Are you sure you would like to enter reception
				}
				break;
			case 2:
				if (reception.playerActions[1] == true)
				{
					//Break Into Room
				}
				break;
			case 3:
				if (reception.playerActions[2] == true)
				{
					//Attempt to break into guards cabinet
				}
			case 4:
				if (reception.playerActions[3] == true)
				{
					//Raise Prison alarm
				}
			case 5:
				if (reception.playerActions[4] == true)
				{
					//Open External Door
				}
			case 6:
				playerLocation = "courtyard";
				break;
			case 7:
				//playerLocation = "prisonEntrance";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "courtyard")
		{
			courtyard.showRoomDescription();
			courtyard.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Play Football
				break;
			case 2:
				//Watch Others Play Football
				break;
			case 3:
				//Go For A Run
				break;
			case 4:
				//Practice with Training Dummies
			case 5:
				//Socialise With The Other Prisoners
				break;
			case 6:
				//Meditate on The Grass
				break;
			case 7:
				//Start A Fight
				break;
			case 8:
				playerLocation = "cellBlockA";
				break;
			case 9:
				playerLocation = "cellBlockB";
				break;
			case 10:
				playerLocation = "cellBlockC";
				break;
			case 11:
				playerLocation = "cellBlockD";
				break;
			case 12:
				playerLocation = "reception";
				break;
			case 13:
				playerLocation = "canteen";
				break;
			case 14:
				playerLocation = "kitchen";
				break;
			case 15:
				playerLocation = "infirmary";
				break;
			case 16:
				playerLocation = "chapel";
				break;
			case 17:
				playerLocation = "commonRoom";
				break;
			case 18:
				playerLocation = "laundry";
				break;
			case 19:
				playerLocation = "classroom";
				break;
			case 20:
				playerLocation = "prisonShop";
				break;
			case 21:
				playerLocation = "visitation";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "canteen")
		{
			canteen.showRoomDescription();
			canteen.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Eat Meal
				break;
			case 2:
				//Use Prison Vending Machines
				break;
			case 3:
				//Socialise With Other Prisoners
				break;
			case 4:
				//Start A Fight
			case 5:
				//Look For Contraband
			case 6:
				playerLocation = "courtyard";
				break;
			case 7:
				playerLocation = "kitchen";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}

		if (playerLocation == "kitchen")
		{
			reception.showRoomDescription();
			reception.showRoomActions();
			inputTooltip();
			std::cin >> playerChoice;
			switch (playerChoice)
			{
			case 1:
				//Rummage Through Cell
				break;
			case 2:
				//Socialise With Other Prisoners
				break;
			case 3:
				//Start A Fight
				break;
			case 4:
				//Play Board Games
			case 5:
				playerLocation = "classroom";
				break;
			case 6:
				playerLocation = "courtyard";
				break;
			default:
				std::cout << "Please Enter The Corresponding Number!";
				inputTooltip();
				std::cin >> playerChoice;
				break;
			}
		}
	}
}
