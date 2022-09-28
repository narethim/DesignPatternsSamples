// CommandDP-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Giant.h"
#include "Queue.h"
#include "Command.h"

void Before()
{
    Queue<Giant> que;

    Giant input[6], * bad_guy;

    for (int i = 0; i < 6; i++)
        que.enque(&input[i]);

    for (int i = 0; i < 6; i++)
    {
        bad_guy = que.deque();
        if (bad_guy->get_type() == Giant::Fee)
            bad_guy->fee();
        else if (bad_guy->get_type() == Giant::Phi)
            bad_guy->phi();
        else if (bad_guy->get_type() == Giant::Pheaux)
            bad_guy->pheaux();
    }
    cout << '\n';
}

void After()
{
    Queue<Command> que;

    Command* input[] =
    {
      new Command(new Giant, &Giant::fee), 
      new Command(new Giant, &Giant::phi),
      new Command(new Giant, &Giant::pheaux), 
      new Command(new Giant, &Giant::fee), 
      new Command(new Giant, &Giant::phi), 
      new Command(new Giant, &Giant::pheaux)
    };

    for (int i = 0; i < 6; i++)
        que.enque( input[i] );

    for (int i = 0; i < 6; i++)
        que.deque()->execute();
    cout << '\n';

}

int main()
{

    // Before();

    After();
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

// https://sourcemaking.com/design_patterns/command/cpp/1  // Command in C++: before and after
// https://sourcemaking.com/design_patterns/command/cpp/2  // Command in C++
// https://sourcemaking.com/design_patterns/command/cpp/3  // Command in C++: simple and macro command

