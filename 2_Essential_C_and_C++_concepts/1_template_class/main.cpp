#include <iostream>
using namespace std;
class Arithmetic {
private:
    int a, b;
public:
    Arithmetic(int x, int y);
    int add();
    int subtract();
    int multiply();
};
Arithmetic::Arithmetic(int x, int y) 
{
    a = x;
    b = y;
    cout << "Constructor called" << endl;
}
int Arithmetic::add() 
{ 
    return a + b; 
}
int Arithmetic::subtract() 
{ 
    return a - b; 
}
int Arithmetic::multiply() 
{ 
    return a * b; 
}
    
int main() {
    Arithmetic arith(10, 5), arith2(20, 10);
    cout << "Add "<< arith.add() << endl;
    cout << "Subtract " << arith.subtract() << endl;
    return 0;
}