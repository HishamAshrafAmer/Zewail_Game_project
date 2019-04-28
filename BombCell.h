#pragma once
#include "WeaponCell.h"
class BombCell :
	public WeaponCell
{
public:
	BombCell(int row, int col);

	virtual ~BombCell();
	virtual bool ActOn(Player* p);
};

