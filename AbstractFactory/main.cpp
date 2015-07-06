//
//  main.cpp
//  AbstractFactory
//
//  Created by Frank on 15/7/6.
//
//

/*
 AbstractFactory模式就是用来解决这类问题的：要创建一组相关或者相互依赖的对象。
 
 AbstractFactory模式和Factory模式的区别是初学（使用）设计模式时候的一个容易引起困惑的地方。实际上，AbstractFactory模式是为创建一组（有多类）相关或依赖的对象提供创建接口，而Factory模式正如我在相应的文档中分析的是为一类对象提供创建接口或延迟对象的创建到子类中实现。并且可以看到，AbstractFactory模式通常都是使用Factory模式实现（ConcreteFactory1）。
 */

#include <iostream>

#include "AbstractFactory.h"

int main(int argc, const char * argv[]) {
    AbstractFactory* cf1 = new ConcreteFactory1();
    cf1->createProductA();
    cf1->createProductB();
    
    AbstractFactory* cf2 = new ConcreteFactory2();
    cf2->createProductA();
    cf2->createProductB();
    return 0;
}
