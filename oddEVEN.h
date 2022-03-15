#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>


using namespace std;


int readLog(int number) {


    fstream filefor;
    filefor.open("numberlog.txt");
    if (filefor.is_open()) {
        filefor.seekg(-1, ios_base::end);

        bool keepLooping = true;

        while (keepLooping) {

            char ch;
            filefor.get(ch);

            if ((int)filefor.tellg() <= 1) {
                filefor.seekg(0);
                keepLooping = false;
            }

            else if (ch == '\n') {

                keepLooping = false;
            }

            else {
                filefor.seekg(-2, ios_base::cur);
            }


        }


    }

    string lastLine;
    getline(filefor, lastLine);

    int position = lastLine.find(": ");
    string read = lastLine.substr(position + 1);
    int data = stoi(read);

    return data;


}
void logTheNum(int number, fstream& fileStore) {



    for (int subtract = 2; number >= -1; number = number - subtract) {



        fileStore.open("numberlog.txt", ios_base::app | ios_base::in);
        if (fileStore.is_open()); {
            fileStore << "\n" << number;
            fileStore.close();


        }

    }





}

bool isNeg(int number) {

    if (number < 0) {
        return true;
    }
    else {
        return false;
    }
}
