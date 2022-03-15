#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include "oddEVEN.h"

using namespace std;

int main()
{
    ofstream numberRecord("numberlog.txt");
    fstream filing;
    filing.open("numberlog.txt");
    int input;
    cout << "Enter a number.\n";
    cin >> input;


    logTheNum(input, filing);
    if (isNeg(readLog(input))) {

        cout << "\nYour number is odd.\n";

    }
    else {

        cout << "\nYour number is even.\n";
    }

}

