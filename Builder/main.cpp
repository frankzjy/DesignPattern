//
//  main.cpp
//  Builder
//
//  Created by Frank on 15/7/7.
//
//

/*
 Builder模式要解决的也正是这样的问题：当我们要创建的对象很复杂的时候（通常是由很多其他的对象组合而成），我们要复杂对象的创建过程和这个对象的表示（展示）分离开来，这样做的好处就是通过一步步的进行复杂对象的构建，由于在每一步的构造过程中可以引入参数，使得经过相同的步骤创建最后得到的对象的展示不一样。
 
 适用性
 在以下情况使用Builder模式
 • 当创建复杂对象的算法应该独立于该对象的组成部分以及它们的装配方式时。
 • 当构造过程必须允许被构造的对象有不同的表示时。
 */

#include <iostream>

#include "MazeGame.h"
#include "Maze.h"
#include "MazeBuilder.h"

using namespace std;

int main(int argc, const char * argv[]) {
    MazeGame* game = new MazeGame();
    StandardMazeBuilder builder;
    game->CreateMaze(builder);
    Maze* maze = builder.GetMaze();
    
    cout << "---------------------" << endl;
    
    StandardMazeBuilder builder2;
    game->CreateComplexMaze(builder2);
    Maze* maze2 = builder2.GetMaze();
    return 0;
}
