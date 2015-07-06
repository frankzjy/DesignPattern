//
//  Singleton.cpp
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#include "Singleton.h"

#include <iostream>

using namespace std;

Singleton * Singleton::_instance = NULL;

Singleton * Singleton::Instance()
{
    if (!_instance) {
        _instance = new Singleton();
    }
    return _instance;
}

Singleton::Singleton()
{
    cout << "Singleton..." << endl;
}