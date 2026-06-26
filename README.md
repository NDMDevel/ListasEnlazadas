#Consignas  

Migrar List a templates.  

Completar la clase List:  
- List::~List()  
- List::remove(int pos)  
Corregir errores en Lista y Pila.  

Desarrollar class Cola.  

Probar el siguiente codigo:  
```C++
#include "Pila.h"
#include "Cola.h"

int main()
{
    Pila<double> P;
    P.push(3.14);
    P.push(6.28);
    P.push(2.1);
    while( P.isEmpty() == false )
        std::cout << P.pop() << std::endl;

    Cola<double> C;
    C.put(2.5);
    C.put(2.7);
    C.put(2.9);
    while( !C.isEmpty() )
        std::cout << P.get() << std::endl;

    return 0;
}
```