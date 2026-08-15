#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator, denominator;

public:
    Fraction(int n = 0, int d = 1) : numerator(n), denominator(d) {}

    Fraction add(const Fraction &f)
    {
        int newNumerator = numerator * f.denominator +
                           f.numerator * denominator;

        int newDenominator = denominator * f.denominator;

        return Fraction(newNumerator, newDenominator);
    }

    Fraction subtract(const Fraction &f)
    {
        int newNumerator = numerator * f.denominator -
                           f.numerator * denominator;

        int newDenominator = denominator * f.denominator;

        return Fraction(newNumerator, newDenominator);
    }

    void display() const
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction sum = f1.add(f2);
    Fraction diff = f1.subtract(f2);

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}