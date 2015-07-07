//
//  Prototype.h
//  DesignPattern
//
//  Created by Frank on 15/7/8.
//
//

#ifndef __DesignPattern__Prototype__
#define __DesignPattern__Prototype__

enum ConcreteType
{
    TYPE1 = 0,
    TYPE2,
    TYPE3,
    //...
};

class Prototype
{
public:
    virtual Prototype* Clone() = 0;
};

class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype(ConcreteType type);
    ConcretePrototype(const ConcretePrototype& cp);
    virtual Prototype* Clone();
private:
    ConcreteType _type;
};

#endif /* defined(__DesignPattern__Prototype__) */
