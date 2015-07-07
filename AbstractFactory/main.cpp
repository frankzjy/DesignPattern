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
 
 适用性
 在以下情况可以使用Abstract Factory模式
 • 一个系统要独立于它的产品的创建、组合和表示时。
 • 一个系统要由多个产品系列中的一个来配置时。
 • 当你要强调一系列相关的产品对象的设计以便进行联合使用时。
 • 当你提供一个产品类库，而只想显示它们的接口而不是实现时。
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
