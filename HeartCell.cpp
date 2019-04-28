#include "HeartCell.h"



HeartCell::HeartCell(int row, int col) :Cell(row, col)
{
	ImagePath = "images\\Cells\\Heart.jpg";
}

bool HeartCell::ActOn(Player* p)
{
	// Still to be determined !!!
	return false;
}


HeartCell::~HeartCell()
{
}
