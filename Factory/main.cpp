//
//  main.cpp
//  Factory
//
//  Created by Frank on 15/7/2.
//
//
/*
 Factory模式的两个最重要的功能：
 1）定义创建对象的接口，封装了对象的创建；
 2）使得具体化类的工作延迟到了子类中。
 
 示例代码中给出的是Factory模式解决父类中并不知道具体要实例化哪一个具体的子类的问题，至于为创建对象提供接口问题，可以由Factory中附加相应的创建操作例如Create***Product()即可。
 
 Factory模式也带来至少以下两个问题： 
 1）如果为每一个具体的ConcreteProduct类的实例化提供一个函数体，那么我们可能不得不在系统中添加了一个方法来处理这个新建的ConcreteProduct，这样Factory的接口永远就不肯能封闭（Close）。当然我们可以通过创建一个Factory的子类来通过多态实现这一点，但是这也是以新建一个类作为代价的。 
 2）在实现中我们可以通过参数化工厂方法，即给FactoryMethod（）传递一个参数用以决定是创建具体哪一个具体的Product。当然也可以通过模板化避免 1）中的子类创建子类，其方法就是将具体Product类作为模板参数，实现起来也很简单。
 
 适用性
 在下列情况下可以使用Factory Method模式：
 • 当一个类不知道它所必须创建的对象的类的时候。
 • 当一个类希望由它的子类来指定它所创建的对象的时候。
 • 当类将创建对象的职责委托给多个帮助子类中的某一个，并且你希望将哪一个帮助子类
 是代理者这一信息局部化的时候。
*/

#include <iostream>

#include "Factory.h"
#include "Product.h"

int main(int argc, const char * argv[]) {
    Factory *pFac = new ConcreteFactory();
    
    Product *pPro = pFac->createProduct();
    
    return 0;
}
