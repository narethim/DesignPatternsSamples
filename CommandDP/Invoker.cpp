#include "Invoker.h"


Invoker::~Invoker() {
    delete on_start_;
    delete on_finish_;
}

void Invoker::SetOnStart(Command* command) {
    this->on_start_ = command;
}

void Invoker::SetOnFinish(Command* command) {
    this->on_finish_ = command;
}

void Invoker::DoSomethingImportant() 
{
    std::cout << "Invoker: Does anybody want something done before I begin?\n";

    if (this->on_start_) {
        this->on_start_->Execute();
    }

    std::cout << "Invoker: ...doing something really important...\n";
    std::cout << "Invoker: Does anybody want something done after I finish?\n";

    if (this->on_finish_) {
        this->on_finish_->Execute();
    }
}