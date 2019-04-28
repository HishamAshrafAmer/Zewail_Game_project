#include "WingsCell.h"



WingsCell::WingsCell(int row, int col) :Cell(row, col)
{
	ImagePath = "images\\Cells\\Wings.jpg";
}

bool WingsCell::ActOn(Player* p)
{
	// Still to be determined !!!
	return false;
}

WingsCell::~WingsCell()
{
}
