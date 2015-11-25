//
//  GridReader.cpp
//  GameOfLife
//
//  Created by Tery Lim on 24/11/15.
//
//

#include "GridReader.hpp"
#include "Grid.hpp"

using namespace cocos2d;

static GridReader* _instanceGridReader = nullptr;

GridReader* GridReader::getInstance()
{
    if (!_instanceGridReader)
    {
        _instanceGridReader = new GridReader();
    }
    return _instanceGridReader;
}

void GridReader::purge()
{
    CC_SAFE_DELETE(_instanceGridReader);
}

Node* GridReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
    Grid* node = Grid::create();
    setPropsWithFlatBuffers(node, nodeOptions);
    return node;
}
