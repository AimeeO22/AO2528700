/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 6:06 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 1 - Miles Per Gallon
 */

//System Level Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short gofg, nofm, mpg;
    
    //Initial Output
    cout<<"How many gallons of gas can the car hold?\n";
    cin>>gofg;//Gallons of Gas
    cout<<"How many miles can can the car be driven on a full tank?\n";
    cin>>nofm;//Number of Miles
    
    //Calculations
    mpg=nofm/gofg;//MPG=Miles per gallon
    
    //Final Output
    cout<<"Number of Miles Per Gallon of Gas = "<<mpg<<endl;
    //Exit Stage Left
    return 0;
}

