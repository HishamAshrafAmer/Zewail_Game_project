#include "ArmourCell.h"



ArmourCell::ArmourCell(int row, int col) :Cell(row, col)

{
	ImagePath = "images\\Cells\\Armour.jpg";
}


bool ArmourCell::ActOn(Player* p)
{
	//Empty cell takes no action on player
	//it returns true as it is NOT an obstacle cell
	return true;
}



ArmourCell::~ArmourCell()
{
}
