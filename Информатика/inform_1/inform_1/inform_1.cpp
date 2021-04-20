#include <iostream>

using namespace std;

class someclass
{
private:
    double A, B;
public:
    someclass(double a, double b)
    {
        A = a;
        B = b;
    }

    double function(double x)
    {
        return A * x + B;
    }
};

int main()
{
    someclass y(17, 18);
    cout << y.function(4) << endl;
}