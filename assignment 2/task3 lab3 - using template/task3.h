#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
template<class T>
class dynArr{
private:
    T **data;
    int row;
    int col;

public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int, T);
    T getValue(int,int);
};

#endif // TASK3_H_INCLUDED
