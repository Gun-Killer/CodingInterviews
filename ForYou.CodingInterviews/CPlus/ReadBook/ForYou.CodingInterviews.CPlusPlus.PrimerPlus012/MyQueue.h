#pragma once
#include <exception>
#include <stdexcept>

template<typename NoteTypeT>
class MyQueue
{
    struct QueueNode
    {
        NoteTypeT item;
        QueueNode* next = nullptr;
    };

private:
    QueueNode* first = nullptr;
    QueueNode* end = nullptr;
    int m_size{ 0 };

public:
    MyQueue();
    MyQueue(MyQueue& source);

    ~MyQueue();

    int size();

    void enqueue(const NoteTypeT& item);

    NoteTypeT& dequeue();

    MyQueue& operator=(const MyQueue& source);
};

template<typename NoteTypeT>
inline MyQueue<NoteTypeT>::MyQueue()
{

}

template<typename NoteTypeT>
inline MyQueue<NoteTypeT>::MyQueue(MyQueue& source)
{
    auto temp = source.first;
    while (temp != nullptr)
    {
        enqueue(temp->item);
        temp = temp->next;
    }
}

template<typename NoteTypeT>
inline MyQueue<NoteTypeT>::~MyQueue()
{
    while (this->first != nullptr)
    {
        auto temp = this->first->next;
        delete this->first;
        this->first = temp;
    }
    this->end = nullptr;
}

template<typename NoteTypeT>
inline void MyQueue<NoteTypeT>::enqueue(const NoteTypeT& item)
{
    m_size++;
    if (first == nullptr)
    {
        first = new QueueNode{ item , nullptr };
        end = first;
    }
    else
    {
        auto temp = new QueueNode{ item , nullptr };
        end->next = temp;
        end = temp;
    }
}


template<typename NoteTypeT>
int MyQueue<NoteTypeT>::size()
{
    return this->m_size;
}

template<typename NoteTypeT>
NoteTypeT& MyQueue<NoteTypeT>::dequeue()
{
    if (m_size < 1)
    {
        throw std::out_of_range::out_of_range("");
    }
    m_size--;
    auto temp = first;
    first = first->next;
    NoteTypeT res = temp->item;
    delete temp;
    return res;
}

template<typename NoteTypeT>
inline MyQueue<NoteTypeT>& MyQueue<NoteTypeT>::operator=(const MyQueue<NoteTypeT>& source)
{
    if (source == *this)
    {
        return *this;
    }
    auto temp = source.first;
    while (temp != nullptr)
    {
        enqueue(temp->item);
        temp = temp->next;
    }
    return  *this;
}
