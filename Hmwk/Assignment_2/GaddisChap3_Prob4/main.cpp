/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 6:20 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 4 - Average Rainfall
 */

//Sysytem Level Libraries

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Display Variables
    string month1, month2, month3;
    float nofi1, nofi2, nofi3, avg;
    //Initial Output
    cout<<"What is the name of the first month?"<<endl;
    cin>>month1;
    cout<<"How many inches of rain fell in that month?"<<endl;
    cin>>nofi1;
    cout<<"What is the name of the second month?"<<endl;
    cin>>month2;
    cout<<"How many inches of rain fell in that month?"<<endl;
    cin>>nofi2;
    cout<<"What is the name of the third month?"<<endl;
    cin>>month3;
    cout<<"How many inches of rain fell in that month?"<<endl;
    cin>>nofi3;
    //Calculations
    avg=(nofi1+nofi2+nofi3)/3;
    //Final Output
    cout<<setprecision(2)<<fixed;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<avg<<endl;
    return 0;
}

