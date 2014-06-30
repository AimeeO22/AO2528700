/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 26, 2014, 7:39 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 8 - How Much Insurance
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
    float rofb, minsu;
    //Initial Output
    cout<<"What is the replacement cost of the building?"<<endl;
    cin>>rofb;//replacement cost of building
    //Calculations
    minsu=rofb*.8;//minimum insurance, based on the cost
    //Final Output
    cout<<"Minimum Insurance = "<<minsu<<endl;
    //Exit stage right
    return 0;
}

