#include "prepro.h"

PrisonRooms cellBlockA, cellBlockB, cellBlockC, cellBlockD, reception, courtyard, canteen, kitchen, infirmary, chapel, commonRoom, laundry, classroom, prisonShop, visitation, personalCell, tunnel, therapistOffice, shower;

void createPrison()
{

#pragma region cellBlockA
	cellBlockA.playerAccess = true;
	cellBlockA.firstVisit = true;
	cellBlockA.roomDesc1 = "You awake in Cell Block A, with a slightly tainted memory.\n\n";
	cellBlockA.roomDesc2 = "You walk into Cell Block A.\n\n";
	cellBlockA.roomDescription = "You can see rows of prison cells, spread over multiple floors. The sight is almost daunting. In each corner of your eye is the subtle flicker of \nmovement as inmates pace, and run, and sit and talk, play and argue, or stand, clearly bored.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	cellBlockA.gPresentAtDay;						
	cellBlockA.gPresentAtNight;
	cellBlockA.playerActions[0] = true;
	cellBlockA.actionDescription[0] = "[1] Rummage Through A Random Cell\n";
	cellBlockA.playerActions[1] = true;
	cellBlockA.actionDescription[1] = "[2] Socialise With The Other Prisoners\n";
	cellBlockA.playerActions[2] = true;
	cellBlockA.actionDescription[2] = "[3] Start A Fight\n";
	cellBlockA.playerActions[3] = true;
	cellBlockA.actionDescription[3] = "[4] Play Board Games\n";
	for (int i = 4; i != 7; i++)
	{
		cellBlockA.playerActions[i] = false;
	}
	cellBlockA.locationsOpen[0] = true;
	cellBlockA.locationsDescription[0] = "[5] Go To Your Prisoner's Cell\n";
	cellBlockA.locationsOpen[1] = true;
	cellBlockA.locationsDescription[1] = "[6] Go To The Shower Room\n";
	cellBlockA.locationsOpen[2] = true;
	cellBlockA.locationsDescription[2] = "[7] Go To The Courtyard\n";
	cellBlockA.locationsOpen[3] = true;
	cellBlockA.locationsDescription[3] = "[8] Go To The Chapel\n";
	for (int i = 4; i != 18; i++)
	{
		cellBlockA.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region cellBlockB
	cellBlockB.playerAccess = true;
	cellBlockB.firstVisit = true;
	cellBlockB.roomDesc1 = "You awake in Cell Block B, with a slightly tainted memory.\n\n";
	cellBlockB.roomDesc2 = "You walk into Cell Block B.\n\n";
	cellBlockB.roomDescription = "The sight is familiar, you can see the rows of decadent cells, spread over multiple floors. There are prisoners and guards, bustling, playing, exercising the mind, or talking in groups across the block.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	cellBlockB.gPresentAtDay;
	cellBlockB.gPresentAtNight;
	cellBlockB.playerActions[0] = true;
	cellBlockB.actionDescription[0] = "[1] Rummage Through A Random Cell\n";
	cellBlockB.playerActions[1] = true;
	cellBlockB.actionDescription[1] = "[2] Socialize With The Other Prisoners\n";
	cellBlockB.playerActions[2] = true;
	cellBlockB.actionDescription[2] = "[3] Start A Fight\n";
	cellBlockB.playerActions[3] = true;
	cellBlockB.actionDescription[3] = "[4] Play Board Games\n";
	for (int i = 4; i != 7; i++)
	{
		cellBlockB.playerActions[i] = false;
	}
	cellBlockB.locationsOpen[0] = true;
	cellBlockB.locationsDescription[0] = "[5] Go To The Prison Shop\n";
	cellBlockB.locationsOpen[1] = true;
	cellBlockB.locationsDescription[1] = "[6] Go To The Courtyard\n";
	for (int i = 2; i != 18; i++)
	{
		cellBlockB.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region cellBlockC
	cellBlockC.playerAccess = true;
	cellBlockC.firstVisit = true;
	cellBlockC.roomDesc1 = "You awake in Cell Block C, with a slightly tainted memory.\n\n";
	cellBlockC.roomDesc2 = "You walk into Cell Block C.\n\n";
	cellBlockC.roomDescription = "The sight is familiar, you can see the rows of decadent cells, spread over multiple floors. There are prisoners and guards, bustling, playing, exercising the mind, or talking in groups across the block.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	cellBlockC.gPresentAtDay;
	cellBlockC.gPresentAtNight;
	cellBlockC.playerActions[0] = true;
	cellBlockC.actionDescription[0] = "[1] Rummage Through A Random Cell\n";
	cellBlockC.playerActions[1] = true;
	cellBlockC.actionDescription[1] = "[2] Socialize With The Other Prisoners\n";
	cellBlockC.playerActions[2] = true;
	cellBlockC.actionDescription[2] = "[3] Start A Fight\n";
	cellBlockC.playerActions[3] = true;
	cellBlockC.actionDescription[3] = "[4] Play Board Games\n";
	for (int i = 4; i != 7; i++)
	{
		cellBlockC.playerActions[i] = false;
	}
	cellBlockC.locationsOpen[0] = true;
	cellBlockC.locationsDescription[0] = "[5] Go To The Laundry Room\n";
	cellBlockC.locationsOpen[1] = true;
	cellBlockC.locationsDescription[1] = "[6] Go To The Courtyard\n";
	for (int i = 2; i != 18; i++)
	{
		cellBlockC.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region cellBlockD
	cellBlockD.playerAccess = true;
	cellBlockD.firstVisit = true;
	cellBlockD.roomDesc1 = "You awake in Cell Block D, with a slightly tainted memory.\n\n";
	cellBlockD.roomDesc2 = "You walk into Cell Block D.\n\n";
	cellBlockD.roomDescription = "The sight is familiar, you can see the rows of decadent cells, spread over multiple floors. There are prisoners and guards, bustling, playing, exercising the mind, or talking in groups across the block.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	cellBlockD.gPresentAtDay;
	cellBlockD.gPresentAtNight;
	cellBlockD.playerActions[0] = true;
	cellBlockD.actionDescription[0] = "[1] Rummage Through A Random Cell\n";
	cellBlockD.playerActions[1] = true;
	cellBlockD.actionDescription[1] = "[2] Socialize With The Other Prisoners\n";
	cellBlockD.playerActions[2] = true;
	cellBlockD.actionDescription[2] = "[3] Start A Fight\n";
	cellBlockD.playerActions[3] = true;
	cellBlockD.actionDescription[3] = "[4] Play Board Games\n";
	for (int i = 4; i != 7; i++)
	{
		cellBlockD.playerActions[i] = false;
	}
	cellBlockD.locationsOpen[0] = true;
	cellBlockD.locationsDescription[0] = "[5] Go To The Classroom\n";
	cellBlockD.locationsOpen[1] = true;
	cellBlockD.locationsDescription[1] = "[6] Go To The Courtyard\n";
	for (int i = 2; i != 18; i++)
	{
		cellBlockD.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region reception
	reception.playerAccess = true;
	reception.firstVisit = true;
	reception.roomDesc1 = "You awake in the reception, with a slightly tainted memory.\n\n";
	reception.roomDesc2 = "You walk into the reception.\n\n";
	reception.roomDescription = "You haven't been here since the day you arrived to the prison. Aside from being much quieter, not much has changed. Crowds of naked prisoners and stacks of uniforms have been replaced by clean benches and a desk with computer in the corner, behind a glass cubicle. The room is quiet, cool, and a refreshing place to be, even if you shouldn't be here.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	reception.gPresentAtDay;
	reception.gPresentAtNight;
	reception.playerActions[0] = true;
	reception.actionDescription[0];
	reception.playerActions[1] = true;
	reception.actionDescription[1];
	reception.playerActions[2] = true;
	reception.actionDescription[2];
	reception.playerActions[3] = true;
	reception.actionDescription[3];
	reception.locationsOpen[0] = true;
	reception.locationsDescription[0];
	reception.locationsOpen[1] = true;
	reception.locationsDescription[1];
	reception.locationsOpen[2] = true;
	reception.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		reception.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region courtyard
	courtyard.playerAccess = true;
	courtyard.firstVisit = true;
	courtyard.roomDesc1 = "You awake in the Courtyard, prisoners and guards are gathered around you.\n\n";
	courtyard.roomDesc2 = "You walk into the Courtyard.\n\n";
	courtyard.roomDescription = "There are crowds of people spread over the vast space. You spend a moment to take in the view. There are rows of barbed fences in all 4 directions, \ninterrupted only by the weathered dark grey walls of the various buildings, all accessible from the Courtyard. There is a small patch of grass below \nthe fencing in the far left corner, with room to meditate. There are crowds of people watching two groups of 11 play football on the potholed \nconcrete/makeshift football pitch. To the side are training dummies, to help improve your physique.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	courtyard.gPresentAtDay;
	courtyard.gPresentAtNight;
	courtyard.playerActions[0] = true;
	courtyard.actionDescription[0] = "[1] Play Football\n";
	courtyard.playerActions[1] = true;
	courtyard.actionDescription[1] = "[2] Watch Others Play Football\n";
	courtyard.playerActions[2] = true;
	courtyard.actionDescription[2] = "[3] Go For A Run\n";
	courtyard.playerActions[3] = true;
	courtyard.actionDescription[3] = "[4] Practice With Training Dummies\n";
	courtyard.playerActions[4] = true;
	courtyard.actionDescription[4] = "[5] Socialise With The Other Prisoners\n";
	courtyard.playerActions[5] = true;
	courtyard.actionDescription[5] = "[6] Meditate On The Grass\n";
	courtyard.playerActions[6] = true;
	courtyard.actionDescription[6] = "[7] Start A Fight\n";
	courtyard.locationsOpen[0] = true;
	courtyard.locationsDescription[0] = "[8] Go To Cell Block A\n";
	courtyard.locationsOpen[1] = true;
	courtyard.locationsDescription[1] = "[9] Go To Cell Block B\n";
	courtyard.locationsOpen[2] = true;
	courtyard.locationsDescription[2] = "[10] Go To Cell Block C\n";
	courtyard.locationsOpen[3] = true;
	courtyard.locationsDescription[3] = "[11] Go To Cell Block D\n";
	courtyard.locationsOpen[4] = true;
	courtyard.locationsDescription[4] = "[12] Go To The Reception\n";
	courtyard.locationsOpen[5] = true;
	courtyard.locationsDescription[5] = "[13] Go To The Canteen\n";
	courtyard.locationsOpen[6] = true;
	courtyard.locationsDescription[6] = "[14] Go To The Kitchen\n";
	courtyard.locationsOpen[7] = true;
	courtyard.locationsDescription[7] = "[15] Go To The Infirmary\n";
	courtyard.locationsOpen[8] = true;
	courtyard.locationsDescription[8] = "[16] Go To The Chapel\n";
	courtyard.locationsOpen[9] = true;
	courtyard.locationsDescription[9] = "[17] Go To The Common Room\n";
	courtyard.locationsOpen[10] = true;
	courtyard.locationsDescription[10] = "[18] Go To The Laundry\n";
	courtyard.locationsOpen[11] = true;
	courtyard.locationsDescription[11] = "[19] Go To The Classroom\n";
	courtyard.locationsOpen[12] = true;
	courtyard.locationsDescription[12] = "[20] Go To The Prison Shop\n";
	courtyard.locationsOpen[13] = true;
	courtyard.locationsDescription[13] = "[21] Go To Visitation\n";
	courtyard.locationsOpen[14] = false;
	courtyard.locationsOpen[15] = false;
	courtyard.locationsOpen[16] = false;
	
#pragma endregion

#pragma region canteen
	canteen.playerAccess = true;
	canteen.firstVisit = true;
	canteen.roomDesc1 = "You awake in the canteen, prisoners and guards are crowding around you.\n\n";
	canteen.roomDesc2 = "You walk into the canteen.\n\n";
	canteen.roomDescription = "There are crowds of prisoners gathering around lunch tables, bustling and queuing at the serving tables, food has been slightly flung up the walls, and litterered across the floor. People are shouting, plates are clanging and cutlery is clinking.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	canteen.gPresentAtDay;
	canteen.gPresentAtNight;
	canteen.playerActions[0] = true;
	canteen.actionDescription[0];
	canteen.playerActions[1] = true;
	canteen.actionDescription[1];
	canteen.playerActions[2] = true;
	canteen.actionDescription[2];
	canteen.playerActions[3] = true;
	canteen.actionDescription[3];
	canteen.locationsOpen[0] = true;
	canteen.locationsDescription[0];
	canteen.locationsOpen[1] = true;
	canteen.locationsDescription[1];
	canteen.locationsOpen[2] = true;
	canteen.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		canteen.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region kitchen
	kitchen.playerAccess = true;
	kitchen.firstVisit = true;
	kitchen.roomDesc1 = "You awake in the kitchen, chefs are crowded around you, accompanied by guards.\n\n";
	kitchen.roomDesc2 = "You walk into the Kitchen.\n\n";
	kitchen.roomDescription = "The kitchen. Home of the finest prison cuisine. Chefs are cutting fruit, blending vegetables and serving food with questionable chemical content, all brewed in the sweaty hotpot of a rotting prison wing, chefs are unkempt, and their prisoner assistants have even less care for standards. You almost cannot bare to watch.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	kitchen.gPresentAtDay;
	kitchen.gPresentAtNight;
	kitchen.playerActions[0] = true;
	kitchen.actionDescription[0];
	kitchen.playerActions[1] = true;
	kitchen.actionDescription[1];
	kitchen.playerActions[2] = true;
	kitchen.actionDescription[2];
	kitchen.playerActions[3] = true;
	kitchen.actionDescription[3];
	kitchen.locationsOpen[0] = true;
	kitchen.locationsDescription[0];
	kitchen.locationsOpen[1] = true;
	kitchen.locationsDescription[1];
	kitchen.locationsOpen[2] = true;
	kitchen.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		kitchen.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region infirmary
	infirmary.playerAccess = true;
	infirmary.firstVisit = true;
	infirmary.roomDesc1 = "You awake in the infirmary, with a slightly tainted memory.\n\n";
	infirmary.roomDesc2 = "You walk into the infirmary.\n\n";
	infirmary.roomDescription = "There are low and gentle sounds of beeping, small grunts of pain as people do their best to recover from any injuries they have obtained. Doctors are quietly pacing around, checking on individual beds and collecting medication as they need to.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	infirmary.gPresentAtDay;
	infirmary.gPresentAtNight;
	infirmary.playerActions[0] = true;
	infirmary.actionDescription[0];
	infirmary.playerActions[1] = true;
	infirmary.actionDescription[1];
	infirmary.playerActions[2] = true;
	infirmary.actionDescription[2];
	infirmary.playerActions[3] = true;
	infirmary.actionDescription[3];
	infirmary.locationsOpen[0] = true;
	infirmary.locationsDescription[0];
	infirmary.locationsOpen[1] = true;
	infirmary.locationsDescription[1];
	infirmary.locationsOpen[2] = true;
	infirmary.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		infirmary.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region chapel
	chapel.playerAccess = true;
	chapel.firstVisit = true;
	chapel.roomDesc1 = "You awake in Chapel, a vicar is overlooking you, quietly praying.\n\n";
	chapel.roomDesc2 = "You walk into the chapel.\n\n";
	chapel.roomDescription = "There are people praying in the pews, or on prayer rugs. There are decorated columns in the room, and low hanging chanedeliers across the middle walkway. In the far corner is some tinted stained glass, casting a unique shadow over the altar in front. To the right is some space for a choir, and to the left, an organ. It is a relaxing environment.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	chapel.gPresentAtDay;
	chapel.gPresentAtNight;
	chapel.playerActions[0] = true;
	chapel.actionDescription[0];
	chapel.playerActions[1] = true;
	chapel.actionDescription[1];
	chapel.playerActions[2] = true;
	chapel.actionDescription[2];
	chapel.playerActions[3] = true;
	chapel.actionDescription[3];
	chapel.locationsOpen[0] = true;
	chapel.locationsDescription[0];
	chapel.locationsOpen[1] = true;
	chapel.locationsDescription[1];
	chapel.locationsOpen[2] = true;
	chapel.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		cellBlockA.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region commonRoom
	commonRoom.playerAccess = true;
	commonRoom.firstVisit = true;
	commonRoom.roomDesc1 = "You awake in the common room, with a slightly tainted memory.\n\n";
	commonRoom.roomDesc2 = "You walk into the Common Room.\n\n";
	commonRoom.roomDescription = "The room is loud, as prisoners chatter, play with the table football, the chess boards, and the radio channel. There are small TVs attached to the dark grey brick walls, and a small view of the outdoors from the barred windows. The room is cooled by a loud AC, there are doors all over the room that look like they could easily be lockpicked. Perhaps it would be a good place to practice.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	commonRoom.gPresentAtDay;
	commonRoom.gPresentAtNight;
	commonRoom.playerActions[0] = true;
	commonRoom.actionDescription[0];
	commonRoom.playerActions[1] = true;
	commonRoom.actionDescription[1];
	commonRoom.playerActions[2] = true;
	commonRoom.actionDescription[2];
	commonRoom.playerActions[3] = true;
	commonRoom.actionDescription[3];
	commonRoom.locationsOpen[0] = true;
	commonRoom.locationsDescription[0];
	commonRoom.locationsOpen[1] = true;
	commonRoom.locationsDescription[1];
	commonRoom.locationsOpen[2] = true;
	commonRoom.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		commonRoom.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region laundry
	laundry.playerAccess = true;
	laundry.firstVisit = true;
	laundry.roomDesc1 = "You awake in the laundry room, with a slightly tainted memory.\n\n";
	laundry.roomDesc2 = "You walk into the laundry room.\n\n";
	laundry.roomDescription = "The faint humming of irons rumbles throughout, and the consistent spinning of orange in the washing machines can be seen in all directions, as they stand pushed against the wall. There are rows of laundry trolleys, filled to the brim with uniforms, clean and dirty alike. Prisoners are muttering under their breath as they work.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	laundry.gPresentAtDay;
	laundry.gPresentAtNight;
	laundry.playerActions[0] = true;
	laundry.actionDescription[0];
	laundry.playerActions[1] = true;
	laundry.actionDescription[1];
	laundry.playerActions[2] = true;
	laundry.actionDescription[2];
	laundry.playerActions[3] = true;
	laundry.actionDescription[3];
	laundry.locationsOpen[0] = true;
	laundry.locationsDescription[0];
	laundry.locationsOpen[1] = true;
	laundry.locationsDescription[1];
	laundry.locationsOpen[2] = true;
	laundry.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		laundry.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region classroom
	classroom.playerAccess = true;
	classroom.firstVisit = true;
	classroom.roomDesc1 = "You awake in the classroom, with a slightly tainted memory.\n\n";
	classroom.roomDesc2 = "You walk into the classroom.\n\n";
	classroom.roomDescription = "Rows of hardly cleaned desks line the middle of the room. In the corner there are bookshelves, showcasing a small collection of classic literature and other assorted works, some which seem inappropriate to be shown in public. There is a teachers desk, with a computer, that could easily be accessed if you knew how. Draping down from the ceiling are small fans, that barely offer comfort amongst the sweltering heat of the concrete insulation that haunts the block.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	classroom.gPresentAtDay;
	classroom.gPresentAtNight;
	classroom.playerActions[0] = true;
	classroom.actionDescription[0];
	classroom.playerActions[1] = true;
	classroom.actionDescription[1];
	classroom.playerActions[2] = true;
	classroom.actionDescription[2];
	classroom.playerActions[3] = true;
	classroom.actionDescription[3];
	classroom.locationsOpen[0] = true;
	classroom.locationsDescription[0];
	classroom.locationsOpen[1] = true;
	classroom.locationsDescription[1];
	classroom.locationsOpen[2] = true;
	classroom.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		classroom.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region prisonShop
	prisonShop.playerAccess = true;
	prisonShop.firstVisit = true;
	prisonShop.roomDesc1 = "You awake in the Prison Store, with a slightly tainted memory.\n\n";
	prisonShop.roomDesc2 = "You walk into the Prison Store..\n\n";
	prisonShop.roomDescription = "The shelves of stock are impressive at first glance, and you can't help but consider how this might be a good place to obtain some contraband. You take a moment to look around at things you can see, cigarettes, porn magazines, sweets and sugary treats, DVDs, spices for food. And these are just the items on shelves, who knows what hides behind the stores storage room.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	prisonShop.gPresentAtDay;
	prisonShop.gPresentAtNight;
	prisonShop.playerActions[0] = true;
	prisonShop.actionDescription[0];
	prisonShop.playerActions[1] = true;
	prisonShop.actionDescription[1];
	prisonShop.playerActions[2] = true;
	prisonShop.actionDescription[2];
	prisonShop.playerActions[3] = true;
	prisonShop.actionDescription[3];
	prisonShop.locationsOpen[0] = true;
	prisonShop.locationsDescription[0];
	prisonShop.locationsOpen[1] = true;
	prisonShop.locationsDescription[1];
	prisonShop.locationsOpen[2] = true;
	prisonShop.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		prisonShop.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region visitation
	visitation.playerAccess = true;
	visitation.firstVisit = true;
	visitation.roomDesc1 = "You awake in visitation, with a slightly tainted memory Citizens look on you, concerned..\n\n";
	visitation.roomDesc2 = "You walk into the visitation.\n\n";
	visitation.roomDescription = "You can see prisoners talking to their parents, wives, husbands, children, and lawyers at the cleaned wooden tables. Or talking away on the phones, pressed against the harsh concrete walls. Guards stand at the entrances, and make their way in patrol down the walkways of the room, keeping close and suspicous eyes on everyone around.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	visitation.gPresentAtDay;
	visitation.gPresentAtNight;
	visitation.playerActions[0] = true;
	visitation.actionDescription[0];
	visitation.playerActions[1] = true;
	visitation.actionDescription[1];
	visitation.playerActions[2] = true;
	visitation.actionDescription[2];
	visitation.playerActions[3] = true;
	visitation.actionDescription[3];
	visitation.locationsOpen[0] = true;
	visitation.locationsDescription[0];
	visitation.locationsOpen[1] = true;
	visitation.locationsDescription[1];
	visitation.locationsOpen[2] = true;
	visitation.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		visitation.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region personalCell
	personalCell.playerAccess = true;
	personalCell.firstVisit = true;
	personalCell.roomDesc1 = "You awake in the comfort of your cell.\n\n";
	personalCell.roomDesc2 = "You walk into your cell.\n\n";
	personalCell.roomDescription = "You can see a small view outside of the window, looking on the pastures beyond the confinement of your block. The walls are dark grey and rotting, there is a gentle chatter of mice from below you. In the corner of your room is your bed, neatly made by yourself. There is a small desk with some paper and pens, a sink and mirror to take care of yourself, and a toilet in the corner, slowly falling apart and not cleaned as well as you would like. Luckily the lid of the toilet can open at a gentle force, and is a good place for storing contraband.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	personalCell.gPresentAtDay;
	personalCell.gPresentAtNight;
	personalCell.playerActions[0] = true;
	personalCell.actionDescription[0];
	personalCell.playerActions[1] = true;
	personalCell.actionDescription[1];
	personalCell.playerActions[2] = true;
	personalCell.actionDescription[2];
	personalCell.playerActions[3] = true;
	personalCell.actionDescription[3];
	personalCell.locationsOpen[0] = true;
	personalCell.locationsDescription[0];
	personalCell.locationsOpen[1] = true;
	personalCell.locationsDescription[1];
	personalCell.locationsOpen[2] = true;
	personalCell.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		personalCell.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region tunnel
	tunnel.playerAccess = true;
	tunnel.firstVisit = true;
	tunnel.roomDesc1 = "You awake in the tunnel. How could you let yourself fall asleep here?.\n\n";
	tunnel.roomDesc2 = "You clamber into the tunnel, to continue digging your way to victory.\n\n";
	tunnel.roomDescription = "There is the gentle chattering of prisoners behind you, and the even gentler rattling of insects making their way through the holes and secret passageways left by mother nature in the dirt. You shouldn't be here for too long if you can avoid it, you don't want to make people suspicious.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	tunnel.gPresentAtDay;
	tunnel.gPresentAtNight;
	tunnel.playerActions[0] = true;
	tunnel.actionDescription[0];
	tunnel.playerActions[1] = true;
	tunnel.actionDescription[1];
	tunnel.playerActions[2] = true;
	tunnel.actionDescription[2];
	tunnel.playerActions[3] = true;
	tunnel.actionDescription[3];
	tunnel.locationsOpen[0] = true;
	tunnel.locationsDescription[0];
	tunnel.locationsOpen[1] = true;
	tunnel.locationsDescription[1];
	tunnel.locationsOpen[2] = true;
	tunnel.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		tunnel.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region therapistOffice
	therapistOffice.playerAccess = true;
	therapistOffice.firstVisit = true;
	therapistOffice.roomDesc1 = "You awake in the therapists office. He is looking at you concerned.\n\n";
	therapistOffice.roomDesc2 = "You walk into the Therapists Office.\n\n";
	therapistOffice.roomDescription = "He has his office decorated with posters of various pop idols, and there is a line of filing cabinets in the far corner, tinted green and rammed to the brim with paperwork and personal information about prisoners and staff. You ponder for a moment how you could take advantage of this information. Sat in the centre of the room is the offices desk, towered over by the centered brown desk chair, far too big for the tiny room it is part of. It is the first room in the prison you have seen with real windows, and the view of the prison entrance in the front.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	therapistOffice.gPresentAtDay;
	therapistOffice.gPresentAtNight;
	therapistOffice.playerActions[0] = true;
	therapistOffice.actionDescription[0];
	therapistOffice.playerActions[1] = true;
	therapistOffice.actionDescription[1];
	therapistOffice.playerActions[2] = true;
	therapistOffice.actionDescription[2];
	therapistOffice.playerActions[3] = true;
	therapistOffice.actionDescription[3];
	therapistOffice.locationsOpen[0] = true;
	therapistOffice.locationsDescription[0];
	therapistOffice.locationsOpen[1] = true;
	therapistOffice.locationsDescription[1];
	therapistOffice.locationsOpen[2] = true;
	therapistOffice.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		therapistOffice.locationsOpen[i] = false;
	}
#pragma endregion

#pragma region shower
	shower.playerAccess = true;
	shower.firstVisit = true;
	shower.roomDesc1 = "You awake in the shower. Prisoners have cleared the area.\n\n";
	shower.roomDesc2 = "You walk into the Shower Room.\n\n";
	shower.roomDescription = "There are prisoners exposing themselves to the wall, muttering under their breath about the heat inconsistency and problems with water flow from shower heads that look as though they could fall from the wall at any moment and crush the user below. You look around for an open spot that will offer the most possible privacy to you, to no avail.";
	//int pPresentAtDay[14];					
	//int pPresentAtNight;					
	shower.gPresentAtDay;
	shower.gPresentAtNight;
	shower.playerActions[0] = true;
	shower.actionDescription[0];
	shower.playerActions[1] = true;
	shower.actionDescription[1];
	shower.playerActions[2] = true;
	shower.actionDescription[2];
	shower.playerActions[3] = true;
	shower.actionDescription[3];
	shower.locationsOpen[0] = true;
	shower.locationsDescription[0];
	shower.locationsOpen[1] = true;
	shower.locationsDescription[1];
	shower.locationsOpen[2] = true;
	shower.locationsDescription[2];
	for (int i = 3; i != 16; i++)
	{
		shower.locationsOpen[i] = false;
	}
#pragma endregion
}
