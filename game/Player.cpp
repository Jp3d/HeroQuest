#include "Player.h"

Player::Player()
    :mQuestCompleted{ 0 }, mLevel{ 0 }, mGold{ 0 },
    mMindPoints{ getStartingMindPts() }, mBodyPoints{getStartingBodyPts()}
{
}

//Getters
size_t Player::getAttackDice()
{
    return mAttackDice;
}

size_t Player::getDefendDice()
{
    return mDefendDice;
}

size_t Player::getStartingBodyPts()
{
    return mStartingBodyPts;
}

size_t Player::getStartingMindPts()
{
    return mStartingMindPts;
}

size_t Player::getMovement()
{
    return mMovement;
}

size_t Player::getBodyPoints()
{
    return mBodyPoints;
}

size_t Player::getMindPoints()
{
    return mMindPoints;
}

size_t Player::getGold()
{
    return mGold;
}

size_t Player::getXP()
{
    return mXP;
}

size_t Player::getLevel()
{
    return mLevel;
}

size_t Player::getQuestCompleted()
{
    return mQuestCompleted;
}

