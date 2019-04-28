#pragma once
#include "Cell.h"
class HeartCell :
	public Cell
{
public:
	HeartCell(int row, int col);
	virtual bool ActOn(Player* p);

	virtual~HeartCell();
};

