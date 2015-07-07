//
//  Prototype.cpp
//  DesignPattern
//
//  Created by Frank on 15/7/8.
//
//

#include "Prototype.h"
#include <iostream>

using namespace std;

ConcretePrototype::ConcretePrototype(ConcreteType type)
{
    cout << "construct ConcretePrototype type is " << type << endl;
    _type = type;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
    cout << "copy construct ConcretePrototype type is " << cp._type << endl;
    _type = cp._type;
}

Prototype* ConcretePrototype::Clone()
{
    return new ConcretePrototype(*this);
}