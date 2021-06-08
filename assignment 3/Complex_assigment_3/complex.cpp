#include"complex.h"
#include<bits/stdc++.h>
using namespace std;

Complex::Complex(){
    real = 0;
    imaginary = 0;
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
    sum.imaginary = a.imaginary;
    return sum;
}
Complex operator+(int a, Complex b){
    Complex sum;
    sum.real = a + b.real;
    sum.imaginary = b.imaginary;
    return sum;
}


Complex operator-(Complex a, Complex b){
    Complex sub;
    sub.real = a.real - b.real;
    sub.imaginary = a.imaginary - b.imaginary;
    return sub;
}
Complex operator-(Complex a, int b){
    Complex sub;
    sub.real = a.real - b;
    sub.imaginary = a.imaginary;
    return sub;
}

Complex operator-(int a, Complex b){
    Complex sub;
    sub.real = a - b.real;
    sub.imaginary = b.imaginary;
    return sub;
}

Complex operator*(Complex a, Complex b){
    Complex mul;
    mul.real = ( (a.real * b.real) - (a.imaginary * b.imaginary) );
    mul.imaginary = ( (a.real * b.imaginary) + (a.imaginary * b.real) );
    return mul;
}

Complex operator*(Complex a, int b){
    Complex mul;
    mul.real = ( (a.real * b) - (a.imaginary) );
    mul.imaginary = ( (a.real) + (a.imaginary * b) );
    return mul;
}

Complex operator*(int a, Complex b){
    Complex mul;
    mul.real = ( (a * b.real) - (a * b.imaginary) );
    mul.imaginary = ( (a * b.imaginary) + (a* b.real) );
    return mul;
}

void operator==(Complex a, Complex b){
    if (a.real == b.real && a.imaginary == b.imaginary)
    //return True;
    cout<<"Both Complex numbers are equal"<<endl;
}
void operator!=(Complex a, Complex b){
    if (a.real != b.real || a.imaginary != b.imaginary)
    //return True;
    cout<<"Both Complex numbers are not equal"<<endl;
}
void operator!=(Complex a, int b){
    //if (a.real != b || a.imaginary != b)
    //return True;
    cout<<"Both Complex & integers numbers are not equal"<<endl;
}
void operator!=(int a, Complex b){

    cout<<"Both Complex & integers numbers are not equal"<<endl;
}
void Complex::Print(){
    if(real>=0 && imaginary>=0){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    if(real<=0 && imaginary<=0){
        cout<<real<<" - "<<imaginary<<"i"<<endl;
    }
    if(real<=0 && imaginary>0){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
}
