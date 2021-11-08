#include "ui.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cctype>

using namespace std;

void start()
{
 cout<<"SecretMessage Ver beta-2"<<endl
     <<"Produced by CoderLiuChina on GitHub"<<endl
    <<"Type \"credit\" for more information"<<endl
    <<"Type \"help\" to get more help"<<endl;
}
//Start output

int main()
{
  start();
  string command_mes;
  cout << ">> ";
  getline(cin, command_mes);
  while(comcheck(command_mes) != 0)
  {
    cout << ">> ";
    getline(cin, command_mes);
  }
  return 0;
}
  
