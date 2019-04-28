#include "EnemyCell.h"



EnemyCell::EnemyCell(int row,int col):Cell(row,col)
{
	ImagePath = "images\\Cells\\EnemyCell.jpg";
}



EnemyCell::~EnemyCell()
{
}

bool EnemyCell::ActOn(Player* p)
{
	//Empty cell takes no action on player
	//it returns false as it IS a kind of obstacle cell
	return false;
}