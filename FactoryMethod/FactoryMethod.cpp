// FactoryMethod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"

/**
 * The client code works with an instance of a concrete creator, albeit through
 * its base interface. As long as the client keeps working with the creator via
 * the base interface, you can pass it any creator's subclass.
 */
void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
        << creator.SomeOperation() << std::endl;
    // ...
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */
int main()
{
    // std::cout << "Hello World!\n";

    std::cout << "App: Launched with the ConcreteCreator1.\n";
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;

    std::cout << "App: Launched with the ConcreteCreator2.\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//
// https://refactoring.guru/design-patterns/factory-method/cpp/example
//