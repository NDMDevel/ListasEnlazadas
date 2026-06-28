# Trabajo Practico Evaluativo 2  

## Consignas  

1. Modificar la clase List para emplear templates  
2. Completar la clase List (desarrollar lo siguiente):  
- List::~List()  
- List::remove(int pos)  
3. Corregir errores en las clases List y Pila.  
4. Desarrollar la clase Cola (empleando herencia).  
5. Este TPE se aprueba si al ejecutar el siguiente programa todo funciona correctamente:  

```C++
#include "lista.h"
#include "Pila.h"
#include "Cola.h"

int main()
{
    std::cout << "--------- class List ---------" << std::endl;
    List<int> L;
    L.append(10);
    L.append(45);
    L.append(-9);
    L.insert(-100,0);
    L.print();
    L.remove(0);
    L.print();

    std::cout << "--------- class Pila ---------" << std::endl;
    Pila<double> P;
    P.push(3.14);
    P.push(6.28);
    P.push(2.1);
    while( P.isEmpty() == false )
        std::cout << P.pop() << std::endl;

    std::cout << "--------- class Cola ---------" << std::endl;
    Cola<float> C;
    C.put(2.5);
    C.put(2.7);
    C.put(2.9);
    while( !C.isEmpty() )
        std::cout << C.get() << std::endl;

    return 0;
}
```