#include"complex.h"
#include<bits/stdc++.h>
using namespace std;
Complex::Complex(){
    real = 0;
    imaginary= 0;
}
Complex::Complex(int r, int i){
    real = r;
    imaginary = i;
}

Complex operator+(Complex a, Complex b){
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;

    return sum;
}


Complex operator+(Complex a, int b){
    Complex sum;
    sum.real = a.real + b;
    sum.imaginary = a.imaginary ;

    return sum;
}
Complex operator+(int a, Complex b){
    Complex sum;
    sum.real = a + b.real;
    sum.imaginary = b.imaginary ;

    return sum;
}


void Complex::Print(){
    cout<<real<<" + "<<imaginary<<"i"<<endl;

}
