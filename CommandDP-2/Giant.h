#pragma once

#include<iostream>

using namespace std;



class Giant
{
public:
    enum Type
    {
        Fee, Phi, Pheaux
    };

    Giant()
    {
        m_id = s_next++;
        m_type = (Type)(m_id % 3);
    }

    Type get_type()
    {
        return m_type;
    }
    void fee()
    {
        cout << m_id << "-fee  ";
    }
    void phi()
    {
        cout << m_id << "-phi  ";
    }
    void pheaux()
    {
        cout << m_id << "-pheaux  ";
    }

private:
    Type m_type;
    int m_id;
    static int s_next;
};



