// cuonter letter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int words = 0;
    cout << "yek jomle vared konid: \n";
    cin.get(str,100);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }
    cout << "tedad kalamat dakhle jomle= " << words+1;
    return 0;
}//Ali lashkari