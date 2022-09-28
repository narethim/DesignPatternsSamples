// CommandDP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Invoker.h"
#include "Receiver.h"
#include "SimpleCommand.h"
#include "ComplexCommand.h"

/**
 * The client code can parameterize an invoker with any commands.
 */

int main() {
    Invoker* invoker = new Invoker;

    // SimpleCommand
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));

    // ComplexCommand
    Receiver* receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;

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
// https://refactoring.guru/design-patterns/command/cpp/example
//