#include "key.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cctype>

using namespace std;

void start()
{
 cout<<"SecretMessage Ver alpha-2.5"<<endl
     <<"Produced by CoderLiuChina on GitHub"<<endl
    <<"Type\"credit\" for more information"<<endl
    <<"Type\"help\" to get more help"<<endl;
}
//Start output

void help(string command)
{
  transform(command.begin(), command.end(), command.begin(), ::tolower);
  if(command=="incrypt"){
    cout<<"Incrypt(...)"<<endl
         <<"  Incrypt [prompt] -> string"<<endl
         <<"  Incrypt a string from standard input"<<endl
         <<"  Return the result to standard output"<<endl;
  }
  else if(command=="decrypt"){
    cout<<"Decrypt(...)"<<endl
        <<"  Decrypt [prompt] -> string"<<endl
        <<"  Decrypt a string from standard input"<<endl
        <<"  Return the result to standard output"<<endl;
  }
  else if(command=="help"){
    cout << "Type: help[command]" << endl;
  }
  else if(command=="credit"){
    cout << "Get the credits for the program" << endl;
  }
  else{
    cout << "Unknown command,please check the input" << endl;
  }
}
//Help function

int main()
{
  start();
  string command;
  cout << ">> ";
  cin >> command;
  while(command!="exit")
  {
    transform(command.begin(), command.end(), command.begin(), ::tolower);
    if(command=="credit"){
      credits();
    }
    else if(command=="help"){
      string prompt;
      cin >> prompt;
      help(prompt);
    }
    else if(command=="incrypt"){
      string mes;
      getchar();
      getline(cin, mes);
      work(mes.c_str());
      cout << endl;
    }
    else if(command=="decrypt"){
      string mes;
      getchar();
      cin >> mes;
      solve(mes.c_str());
	    cout << endl;
    }
    else if(command=="exit"){
      return 0;
    }
    else{
      cout << "Unknown command,please check your input" << endl;
    }
    cout << ">> ";
    cin >> command;
  }
  return 0;
}
