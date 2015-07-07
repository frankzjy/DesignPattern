//
//  MazeBuilder.cpp
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#include "MazeBuilder.h"

#include <iostream>

using namespace std;

StandardMazeBuilder::StandardMazeBuilder()
{
    _currentMaze = nullptr;
}

void StandardMazeBuilder::BuildRoom(int roomNumber)
{
    cout << "build standard room..." << roomNumber << endl;
    Room* room = new Room(roomNumber);
    _currentMaze->addRoom(room);
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo)
{
    cout << "build standard door..."<< roomFrom << ' ' << roomTo << endl;
    Door* door = new Door(roomFrom, roomTo);
    _currentMaze->addDoor(door);
}

