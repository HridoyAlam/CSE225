#include <iostream>
#include<bits/stdc++.h>
#include"complex.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    Complex object1(2,5);
    Complex object2(4,5);
    Complex result;
    result = object1 + object2;
    cout<<"Two Complex Number sum: ";
    result.Print();

    result = object1 + 5;
    cout<<"One Complex Number and One Integer number sum: ";
    result.Print();

    result = 10 + object2;
    cout<<"One Integer Number and One Complex number sum: ";
    result.Print();

    result = object1 - object2;
    cout<<"Two Complex Number subtraction: ";
    result.Print();

    result = object1 - 5;
    cout<<"One Complex Number and One Integer number subtraction: ";
    result.Print();

    result = 10 - object2;
    cout<<"One Integer Number and One Complex number subtraction: ";
    result.Print();

    result = object1 * object2;
    cout<<"Two Complex Number Multiplication: ";
    result.Print();

    result = object1 * 5;
    cout<<"One Complex Number and One Integer number subtraction: ";
    result.Print();

    result = 10 * object2;
    cout<<"One Integer Number and One Complex number subtraction: ";
    result.Print();

    (object1 == object2);
    (object1 != object2);
    (object1 != 1);
    (2 != object2);

    return 0;
}
