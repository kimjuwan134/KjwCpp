#pragma once
#include "Unit.h"

class Ghost :
    public Unit
{
public:
    Ghost();

    void Skill() override;
    void SetHP(int value) override;
    int GetHP() override;
    virtual void RecoveryHP() override;
};

