#pragma once
#include <iostream>
using namespace std;

class Point
{
    int a;
    int b;
    int c;
public:
    Point();
    Point(int a1, int b1, int c1);
    void Init();
    void Init(int a1, int b1, int c1);
    void Output();
};