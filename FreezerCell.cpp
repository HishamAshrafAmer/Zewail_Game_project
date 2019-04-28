#include "FreezerCell.h"



FreezerCell::FreezerCell(int row, int col) :WeaponCell(row, col)
{
	ImagePath = "images\\Cells\\Freezer.jpg";
}

bool FreezerCell::ActOn(Player* p)
{
	//Still undefined
	return false;
}

FreezerCell::~FreezerCell()
{
}
