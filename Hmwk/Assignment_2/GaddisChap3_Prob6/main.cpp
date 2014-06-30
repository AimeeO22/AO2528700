/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 6:20 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 6 - How Many Widgets
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
    float totw, wofp, nofw;
    //Initial Output
    cout<<"How much do the pallet and widgets weigh in pounds?"<<endl;
    cin>>totw;//Total weight of widgets and pallet
    cout<<"How much does the pallet weigh by itself in pounds?"<<endl;
    cin>>wofp;//Weight of just the pallet itself
    //Calculations
    nofw=(totw-wofp)/9.2;//Number of widgets = total weight/weight of one widget
    //Final Output
    cout<<"Number of widgets = "<<nofw<<endl;
    //Exit Stage Left
    return 0;
}

