//
// Created by Lenovo on 2022/3/7.
//
#include <iostream>
using namespace std;
int lambda(){
    auto f= [](const int&a,const int& b){
        return a+b;
    };
    int a=0,b=0;
    cin >> a >> b;
    cout<<f(a,b)<<endl;
    return 0;
}