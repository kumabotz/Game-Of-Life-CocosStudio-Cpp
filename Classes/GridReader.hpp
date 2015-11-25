//
//  GridReader.hpp
//  GameOfLife
//
//  Created by Tery Lim on 24/11/15.
//
//

#ifndef GridReader_hpp
#define GridReader_hpp

#include "cocos2d.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class GridReader : public cocostudio::NodeReader
{
public:
    static GridReader* getInstance();
    static void purge();
    cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};

#endif /* GridReader_hpp */
