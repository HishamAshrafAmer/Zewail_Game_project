
#include "Cell.h"
class EggCell :
	public Cell
{
public:
	EggCell(int row, int col);

	virtual bool ActOn(Player* p);
	virtual~EggCell();
};
