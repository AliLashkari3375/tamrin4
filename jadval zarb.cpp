// jadval zarb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter columns :" << endl;
    cin >> n;
    cout << "Enter rows :" << endl;
    cin >> m;
    for (int j = 1; j < n + 1; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }
}//Ali lashkari