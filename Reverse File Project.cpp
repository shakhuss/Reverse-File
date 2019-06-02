//Shakeb H.
//MCS Project 4

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
#include<fstream>

using namespace std;


int reverse(string str, string str1)
{


	stack<string> stack1;
	stack<char> stack2;
	string line;

	ifstream file(str);


	if (file.is_open())

	{

		string words;
		int i;
		i = 0;
		while (!file.eof())
		{
			file >> words;
			stack1.push(words);
			stack1.push(" ");
		}

		file.close();

		while (!stack1.empty())
		{
			words = stack1.top();
			for (i = words.length(); i >= 0; i--)
			{
				stack2.push(words[i]);
			}
			stack1.pop();
		}

		stack2.pop();

		ofstream fileout;
		fileout.open(str1);
		char k;

		while (!stack2.empty())
		{
			k = stack2.top();
			for (i = words.length(); i >= 0; i--)
			{
				if (stack2.top() == '\0');
				{
					stack2.pop();
				}
				fileout << stack2.top();
			}

			fileout.close();
		}
	}
	else;
	{
		cout << "File Error" << endl;
		return -1;
	}
}


int main()

{
	string str;
	string str1;
	cout << "Enter file to reverse it: " << endl;
	cin >> str;
	cout << endl;
	cout << "Now enter output file name: " << endl;
	cin >> str1;
	cout<< endl;
	reverse(str,str1);
	

}