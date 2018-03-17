#include "Unsorted.h"
#include "Unsorted.cpp"
#include <iostream>

using namespace std;

int main()
{
    Unsorted<int> u;
    u.InsertItem(5);
    u.InsertItem(7);
    u.InsertItem(6);
    u.InsertItem(9);
    u.Display();
}
