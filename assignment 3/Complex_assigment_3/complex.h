#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
    friend Complex operator+(Complex, Complex);
    friend Complex operator+(Complex, int);
    friend Complex operator+(int, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator-(Complex, int);
    friend Complex operator-(int, Complex);
    friend Complex operator*(Complex, Complex);
    friend Complex operator*(Complex, int);
    friend Complex operator*(int, Complex);
    friend void operator!=(Complex, Complex);
    friend void operator!=(Complex, int);
    friend void operator!=(int, Complex);
    friend void operator==(Complex, Complex);
    friend void operator==(Complex, int);
    friend void operator==(int, Complex);
private:
    int real;
    int imaginary;
public:
    Complex();
    Complex(int, int);
    void Print();

};

#endif // COMPLEX_H_INCLUDED
