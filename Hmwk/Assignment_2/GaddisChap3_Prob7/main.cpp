/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 7:13 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 7 - How Many Calories
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
    //Declare Variables
    unsigned short nofc, cal;
    //Initial Input
    cout<<"How many cookies did you eat?"<<endl;
    cin>>nofc;//Number of cookies eaten
    //Calculations
    cal=nofc*75;//There are 75 calories in one cookie, so this gives total cal
    //Final Output
    cout<<"Total calories consumed = "<<cal<<endl;
    //Exit Stage
    return 0;
}

