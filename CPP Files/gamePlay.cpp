#include "prepro.h"

bool gameRunning = true;									//Game Loop
int playerChoice;											//Player Decisions

//Function Names


//Name Spaces For Functions
#pragma region cbA
namespace cbA
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			cellBlockA.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}
	
	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (cellBlockA.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					break;
				case 5:
					playerLocation = "personalCell";
					inRoom = false;
					break;
				case 6:
					playerLocation = "shower";
					inRoom = false;
					break;
				case 7:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 8:
					playerLocation = "chapel";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!cellBlockA.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cbB
namespace cbB
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			cellBlockB.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (cellBlockB.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					break;
				case 5:
					playerLocation = "prisonShop";
					inRoom = false;
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!cellBlockB.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cbC
namespace cbC
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			cellBlockC.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (cellBlockC.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					break;
				case 5:
					playerLocation = "laundry";
					inRoom = false;
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!cellBlockC.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cbD
namespace cbD
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			cellBlockD.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (cellBlockA.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					break;
				case 5:
					playerLocation = "classroom";
					inRoom = false;
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!cellBlockA.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region rcp
namespace rcp
{
	void checkAccess()
	{
		reception.playerAccess = false;
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (reception.playerAccess)
			{
				system("CLS");
				gameTopline();
				reception.showRoomDescription();
				reception.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Attempt To Break Into Side Room
					break;
				case 2:
					//Attempt To Break Into Guard Cabinet
					break;
				case 3:
					//Raise Prison Alarm
					break;
				case 4:
					//Open External Door
					break;
				case 5:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 6:
					//Go To The Prison Entrance
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!reception.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cty
namespace cty
{
	void checkAccess()
	{
		courtyard.playerAccess = true;
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (courtyard.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					//Practice With Training Dummies
					break;
				case 5:
					//Socialise With Other Prisoners
					break;
				case 6:
					//Meditate On The Grass
					break;
				case 7:
					//Start A Fight
					break;
				case 8:
					playerLocation = "cellBlockA";
					inRoom = false;
					break;
				case 9:
					playerLocation = "cellBlockB";
					inRoom = false;
					break;
				case 10:
					playerLocation = "cellBlockC";
					inRoom = false;
					break;
				case 11:
					playerLocation = "cellBlockD";
					inRoom = false;
					break;
				case 12:
					playerLocation = "reception";
					inRoom = false;
					break;
				case 13:
					playerLocation = "canteen";
					inRoom = false;
					break;
				case 14:
					playerLocation = "kitchen";
					inRoom = false;
					break;
				case 15:
					playerLocation = "infirmary";
					inRoom = false;
					break;
				case 16:
					playerLocation = "chapel";
					inRoom = false;
					break;
				case 17:
					playerLocation = "commonRoom";
					inRoom = false;
					break;
				case 18:
					playerLocation = "laundry";
					inRoom = false;
					break;
				case 19:
					playerLocation = "classroom";
					inRoom = false;
					break;
				case 20:
					playerLocation = "prisonShop";
					inRoom = false;
					break;
				case 21:
					playerLocation = "visitation";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!courtyard.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region can
namespace can
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			canteen.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (canteen.playerAccess)
			{
				system("CLS");
				gameTopline();
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
					//Use Prison Vending Machine
					break;
				case 3:
					//Socialise With Other Prisoners
					break;
				case 4:
					//Start A Fight
					break;
				case 5:
					//Look For Contraband
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 7:
					playerLocation = "kitchen";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!canteen.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region kit
namespace kit
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			kitchen.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (kitchen.playerAccess)
			{
				system("CLS");
				gameTopline();
				kitchen.showRoomDescription();
				kitchen.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Work In The Kitchen
					break;
				case 2:
					//Look For Contraband
					break;
				case 3:
					//Start A Fire
					break;
				case 4:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 5:
					playerLocation = "canteen";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!kitchen.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region inf
namespace inf
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			infirmary.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (infirmary.playerAccess)
			{
				system("CLS");
				gameTopline();
				infirmary.showRoomDescription();
				infirmary.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Go For A Checkup
					break;
				case 2:
					//Consult The Doctor
					break;
				case 3:
					//Search For Contraband
					break;
				case 4:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 5:
					playerLocation = "chapel";
					inRoom = false;
					break;
				case 6:
					playerLocation = "therapistOffice";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!infirmary.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cha
namespace cha
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			chapel.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (chapel.playerAccess)
			{
				system("CLS");
				gameTopline();
				chapel.showRoomDescription();
				chapel.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Pray In Silence
					break;
				case 2:
					//Join Prayer Session
					break;
				case 3:
					//Join Mass
					break;
				case 4:
					//Confession
					break;
				case 5:
					//Look For Contraband
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 7:
					playerLocation = "infirmary";
					inRoom = false;
					break;
				case 8:
					playerLocation = "cellBlockA";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!chapel.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region com
namespace com
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			commonRoom.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (commonRoom.playerAccess)
			{
				system("CLS");
				gameTopline();
				commonRoom.showRoomDescription();
				commonRoom.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Join AA Meeting
					break;
				case 2:
					//Play Table Football
					break;
				case 3:
					//Play Chess
					break;
				case 4:
					//Watch TV
					break;
				case 5:
					//Socialise With Other Inmmates
					break;
				case 6:
					//Look For Contraband
					break;
				case 7:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 8:
					playerLocation = "classroom";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!commonRoom.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region lau
namespace lau
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			laundry.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (laundry.playerAccess)
			{
				system("CLS");
				gameTopline();
				laundry.showRoomDescription();
				laundry.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Work In The Laundry
					break;
				case 2:
					//Socialise With Other Inmates
					break;
				case 3:
					//Start A Fight
					break;
				case 4:
					//Search For Contraband
					break;
				case 5:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 6:
					playerLocation = "visitation";
					inRoom = false;
					break;
				case 7:
					playerLocation = "cellBlockA";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!laundry.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region cla
namespace cla
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			classroom.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (classroom.playerAccess)
			{
				system("CLS");
				gameTopline();
				classroom.showRoomDescription();
				classroom.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Join Maths Class
					break;
				case 2:
					//Join English Class
					break;
				case 3:
					//Join Works Course
					break;
				case 4:
					//Start A Fire
					break;
				case 5:
					//Search For Contraband
					break;
				case 6:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 7:
					playerLocation = "commonRoom";
					inRoom = false;
					break;
				case 8:
					playerLocation = "cellBlockD";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!classroom.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region pss
namespace pss
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			prisonShop.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (prisonShop.playerAccess)
			{
				system("CLS");
				gameTopline();
				prisonShop.showRoomDescription();
				prisonShop.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Work In Prison Shop
					break;
				case 2:
					//Shop For Goods
					break;
				case 3:
					//Search For Contraband
					break;
				case 4:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 5:
					playerLocation = "kitchen";
					inRoom = false;
					break;
				case 6:
					playerLocation = "cellBlockB";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!prisonShop.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region vis
namespace vis
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			visitation.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (visitation.playerAccess)
			{
				system("CLS");
				gameTopline();
				visitation.showRoomDescription();
				visitation.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Join Your Family
					break;
				case 2:
					//Join Your Lawyer
					break;
				case 3:
					//Join Your Pen Pal
					break;
				case 4:
					//Join Your Lover
					break;
				case 5:
					//Join Your Supplier
					break;
				case 6:
					//Make A Phone Call
					break;
				case 7:
					playerLocation = "courtyard";
					inRoom = false;
					break;
				case 8:
					playerLocation = "laundry";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!visitation.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region prc
namespace prc
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			personalCell.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (personalCell.playerAccess)
			{
				system("CLS");
				gameTopline();
				personalCell.showRoomDescription();
				personalCell.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Go To Sleep
					break;
				case 2:
					//Go To The Window
					break;
				case 3:
					//Store Contraband
					break;
				case 4:
					//Eat Meal
					break;
				case 5:
					//Use Contraband
					break;
				case 6:
					//Start Digging Tunnel
					break;
				case 7:
					//Continue Digging Tunnel
					break;
				case 8:
					playerLocation = "cellBlockA";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!personalCell.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region tun
namespace tun
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			tunnel.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (tunnel.playerAccess)
			{
				system("CLS");
				gameTopline();
				tunnel.showRoomDescription();
				tunnel.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Continue Through The Tunnel
					break;
				case 2:
					//Dig Further In Your Tunnel
					break;
				case 3:
					//Return To Your Cell
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!tunnel.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region tpo
namespace tpo
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			therapistOffice.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (therapistOffice.playerAccess)
			{
				system("CLS");
				gameTopline();
				therapistOffice.showRoomDescription();
				therapistOffice.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Attend Appointment
					break;
				case 2:
					//Search For Contraband
					break;
				case 3:
					//Search Through Prisoner Files
					break;
				case 4:
					playerLocation = "infirmary";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!therapistOffice.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

#pragma region shw
namespace shw
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour && hour > 21)
		{
			shower.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{
		}*/
	}

	void enterRoom()
	{
		bool inRoom = true;

		while (inRoom)
		{
			if (shower.playerAccess)
			{
				system("CLS");
				gameTopline();
				shower.showRoomDescription();
				shower.showRoomActions();
				inputTooltip();
				std::cin >> playerChoice;
				switch (playerChoice)
				{
				case 1:
					//Take A Shower
					break;
				case 2:
					//Start A Fight
					break;
				case 3:
					//Search For Contraband
					break;
				case 4:
					playerLocation = "cellBlockA";
					inRoom = false;
					break;
				default:
					std::cout << "Please Enter The Corresponding Number For Your Action";
					inputTooltip();
					std::cin >> playerChoice;
					break;
				}
			}

			if (!shower.playerAccess)
			{

			}
		}
	}
}
#pragma endregion

//Using Namespaces
using namespace cbA; using namespace cbB; using namespace cbC; using namespace cbD; using namespace rcp; using namespace cty; using namespace can; using namespace kit; using namespace inf;
using namespace cha; using namespace com; using namespace lau; using namespace cla; using namespace pss; using namespace vis; using namespace prc; using namespace tun; using namespace tpo;
using namespace shw;

void gamePlay()
{
	while (gameRunning)
	{
		if (playerLocation == "cellBlockA")
		{
			cbA::checkAccess();
			cbA::enterRoom();
		}

		else if (playerLocation == "cellBlockB")
		{
			cbB::checkAccess();
			cbB::enterRoom();
		}

		else if (playerLocation == "cellBlockC")
		{
			cbC::checkAccess();
			cbC::enterRoom();
		}

		else if (playerLocation == "cellBlockD")
		{
			cbD::checkAccess();
			cbD::enterRoom();
		}

		else if (playerLocation == "reception")
		{
			rcp::checkAccess();
			rcp::enterRoom();
		}

		else if (playerLocation == "courtyard")
		{
			cty::checkAccess();
			cty::enterRoom();
		}

		else if (playerLocation == "canteen")
		{
			can::checkAccess();
			can::enterRoom();
		}

		else if (playerLocation == "kitchen")
		{
			kit::checkAccess();
			kit::enterRoom();
		}

		else if (playerLocation == "infirmary")
		{
			inf::checkAccess();
			inf::enterRoom();
		}

		else if (playerLocation == "chapel")
		{
			cha::checkAccess();
			cha::enterRoom();
		}

		else if (playerLocation == "commonRoom")
		{
			com::checkAccess();
			com::enterRoom();
		}

		else if (playerLocation == "laundry")
		{
			lau::checkAccess();
			lau::enterRoom();
		}

		else if (playerLocation == "classroom")
		{
			cla::checkAccess();
			cla::enterRoom();
		}

		else if (playerLocation == "prisonShop")
		{
			pss::checkAccess();
			pss::enterRoom();
		}

		else if (playerLocation == "visitation")
		{
			vis::checkAccess();
			vis::enterRoom();
		}

		else if (playerLocation == "personalCell")
		{
			prc::checkAccess();
			prc::enterRoom();
		}

		else if (playerLocation == "tunnel")
		{
			tun::checkAccess();
			tun::enterRoom();
		}

		else if (playerLocation == "therapistOffice")
		{
			tpo::checkAccess();
			tpo::enterRoom();
		}

		else if (playerLocation == "shower")
		{
			shw::checkAccess();
			shw::enterRoom();
		}
	}
}
