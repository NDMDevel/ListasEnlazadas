#include "Lista.h"
#include <stdio.h>

//void swap(int &a,int &b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//void swap(double &a,double &b)
//{
//    double temp = a;
//    a = b;
//    b = temp;
//}
template<typename T>
void swap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
struct Punto
{
    T x;
    T y;
};

int main()
{
    Punto<int> p;

/*    int x = 10;
    int y = 20;
    swap( x , y );
    double d1 = 3.14;
    double d2 = 6.28;
    swap( d1 , d2 );
    printf("x = %d  y = %d\n",x,y);
    return 0;*/
    List L;
    L.append(7);    //[0]
    L.append(3);    //[1]
    L.append(2);    //[2]
    L.append(-5);   //[3]
    L.insert(-100,1);
    L.print();
    for( int i=0 ; i<L.getCount() ; i++ )
        L[i] = i;
    L.print();
    return 0;
}