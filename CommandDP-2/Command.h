#pragma once

#include "Giant.h"

class Command
{

public:
    typedef void(Giant::* Action)();

    Command(Giant* object, Action method)
    {
        m_object = object;
        m_method = method;
    }

    void execute()
    {
        (m_object->* m_method)();
    }

private:
    Giant* m_object;
    Action m_method;

};

