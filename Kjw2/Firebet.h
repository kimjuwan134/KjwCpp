#pragma once
#include "Unit.h"

class Firebet :
    public Unit
{
public :
    Firebet();

    void Skill() override;
    void SetHP(int value) override;
    int GetHP() override;
    virtual void RecoveryHP() override;
};

