#ifndef CLASSB_H
#define CLASSB_H

#include<iostream>

using namespace std;

class ClassB
{
private:
    string info;
public:
    ClassB();
    string getInfo();
    void setInfo(string value);
};

#endif // CLASSB_H