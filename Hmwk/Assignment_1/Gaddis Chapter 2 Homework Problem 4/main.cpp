/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 24, 2014, 7:37 PM
 * Purpose: Chapter 2 - Problem 4 - Restaurant Bill
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float MPrc=4.45e1;//the charge of the meal, alone
    float Tax=6.75e-2;//The amount of tax to be added
    float Tip=1.5e-1;//The Amount of the tip to be added
    //Output
    cout<<"Meal Price =$"<<MPrc<<endl;
    cout<<"Tax on Meal =$"<<MPrc*Tax<<endl;
    cout<<"Tip Due =$"<<MPrc*Tax+MPrc*Tip<<endl;
    cout<<"Total Amount on Bill =$"<<MPrc*Tax+MPrc*Tip+MPrc*Tax+MPrc<<endl;
    //Exit Stage Left
    return 0;
}