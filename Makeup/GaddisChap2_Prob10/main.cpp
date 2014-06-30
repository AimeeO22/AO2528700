/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 25, 2014, 11:27 PM
 * Purpose: Gaddis Chapter 2 - Problem 10 - Miles Per Gallon
 */

//System Level Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declaration of Variables
    int gofg=12;//The number of gallons of gas the car has
    int totalm=350;//Number of miles the car can travel before refueling
//Calculations
    int MPG=gofg/totalm;
//Output
    cout<<"Miles Per Gallon of the Car = "<<totalm/gofg<<endl;
    return 0;
}

