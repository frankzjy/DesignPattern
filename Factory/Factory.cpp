//
//  Factory.cpp
//  DesignPattern
//
//  Created by Frank on 15/7/6.
//
//

#include "Factory.h"

#include <iostream>

using namespace std;

Factory::Factory()
{
    
}

Factory::~Factory()
{
    
}

ConcreteFactory::ConcreteFactory()
{
    cout << "ConreteFactory..." << endl;
}

ConcreteFactory::~ConcreteFactory()
{
    
}

Product* ConcreteFactory::createProduct()
{
    return new ConcreteProduct();
}