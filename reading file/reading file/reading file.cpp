// reading file.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ifstream file("something");
    vector<string> names;
    string input;
    while (file >> input)
    {
        names.push_back(input);

    }
    for (string name : names)
    {
        cout << name ;

    }
}

    