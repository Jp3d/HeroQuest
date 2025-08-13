#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>

class Player
{
	//Character class
	std::string mName;
	size_t mAttackDice;
	size_t mDefendDice;
	size_t mStartingBodyPts;
	size_t mStartingMindPts;
	size_t mMovement;
	Weapon mStartingWeapon;
	Armor mStartingArmor;

	//Ingame Attributes
	size_t mBodyPoints;
	size_t mMindPoints;
	size_t mGold;
	size_t mXP;
	size_t mLevel;
	size_t mQuestCompleted;

	//Inventory
	std::vector<Weapon*> mWeapons
	std::vector<Armor*> mArmors
	std::vector<Treasure*> mTreasures
	std::vectorM<Potion*> mPotions

public:
	Player();
	~Player() = default;

	size_t getAttackDice();
	size_t getDefendDice();
	size_t getStartingBodyPts();
	size_t getStartingMindPts();
	size_t getMovement();
	size_t getBodyPoints();
	size_t getMindPoints();
	size_t getGold();
	size_t getXP();
	size_t getLevel();
	size_t getQuestCompleted();
};
#endif // !PLAYER_H

