#pragma once
#include "Cell.h"
class GoalCell :
	public Cell
{
public:
	GoalCell(int row, int col);
	virtual bool ActOn(Player* p);
	virtual~GoalCell();
};

