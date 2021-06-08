
#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED

template<class t>
class dynArr{
private:
    t *data;
    int si;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, t);
    t getValue(int);

};
#endif // TASK1_H_INCLUDED
