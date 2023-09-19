#pragma once
#include "Unit.h"

class Marine :
    public Unit
{
public :
    Marine();

    void Skill() override;
    void SetHP(int value) override;
    int GetHP() override;
    virtual void RecoveryHP() override;
};

