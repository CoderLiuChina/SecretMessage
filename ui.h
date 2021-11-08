#include "key.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int comcheck(string com)
{
    int len = com.size();
    int arr_final = 0, arr_begin = 0;
    for (arr_final = 0; arr_final < len; arr_final++)
    {
        if (com[arr_final] == ' ')
            break;
        else
            continue;
    }
    string com_head = com.substr(arr_begin, arr_final);
    arr_begin = arr_final;
    transform(com_head.begin(), com_head.end(), com_head.begin(), ::tolower);
    //check 'help'
    if (com_head == "help")
    {
        if (arr_begin == len)
        {
            cout << "Find Wrong at [command],please check your input" << endl;
            return 1;
        }
        string help_com = com.substr(arr_begin + 1, len - 1);
        transform(help_com.begin(), help_com.end(), help_com.begin(), ::tolower);
        if (help_com == "encrypt")
        {
            cout << "Type: Encrypt [prompt] -> string" << endl
                 << "  Encrypt a string from standard input" << endl
                 << "  Return the result to standard output" << endl;
        }
        else if (help_com == "decrypt")
        {
            cout << "Type: Decrypt [prompt] -> string" << endl
                 << "  Decrypt a string from standard input" << endl
                 << "  Return the result to standard output" << endl;
        }
        else if (help_com == "help")
        {
            cout << "Type: help[command] -> string" << endl
                 << "  Get help of the command" << endl;
        }
        else if (help_com == "credit")
        {
            cout << "Get the credits for the program" << endl;
        }
        else if (help_com == "exit")
        {
            cout << "Exit the program" << endl;
        }
        else
        {
            cout << "Unknown command,please check the input" << endl;
            cout << "Find Wrong at [command],please check your input" << endl;
        }
        return 1;
    }
    //check 'credit'
    else if (com_head == "credit")
    {
        if (arr_final != len)
        {
            cout << "Find Wrong at " << arr_final + 1 << " ,please check your input" << endl
                 << "  Type: Credit -> none" << endl;
        }
        else
        {
            credits();
        }
        return 1;
    }
    //check 'encrypt'
    else if (com_head == "encrypt")
    {
        if (arr_begin == len)
        {
            cout << "Find Wrong at [prompt],please check your input" << endl;
            return 1;
        }
        string enc_mes = com.substr(arr_begin + 1, len - 1);
        work(enc_mes.c_str());
        cout << endl;
        return 1;
    }
    //check 'decrypt'
    else if (com_head == "decrypt")
    {
        if (arr_begin == len)
        {
            cout << "Find Wrong at [prompt],please check your input" << endl;
            return 1;
        }
        string dec_mes = com.substr(arr_begin + 1, len - 1);
        solve(dec_mes.c_str());
        cout << endl;
        return 1;
    }
    //check 'exit'
    else if (com_head == "exit")
    {
        if (arr_begin != len)
        {
            cout << "Find Wrong at " << arr_begin << " ,please check your input" << endl;
            return 1;
        }
        return 0;
    }
    else
    {
        cout << "Unknown command,please check your input" << endl;
        return 1;
    }
    return -1;
}
