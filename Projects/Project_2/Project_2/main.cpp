/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 26, 2014, 10:50 AM
 * Purpose: Project 2 Game
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;
//Function Prototypes
void first();
void second();


int main(int argc, char** argv) {
//I dont know what game to make now -.- blackjack? a sim game? idk
    ofstream outputFile;
    outputFile. open("demofile.txt");
    cout<<"Practice 1"<<endl;
    outputFile<<"Sergiooooo \n";
    outputFile<<"is a \n";
    outputFile<<"giant \n";
    outputFile.close();
    ifstream inputFile;
    string name;
    inputFile.open("demofile.txt");
    cout<<"Reading file, practice 3\n";
    if (inputFile.fail())
    {
        cout<<"error\n";
    }
    else
    {
        //process file
    }
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile.close();
    second();
    cout<<"Function Main\n";
    return 0;
}
void first()
    {
        cout<<"This is from a function prototype\n";
    }
void second()
{
    cout<<"Second function\n";
    first();
    cout<<"Back again\n";
}
