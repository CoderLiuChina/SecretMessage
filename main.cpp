#include<iostream>
#include"key.h"
#include<cstring>

using namespace std;
int main()
{
    string mes;
    getline(cin, mes);
    work(mes.c_str());
    return 0;
}