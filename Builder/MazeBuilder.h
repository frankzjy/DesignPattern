//
//  MazeBuilder.h
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#ifndef __DesignPattern__MazeBuilder__
#define __DesignPattern__MazeBuilder__

#include "Maze.h"

class MazeBuilder
{
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int roomNumber) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}
    
    virtual Maze* GetMaze() {return nullptr;}
    
protected:
    MazeBuilder() {}
};

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();
    virtual void BuildMaze() { _currentMaze = new Maze(); }
    virtual void BuildRoom(int roomNumber);
    virtual void BuildDoor(int roomFrom, int roomTo);
    
    virtual Maze* GetMaze() {return _currentMaze;}
private:
    Maze* _currentMaze;
};

#endif /* defined(__DesignPattern__MazeBuilder__) */
