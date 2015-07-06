//
//  AbstractFactory.h
//  DesignPattern
//
//  Created by Frank on 15/7/6.
//
//

#ifndef __DesignPattern__AbstractFactory__
#define __DesignPattern__AbstractFactory__

#include "Product.h"

class AbstractFactory
{
public:
    virtual ~AbstractFactory() {}
    
    virtual AbstractProductA * createProductA() = 0;
    
    virtual AbstractProductB * createProductB() = 0;
protected:
    AbstractFactory() {}
};

class ConcreteFactory1 : public AbstractFactory
{
public:
    AbstractProductA * createProductA();
    AbstractProductB * createProductB();
};

class ConcreteFactory2 : public AbstractFactory
{
public:
    AbstractProductA * createProductA();
    AbstractProductB * createProductB();
};

#endif /* defined(__DesignPattern__AbstractFactory__) */
