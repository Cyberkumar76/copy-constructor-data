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

int main()
{
    test t1(500, 1000);
    test t2(t1);
    t2.display();
    t2.display();
    return 0;
}
