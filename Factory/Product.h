//
//  Product.h
//  DesignPattern
//
//  Created by Frank on 15/7/6.
//
//

#ifndef __DesignPattern__Product__
#define __DesignPattern__Product__

class Product
{
public:
    virtual ~Product() = 0;
protected:
    Product();
};

class ConcreteProduct : public Product
{
public:
    ~ConcreteProduct();
    ConcreteProduct();
};

#endif /* defined(__DesignPattern__Product__) */
