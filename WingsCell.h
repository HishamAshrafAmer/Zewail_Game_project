#pragma once
#include "Cell.h"
class WingsCell :
	public Cell
{
public:
	WingsCell(int row, int col);

	virtual bool ActOn(Player* p);
	virtual~WingsCell();
};

