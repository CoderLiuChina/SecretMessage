//This header is used for "main.cpp" in this program
//For everyone this header is not opened
//To get it,just solve the problem,then you'll get it
//Before you work out the problem,you cannot see anything of the code

/*-----------------------------------------------------------------*/

using namespace std;

#include<iostream>

void credits()
{
    cout << "Design:CoderLiuChina" << endl
         << "Producer:CoderLiuChina" << endl;
    cout << "You can give the program to everyone,but please do not give the code away" << endl;
}
//Just nothing, look down

#include<ctime>
#include<cmath>
#include<cstring>
#include<cstdlib>

int getkey()
{
    srand((unsigned int)time(NULL));
    long key_first;
    key_first = rand() % 89999998 + 10000001;
    //-----------------------------------------------First key
    char key_cache[8];
    sprintf(key_cache, "%d", (int)key_first);
    int key_long=0;
    srand((unsigned int)key_first);
    for (int i = 0; i < 8;i++)
    {
        int num = rand() % 7;
        key_long += num * pow(10, i);
    }
    //-----------------------------------------------Second key
    srand(key_long);
    return rand() % 17 + 17;
    //-----------------------------------------------Final key
}
//To get the key

void work(const char *mes)
{
    string final;
    char hex[10];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10;i++)
    {
        itoa(rand() % 239 + 16, hex, 16);
        final.append(hex);
    }
    //-----------------------------------------------Insert the interference code
    int key = getkey();
    itoa(key, hex, 10);
    final.append(hex);
    //-----------------------------------------------Insert the key
    int len = strlen(mes);
    for (int i = 0; i < len;i++)
    {
        char charactor = mes[i];
        int a = charactor / key;
        int b = charactor % key;
        //-------------------------------------------Make chars into integers
        itoa(a, hex, 16);
        if(strlen(hex)<2)
        {
            hex[1] = hex[0];
            hex[0] = '0';
        }
        //-------------------------------------------Look better
        final.append(hex);
        itoa(b, hex, 16);
        if(strlen(hex)<2)
        {
            hex[1] = hex[0];
            hex[0] = '0';
        }
        final.append(hex);
    }
    cout << final;
    //------------------------------------------------Secret message
}
//Encrypt the sentences

int getnum(char a)
{
	if(a>='0'&&a<='9')return a-48;
	else if(a>='a'&&a<='f') return a-'a'+10;
}
//get key from the message

void solve(const char *a)
{
	string mes;
	int arr = 22;
	int key = 0;
	key = getnum(a[20]) * 10 + getnum(a[21]);
//	cout << key << endl;
	for (arr = 22; arr < strlen(a); arr += 4)
	{
		int x = getnum(a[arr]) * 16 + getnum(a[arr+1]);
		int y = getnum(a[arr+2]) * 16 + getnum(a[arr+3]);
//		cout << x << ' ' << y << endl;
		char ch = x * key + y;
		mes += ch;
	}
	cout << mes;
}
//to decrypt