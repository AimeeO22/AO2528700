/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 24, 2014, 7:31 PM
 * Purpose: Chapter 2 Problem 3 - Sales Tax
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float ttlTax=0.6e-1;
        //Add the 4% State Tax and the 2% County Tax for the Total amount of tax added
    int Prch=52; //Amount of the purchase
    cout<<"Sales Tax on Purchase = $"<<Prch*ttlTax<<endl;
    //Exit Stage Right
    return 0;
}