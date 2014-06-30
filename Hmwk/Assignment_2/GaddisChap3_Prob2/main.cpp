/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 6:20 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 2 - Stadium Seating
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
     unsigned short CA, CB, CC, total;
//Initial Output
    cout<<"How many tickets for Class A were sold?\n";
    cin>>CA;//Class A
    cout<<"How many tickets for Class B were sold?\n";
    cin>>CB;//Class B
    cout<<"How many Tickets for Class C were sold?\n";
    cin>>CC;//Class C
    //Calculations
    total=(CA*15)+(CB*12)+(CC*9);//Multiply the number of each by their cost
    //Final Output
    cout<<setprecision(2)<<fixed;
    cout<<"Total = "<<total<<endl;
    //Exit Stage Right
    
    return 0;
}

