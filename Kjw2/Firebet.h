#pragma once
#include "Unit.h"

class Firebet :
    public Unit
{
public :
    void Skill() override;
    void SetHP(int value) override;
    int GetHP() override;
};

