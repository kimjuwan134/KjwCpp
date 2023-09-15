#pragma once
#include "Mechanic.h"


class Goliath : public Mechanic
{
public :

	Goliath();

	virtual void Attack() override;

	~Goliath();
};

