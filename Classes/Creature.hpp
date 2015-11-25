//
//  Creature.hpp
//  GameOfLife
//
//  Created by Tery Lim on 23/11/15.
//
//

#ifndef Creature_hpp
#define Creature_hpp

#include "cocos2d.h"

class Creature : public cocos2d::Sprite
{
    
public:
    CREATE_FUNC(Creature);
    bool init() override;
    
    void setLivingNeighborsCount(int livingNeighborsCount);
    int getLivingNeighborsCount();
    
    void setIsAlive(bool isAlive);
    bool getIsAlive();
    
protected:
    int livingNeighborsCount;
    bool isAlive;
};

#endif /* Creature_hpp */
