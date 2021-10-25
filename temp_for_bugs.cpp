#include <iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

namespace command
{
	string comin()
	{
		string com;
		std::getline(cin,com);
		return com;
	}
	string comcheck(string com)
	{
		int len=com.size();
		int arr_final=0,arr_begin=0;
		for(arr_final=0;arr_final<len;arr_final++)
		{
			if(com[arr_final]=" ")
				break;
			else continue;
		}
		string com_head = com.substr(arr_begin,arr_final);
		arr_begin=arr_final;
		//check 'help'
		if(com_head == "help")
		{
			
int main()
{
	str
}
