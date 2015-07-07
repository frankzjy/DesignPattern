//
//  main.cpp
//  Prototype
//
//  Created by Frank on 15/7/8.
//
//

/*
 Prototype模式提供了一个通过已存在对象进行新对象创建的接口（Clone），Clone()实现和具体的实现语言相关，在C++中我们将通过拷贝构造函数实现之。
适用性
 当一个系统应该独立于它的产品创建、构成和表示时，要使用Prototype模式；以及
 • 当要实例化的类是在运行时刻指定时，例如，通过动态装载；或者
 • 为了避免创建一个与产品类层次平行的工厂类层次时；或者
 • 当一个类的实例只能有几个不同状态组合中的一种时。建立相应数目的原型并克隆它们
 可能比每次用合适的状态手工实例化该类更方便一些。
 
 例：有N种形状的积木，一种设计方法是所有积木都继承一个抽象的积木类，这样类的数量就有N种，每次new的类型都不一样
 另一种设计方案是，我通过参数，type来区分这N种形状的积木，每当需要x形状的积木的时候，从已存在的一个x形状的积木clone一份出来，得到一个新的，形状为x的积木（这种设计方式需要在初始化的时候创建所有形状的积木对象）
 */

#include <iostream>
#include "Prototype.h"

int main(int argc, const char * argv[]) {
    Prototype* p1 = new ConcretePrototype(TYPE1);
    Prototype* p2 = new ConcretePrototype(TYPE2);
    Prototype* p3 = new ConcretePrototype(TYPE3);
    
    p1->Clone();
    p2->Clone();
    p3->Clone();
    
    return 0;
}
