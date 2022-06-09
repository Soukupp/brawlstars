//���� : ����
//���� : 2022-5-23

//�޸� : ��Ԫ��
//���� : 2022-5-25

//�޸� : ����
//���� : 2022-6-8

#include "GroundMonster.h"

USING_NS_CC;

GroundMonster* GroundMonster::create(const std::string& filename)
{
	GroundMonster* player = new (std::nothrow) GroundMonster();
	if (player && player->initWithFile(filename))
	{
		player->autorelease();
		return player;
	}
	CC_SAFE_DELETE(player);
	return nullptr;
}

GroundMonster* GroundMonster::create(const std::string& filename, const Rect& rect)
{
	GroundMonster* player = new (std::nothrow) GroundMonster();
	if (player && player->initWithFile(filename, rect))
	{
		player->autorelease();
		return player;
	}
	CC_SAFE_DELETE(player);
	return nullptr;
}

void GroundMonster::initMonster(int maxHealthPoint, int attack, int defence, float skillAttackRate, float attackRate)
{
	//��ʼ�����
	_panel.init(maxHealthPoint, attack, defence, skillAttackRate, attackRate);
	this->setAnchorPoint(Vec2(0.5f, 0.5f));
}

/****************************
* Name ��init
* Summary �����޳�ʼ��
* return ��
****************************/
void GroundMonster::initMonster()
{
	_panel.init(3000, 0, 200, 0.0f, 0.0f, 0);
}
void GroundMonster::keepHealthBar(Slider* healthBar)
{
	healthBar->setPosition(GROUNDMONSTER_HEALTHBAR_POSITION);
	//_healthBar->setPosition(position);
}

