#include "EggCell.h"



EggCell::EggCell(int row, int col) :Cell(row, col)
{
	ImagePath = "images\\Cells\\Egg.jpg";
}

bool EggCell::ActOn(Player* p)
{
	// Still to be determined !!!
	return false;
}

EggCell::~EggCell()
{
}
