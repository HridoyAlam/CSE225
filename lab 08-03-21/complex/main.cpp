#include<bits/stdc++.h>
#include <iostream>
#include"complex.h"
using namespace std;

int main()
{
    Complex c(2,3);
    Complex c1(4,5);
    Complex result;
    Complex result1;
    Complex result2;
    result = c+c1;
    result1 = c+5;
    result2 = 10+c;
    result.Print();
    result1.Print();
    result2.Print();

    //cout << "Hello world!" << endl;
    return 0;
}
