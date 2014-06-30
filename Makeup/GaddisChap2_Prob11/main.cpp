/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 25, 2014, 11:43 PM
 * Purpose: Gaddis Chapter 2 - Problem 11 - Distance per Tank of Gas
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
    int nofg=20;//The number of gallons the car holds
    float dtown=21.5;//Average mpg when driven in town
    float dhigh=26.8;//Average mpg when driven on the highway
    //Output
    cout<<"Distance in the Town = "<<nofg*dtown<<endl;
    cout<<"Distance on the Highway = "<<nofg*dhigh<<endl;
    //Exit Scene
    return 0;
}

