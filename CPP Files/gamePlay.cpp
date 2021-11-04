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
		if (tfhourclock = true && 7 > hour > 21)
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
		if (tfhourclock = true && 7 > hour > 21)
		{
			cellBlockB.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region cbC
namespace cbC
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			cellBlockC.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region cbD
namespace cbD
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			cellBlockD.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
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
}
#pragma endregion

#pragma region cty
namespace cty
{
	void checkAccess()
	{
		courtyard.playerAccess = true;
	}
}
#pragma endregion

#pragma region can
namespace can
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			canteen.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region kit
namespace kit
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			kitchen.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region inf
namespace inf
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			infirmary.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region cha
namespace cha
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			chapel.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region com
namespace com
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			commonRoom.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region lau
namespace lau
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			laundry.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region cla
namespace cla
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			classroom.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region pss
namespace pss
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			prisonShop.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region vis
namespace vis
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			visitation.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region prc
namespace prc
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			personalCell.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region tun
namespace tun
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			tunnel.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region tpo
namespace tpo
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			therapistOffice.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
	}
}
#pragma endregion

#pragma region shw
namespace shw
{
	void checkAccess()
	{
		if (tfhourclock = true && 7 > hour > 21)
		{
			shower.playerAccess = false;
		}

		/*else if(tfhourclock == false && )
		{

		}*/
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

		if (playerLocation == "cellBlockB")
		{
			cbB::checkAccess();
		}

		if (playerLocation == "cellBlockC")
		{
			cbC::checkAccess();
		}

		if (playerLocation == "cellBlockD")
		{
			cbD::checkAccess();
		}

		if (playerLocation == "reception")
		{
			rcp::checkAccess();
		}

		if (playerLocation == "courtyard")
		{
			cty::checkAccess();
		}

		if (playerLocation == "canteen")
		{
			can::checkAccess();
		}

		if (playerLocation == "kitchen")
		{
			kit::checkAccess();
		}

		if (playerLocation == "infirmary")
		{
			inf::checkAccess();
		}

		if (playerLocation == "chapel")
		{
			cha::checkAccess();
		}

		if (playerLocation == "commonRoom")
		{
			com::checkAccess();
		}

		if (playerLocation == "laundry")
		{
			lau::checkAccess();
		}

		if (playerLocation == "classroom")
		{
			cla::checkAccess();
		}

		if (playerLocation == "prisonShop")
		{
			pss::checkAccess();
		}

		if (playerLocation == "visitation")
		{
			vis::checkAccess();
		}

		if (playerLocation == "personalCell")
		{
			prc::checkAccess();
		}

		if (playerLocation == "tunnel")
		{
			tun::checkAccess();
		}

		if (playerLocation == "therapistOffice")
		{
			tpo::checkAccess();
		}

		if (playerLocation == "shower")
		{
			shw::checkAccess();
		}
	}
}
