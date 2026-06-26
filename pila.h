#pragma
#include "lista.h"

template<typename T>
class Pila : protected List<T>
{
private:

public:
    void push(T data)
    {
        insert(data,0);
    }
    T pop(void)
    {
        //T aux = operator[](0);
        T aux = getNodeByPos(0)->data;
        remote(0);
        return aux;
    }
};