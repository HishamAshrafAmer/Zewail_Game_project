#pragma once
#include "Cell.h"
class ObstacleCell :
	public Cell
{
public:
	ObstacleCell(int row, int col);
	
	virtual bool ActOn(Player* p);

	virtual ~ObstacleCell();
};

