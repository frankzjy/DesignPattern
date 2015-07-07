//
//  MazeGame.h
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#ifndef __DesignPattern__MazeGame__
#define __DesignPattern__MazeGame__

#include "Maze.h"
#include "MazeBuilder.h"

class MazeGame
{
public:
    Maze* CreateMaze(MazeBuilder& builder);
    Maze* CreateComplexMaze(MazeBuilder& builder);
};

#endif /* defined(__DesignPattern__MazeGame__) */
