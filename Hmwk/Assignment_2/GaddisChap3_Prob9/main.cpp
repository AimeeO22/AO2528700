/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 26, 2014, 7:39 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 9 - Automobile Costs
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
    int lp, ins, gas, oil, tire, maint, totm, tota;
    //Initial Output
    cout<<"What is the monthly cost for car loan payments?"<<endl;
    cin>>lp;//Monthly loan payments
    cout<<"What is the monthly cost for car insurance?"<<endl;
    cin>>ins;//Monthly Insurance costs
    cout<<"What is the monthly cost for your car's gas?"<<endl;
    cin>>gas;//Monthly gas cost
    cout<<"What is the monthly cost for your car's oil?"<<endl;
    cin>>oil;//Monthly oil costs
    cout<<"What is the monthly cost for your car's tires?"<<endl;
    cin>>tire;//Monthly cost for tires
    cout<<"What is the monthly cost for car maintenance?"<<endl;
    cin>>maint;//Monthly cost for car maintenance
    //Calculations
    totm=lp+ins+gas+oil+tire+maint;//Total monthly cars, add everything
    tota=totm*12;//Total annual, multiply sum by 12
    //Final Output
    cout<<"Total Monthly Car Costs = "<<totm<<endl;
    cout<<"Total Annual Car Costs = "<<tota<<endl;
    //Exit Here
    return 0;
}

