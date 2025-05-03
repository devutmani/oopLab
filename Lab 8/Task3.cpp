#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double real = 0, double imaginary = 0) : real(real), imaginary(imaginary) {}

    ComplexNumber operator+(const ComplexNumber &b)
    {
        ComplexNumber c;
        c.real = real + b.real;
        c.imaginary = imaginary + b.imaginary;
        return c;
    }

    ComplexNumber operator-(const ComplexNumber &b)
    {
        ComplexNumber c;
        c.real = real - b.real;
        c.imaginary = imaginary - b.imaginary;
        return c;
    }

    ComplexNumber operator*(const ComplexNumber &b)
    {
        ComplexNumber c;
        c.real = real * b.real;
        c.imaginary = imaginary * b.imaginary;
        return c;
    }

    ComplexNumber operator/(const ComplexNumber &b)
    {
        ComplexNumber c;
        c.real = real / b.real;
        c.imaginary = imaginary / b.imaginary;
        return c;
    }

    // ComplexNumber operator/(const ComplexNumber &b)
    // {
    //     return ComplexNumber(real / b.real, imaginary / b.imaginary);
    // }

    bool operator==(const ComplexNumber &b)
    {
        if (real == b.real && imaginary == b.imaginary)
        {
            return true;
        }
        return false;
    }

    void display() const
    {
        cout<<endl;
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main()
{
    ComplexNumber a(3, 4);
    ComplexNumber b(5, 8);

    ComplexNumber c;
    c.display();

    c = a + b;
    c.display();

    c = a - b;
    c.display();

    c = b - a;
    c.display();

    c = a * b;
    c.display();

    c = a / b;
    c.display();

    ComplexNumber d(5, 8);

    if (b == d)
    {
        cout<<"\nEqual!..."<<endl;
    }
    return 0;
}