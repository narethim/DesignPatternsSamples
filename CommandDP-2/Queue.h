#pragma once

template <typename T> class Queue
{
public:
    Queue()
    {
        m_add = m_remove = 0;
    }
    void enque(T* c)
    {
        m_array[m_add] = c;
        m_add = (m_add + 1) % SIZE;
    }
    T* deque()
    {
        int temp = m_remove;
        m_remove = (m_remove + 1) % SIZE;
        return m_array[temp];
    }
private:
    enum
    {
        SIZE = 8
    };
    T* m_array[SIZE] {};
    int m_add, m_remove;
};

