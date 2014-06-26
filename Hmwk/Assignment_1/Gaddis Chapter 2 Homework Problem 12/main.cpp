/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 24, 2014, 8:36 PM
 * Purpose: Chapter 2 Homework Problem 12 - Land Calculation
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int land=389767; //Tract of Land Amount
    int oneacre=43560; //Amount of Land in One Acre
    //Calculations
    int nofa=land/oneacre;
    //Output
    cout<<"Number of Acres = "<<land/oneacre<<endl;
    //Exit Stage Left
    return 0;
}

