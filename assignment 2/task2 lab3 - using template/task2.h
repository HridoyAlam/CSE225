#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
template<class T>
class dynArr{
private:
    T *data;
    int si;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int index, T value);
    T getValue(int index);
    void allocate(int);
};
#endif // TASK2_H_INCLUDED
