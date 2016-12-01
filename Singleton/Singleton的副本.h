//
//  Singleton.h
//  DesignPattern
//
//  Created by Frank on 15/7/7.
//
//

#ifndef __DesignPattern__Singleton__
#define __DesignPattern__Singleton__

class Singleton
{
public:
    static Singleton * Instance();
protected:
    Singleton();
private:
    static Singleton * _instance;
};

#endif /* defined(__DesignPattern__Singleton__) */
