//copy constructor data to one to another whala
#include <iostream>
using namespace std;
class test
{
    int a, b;
public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    test(test &t)
    {
        a = t.a;
        b = t.b;
    }
    void display()
    {
        
        cout << "a is " << a << " b is " << b << endl;
    }
};
