#pragma once
#include "Mechanic.h"

class SiegeTank : public Mechanic
{
public :

	SiegeTank();

	virtual void Attack() override;

	~SiegeTank();

};

