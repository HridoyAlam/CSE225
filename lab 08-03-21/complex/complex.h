#ifndef COMPLEX_INCLUDED
#define COMPLEX_INCLUDED
class Complex{
    friend Complex operator+(Complex, Complex);
    friend Complex operator+(Complex, int);
    friend Complex operator+(int, Complex);
private:
    int real;
    int imaginary;
public:
    Complex();
    Complex(int, int);

    void Print();
};
#endif // COMPLEX_INCLUDED
