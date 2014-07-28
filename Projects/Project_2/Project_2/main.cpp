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

int main(int argc, char** argv) {

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
    cout<<"Reading file, practice 2\n";
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile>>name;
    cout<<name<<endl;
    inputFile.close();
    return 0;
}

