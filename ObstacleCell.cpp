#include "ObstacleCell.h"



ObstacleCell::ObstacleCell(int row, int col):Cell(row,col)
{
	ImagePath = "images\\Cells\\ObstacleCell.jpg";
}

bool ObstacleCell::ActOn(Player* p)
{
	//Obstacle cell will prevent the player from crossing it
	//it returns False as it is an obstacle cell
	return false;
}

ObstacleCell::~ObstacleCell()
{
}
