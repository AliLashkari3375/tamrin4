// Pascal Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "tedad khat hara vared konid:\n";
    cin >> n;
    for (int line = 1; line <= n; line++)
    {
        int C = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << "\n";
    }
    return 0;
}//Ali lashkari