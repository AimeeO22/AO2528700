/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 27, 2014, 8:42 PM
 * Purpose: Gaddis7thEd - Chapter 3 - Problem 15 - Math Tutor
 */

//System Level Libraries
#include <iostream>
#include <cstdlib>//for the random numbers

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned seed = time(0), y, x, z;
    //Random Variables
    srand(seed);
    y=1+rand()%300;
    x=1+rand()%300;
    //Initial Output
    cout<<"Add the following two numbers: "<<endl;
    cout<<y<<endl;
    cout<<x<<endl;
    //Pause
    cout<<"Press Enter when you are done to see the answer."<<endl;
    cin.get();//creates the pause
    //Calculations
    z=x+y;
    //Final Output
    cout<<z<<endl;
    //Exit Stage Right
    return 0;
}

