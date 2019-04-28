#include "GoalCell.h"



GoalCell::GoalCell(int row, int col) :Cell(row, col)
{
	ImagePath = "images\\Cells\\GoalCell.jpg";
}

bool GoalCell::ActOn(Player* p)
{
	// Still to be determined !!!
	return false;
}


GoalCell::~GoalCell()
{
}
