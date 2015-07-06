//
//  main.cpp
//  Singleton
//
//  Created by Frank on 15/7/6.
//
//

#include <iostream>

using namespace std;

#include "Singleton.h"

int main(int argc, const char * argv[]) {
    Singleton * instance = Singleton::Instance();
    
    cout << instance << endl;
    
    Singleton * instance2 = Singleton::Instance();
    
    cout << instance2 << endl;
    
    return 0;
}
