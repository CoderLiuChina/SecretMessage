#include "key.h"
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

void start()
{
  cout<<"SecretMessage Ver α-2.5"<<endl
      <<"Produced by CoderLiuChina on GitHub"<<endl
      <<"Type\"credit\" for more information"<<endl
      <<"Type\"help()\" to get more help"<<endl;
}
//Start output

void help(const char* command)
{
  strlwr(command);
  switch(command){
    case "incrypt":{
      cout<<"Incrypt(...)"<<endl;
          <<"  Incrypt([prompt]) -> string"<<endl
          <<"  Incrypt a string from standard input"<<endl
          <<"  Return the result to standard output"<<endl;
    }
    case "decrypt":{
      cout<<"Decrypt(...)"<<endl;
          <<"  Decrypt([prompt]) -> string"<<endl;
          <<"  Decrypt a string from standard input"<<endl
          <<"  Return the result to standard output"<<endl;
    }
    default:{
      cout<<"Unknown command,please check the input"<<endl;
    }
  }
}
//Help function

int main()
{
  start();
  string command;
  cin>>command;
  //This is not the end
