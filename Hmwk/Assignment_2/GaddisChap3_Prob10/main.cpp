/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 26, 2014, 8:07 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 10 - Celsius to Fahrenheit
 */

//System Level Libraries

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Display Variables
    float cel, fah;
    //Initial Output
    cout<<"What is the temperature in degrees Celsius?"<<endl;
    cin>>cel;
    //Calculations
    fah=(cel*9/5)+32;
    //Final Output
    cout<<setprecision(2)<<fixed;
    cout<<"Degrees Fahrenheit = "<<fah<<endl;
    //Exit Here
    return 0;
}

