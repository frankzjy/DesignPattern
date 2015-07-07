//
//  Maze.h
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#ifndef __DesignPattern__Maze__
#define __DesignPattern__Maze__

class Room
{
public:
    Room(int roomNumber) {}
};

class Door
{
public:
    Door(int roomForm, int roomTo) {}
};

class Maze
{
public:
    virtual void addRoom(Room* room) {}
    virtual void addDoor(Door* door) {}
};

#endif /* defined(__DesignPattern__Maze__) */
