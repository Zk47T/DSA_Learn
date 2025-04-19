#include <iostream>
using namespace std;

template <class T>

class Arithmetic {
private:
    T a, b;
public:
    Arithmetic(T x, T y);
    T add();
    T subtract();
    T multiply();
};
template <class T>
Arithmetic<T>::Arithmetic(T x, T y) 
{
    a = x;
    b = y;
    cout << "Constructor called" << endl;
}
template <class T>
T Arithmetic<T>::add() 
{ 
    return a + b; 
}
template <class T>
T Arithmetic<T>::subtract() 
{ 
    return a - b; 
}
template <class T>
T Arithmetic<T>::multiply() 
{ 
    return a * b; 
}
    
int main() {
    Arithmetic arith(10.57,5.5);
    cout << "Add "<< arith.add() << endl;
    cout << "Subtract " << arith.subtract() << endl;
    return 0;
}