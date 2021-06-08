
#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
class dynArr{
private:
    int *data;
    int si;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);

};
#endif // TASK1_H_INCLUDED
