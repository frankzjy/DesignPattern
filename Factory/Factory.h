//
//  Factory.h
//  DesignPattern
//
//  Created by Frank on 15/7/6.
//
//

#ifndef __DesignPattern__Factory__
#define __DesignPattern__Factory__

#include "Product.h"

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product * createProduct() = 0;
protected:
    Factory();
};

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();
    
    Product * createProduct();
};

#endif /* defined(__DesignPattern__Factory__) */
