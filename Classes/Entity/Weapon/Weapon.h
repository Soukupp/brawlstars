#pragma once
//���� : ����
//���� : 2022-5-20
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "cocos2d.h"
#include "Entity/Entity.h"

class Weapon : public Entity
{
public:
    static Weapon* create(const std::string& filename);
    Weapon* getWeapon();

    void launchAnAttack(int attack);
    void launchAnSkill(int attack);
};

#endif