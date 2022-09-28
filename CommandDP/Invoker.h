#pragma once

#include <iostream>

#include "Command.h"

/**
 * The Invoker is associated with one or several commands. It sends a request to
 * the command.
 */
class Invoker
{
    /**
     * @var Command
     */
private:
    Command* on_start_;
    /**
     * @var Command
     */
    Command* on_finish_;
    /**
     * Initialize commands.
     */
public:
    ~Invoker();

    void SetOnStart(Command* command);
    void SetOnFinish(Command* command);

    //~Invoker() {
    //    delete on_start_;
    //    delete on_finish_;
    //}

    //void SetOnStart(Command* command) {
    //    this->on_start_ = command;
    //}
    //void SetOnFinish(Command* command) {
    //    this->on_finish_ = command;
    //}
    /**
     * The Invoker does not depend on concrete command or receiver classes. The
     * Invoker passes a request to a receiver indirectly, by executing a command.
     */
     void DoSomethingImportant();
     
    //void DoSomethingImportant() {
    //    std::cout << "Invoker: Does anybody want something done before I begin?\n";
    //    if (this->on_start_) {
    //        this->on_start_->Execute();
    //    }
    //    std::cout << "Invoker: ...doing something really important...\n";
    //    std::cout << "Invoker: Does anybody want something done after I finish?\n";
    //    if (this->on_finish_) {
    //        this->on_finish_->Execute();
    //    }
    //}
};

