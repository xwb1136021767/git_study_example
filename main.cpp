#include "lambda.cpp"
#include<iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

#define MAX(x,y)({ \
    typeof(x) _x = x; \
    typeof(y) _y = y; \
    (void)(&_x == &_y); \
    _x > _y? _x : _y; \
})

struct line{
    int length;
    int arr[0];
};
struct example_struct
{
    char a;
    int b __attribute__ ((packed));
    long c __attribute__((packed));
};

struct example_struct2
{
    char a;
    int b ;
    long c ;
};

#define CHECK1(x,...) {if((x)) printf(__VA_ARGS__);}
int main(){
//    CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");
//    CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");
//    string a="ac",b="cd";
//    cout << MAX(a,b)<<endl;
    example_struct2 tmp;
    cout << "&tmp = "<< &tmp << endl;
    cout << "&tmp.b = " << &(tmp.b) << endl;
//    cout << "&tmp.b - &tmp" << (&(tmp.b) - (&tmp)) << endl;
    cout << "(size_t)&(((struct example_struct2*)0)->b) = " << (size_t)&(((struct example_struct2*)0)->b) << endl;


    return 0;
}
