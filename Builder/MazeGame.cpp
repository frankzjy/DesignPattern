//
//  MazeGame.cpp
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#include "MazeGame.h"

Maze* MazeGame::CreateMaze(MazeBuilder &builder)
{
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2);
    
    return builder.GetMaze();
}

Maze* MazeGame::CreateComplexMaze(MazeBuilder &builder)
{
    builder.BuildMaze();
    builder.BuildRoom(0);
    for (int i = 1; i < 10; i++) {
        builder.BuildRoom(i);
        builder.BuildDoor(i-1 , i);
    }
    
    return builder.GetMaze();
}