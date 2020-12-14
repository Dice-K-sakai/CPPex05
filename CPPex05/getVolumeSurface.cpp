#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box)
{
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}

bool isSendable(BOX* box)
{
	bool contain = false;

	box->packSize = box->x + box->y + box->z;

	for (int Size = 60; Size <= 160; Size += 20)
	{
		if (box->packSize <= Size && contain == false)
		{
			contain = true;
			box->packSize = Size;
		}
	}

	return contain;
}