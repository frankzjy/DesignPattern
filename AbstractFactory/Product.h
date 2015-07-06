//
//  Product.h
//  DesignPattern
//
//  Created by Frank on 15/7/6.
//
//

#ifndef __DesignPattern__Product__
#define __DesignPattern__Product__

class AbstractProductA
{
public:
    virtual ~AbstractProductA() {}
protected:
    AbstractProductA() {}
};

class AbstractProductB
{
public:
    virtual ~AbstractProductB() {}
protected:
    AbstractProductB() {}
};

class ProductA1 : public AbstractProductA
{
public:
    ProductA1();
};

class ProductA2 : public AbstractProductA
{
public:
    ProductA2();
};

class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
};

class ProductB2 : public AbstractProductB
{
public:
    ProductB2();
};

#endif /* defined(__DesignPattern__Product__) */
