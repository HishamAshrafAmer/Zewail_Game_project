#include "BombCell.h"



BombCell::BombCell(int row, int col) :WeaponCell(row, col)
{
	ImagePath = "images\\Cells\\Bomb.jpg";
}

bool BombCell::ActOn(Player* p)
{
	//Still undefined
	return false;
}
BombCell::~BombCell()
{
}
