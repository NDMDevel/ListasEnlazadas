#pragma once
#include <iostream>

template<typename T>
struct node
{
    T data;
    node<T> *next;
};

template<typename T>
class List
{
private:
    node<T> *header;
    int   count;
protected:
    node<T> *getNodeByPos(int pos)
    {
        if( pos < -1 || pos >= count )
            return nullptr;
        if( pos == -1 )
            return header;

        node<T> *last = header->next;
        while( pos-- > 0 )
            last = last->next;
        return last;
    }
public:
    List()
    {
        std::cout << "List ctor" << std::endl;
        header = new node<T>;
        header->data = 0;
        header->next = nullptr;
        count = 0;
    }
    ~List()
    {
        std::cout << "List dtor" << std::endl;
    }
    void append(T x)
    {
        node<T> *last = header;
        while( last->next != nullptr )
            last = last->next;
        //now last points to the last node
        last->next = new node<T>;
        last->next->next = nullptr;
        last->next->data = x;
        count++;
    }
    void print()
    {
        node<T> *last = header;
        while( last->next != nullptr )
        {
            last = last->next;
            std::cout << last->data << std::endl;
        }
    }
    T &operator[](int pos)
    {
        node<T> *aux = getNodeByPos(pos);
        return aux->data;
    }
    void insert(T d,int pos)
    {
        node<T> *ant      = getNodeByPos(pos-1);
        node<T> *node_pos = getNodeByPos(pos);
        node<T> *curr = new node<T>;
        curr->data = d;
        curr->next = node_pos;
        ant->next = curr;
        count++;
    }
    void remove(int pos)
    {

    }
    int getCount()
    {
        return count;
    }
};