#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

class dynArr{
private:
    int **data;
    int row;
    int col;

public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int, int);
    int getValue(int,int);
};

#endif // TASK3_H_INCLUDED
