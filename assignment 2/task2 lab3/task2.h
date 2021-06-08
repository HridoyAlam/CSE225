#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
class dynArr{
private:
    int *data;
    int si;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int index, int value);
    int getValue(int index);
    void allocate(int);
};
#endif // TASK2_H_INCLUDED
