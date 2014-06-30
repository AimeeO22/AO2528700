/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Pere
 * Created on June 26, 2014, 6:30 PM
 * Purpose: Gaddis 7thEd - Chapter 3 Homework Problem 3 - Test Average
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
    float t1, t2, t3, t4, t5, avg;
//Initial Output
    cout<<"What is the first test score?"<<endl;
    cin>>t1;//First test score
    cout<<"What is the second test score?"<<endl;
    cin>>t2;//second test score
    cout<<"What is the third test score?"<<endl;
    cin>>t3;//third test score
    cout<<"What is the fourth test score?"<<endl;
    cin>>t4;//fourth test score
    cout<<"What is the fifth test score?"<<endl;
    cin>>t5;//fifth test score
    //Calculations
    avg=(t1+t2+t3+t4+t5)/5;//average of the test scores
    //Final Output
    cout<<setprecision(1)<<fixed;
    cout<<"Average Test Score = "<<avg<<endl;
    //Exit Stage Right
    return 0;
}

