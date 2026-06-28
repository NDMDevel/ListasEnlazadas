#pragma once
#include <iostream>

struct node
{
    int data;
    node *next;
};

class List
{
private:
    node *header;
    int   count;
protected:
    node *getNodeByPos(int pos)
    {
        if( pos < -1 || pos >= count )
            return nullptr;
        if( pos == -1 )
            return header;

        node *last = header->next;
        while( pos-- > 0 )
            last = last->next;
        return last;
    }
public:
    List()
    {
        std::cout << "List ctor" << std::endl;
        header = new node;
        header->data = 0;
        header->next = nullptr;
        count = 0;
    }
    ~List()
    {
        std::cout << "List dtor" << std::endl;
    }
    void append(int x)
    {
        node *last = header;
        while( last->next != nullptr )
            last = last->next;
        //now last points to the last node
        last->next = new node;
        last->next->next = nullptr;
        last->next->data = x;
        count++;
    }
    void print()
    {
        node *last = header;
        while( last->next != nullptr )
        {
            last = last->next;
            std::cout << last->data << std::endl;
        }
    }
    int operator[](int pos)
    {
        node *aux = getNodeByPos(pos);
        return aux->data;
    }
    void insert(int d,int pos)
    {
        node *ant      = getNodeByPos(pos-1);
        node *node_pos = getNodeByPos(pos);
        node *curr = new node;
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