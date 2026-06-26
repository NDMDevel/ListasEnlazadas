#include "lista.h"
#include <iostream>

List::List()
{
    header = new node;
    header->data = 0;
    header->next = nullptr;
    count = 0;
}
List::~List()
{
//    node *last = header;
//    while( last->next != nullptr )
//        last = last->next;
//    delete last;
}

node *List::getNodeByPos(int pos)
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

void List::append(int x)
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
void List::print()
{
    node *last = header;
    while( last->next != nullptr )
    {
        last = last->next;
        std::cout << last->data << std::endl;
    }
}
void List::insert(int d,int pos)
{
    node *ant      = getNodeByPos(pos-1);
    node *node_pos = getNodeByPos(pos);
    node *curr = new node;
    curr->data = d;
    curr->next = node_pos;
    ant->next = curr;
    count++;
}

int List::operator[](int pos)
{
    node *aux = getNodeByPos(pos);
    return aux->data;
}
int List::getCount()
{
    return count;
}