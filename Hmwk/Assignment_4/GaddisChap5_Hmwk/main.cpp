/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 10, 2014, 12:30 PM
 * Purpose: Gaddis 7th Ed - Chapter 5 - Problems 1-10
 */


//System Level Libraries

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Problem 1
    unsigned short numbr=0,tot;
    cout<<"What is your number?\n";
    cin>>numbr;
    //while (nmbr<numbr)
    //{
    //tot=nmbr+nmbr++;
    //}
    //nmbr==numbr;
    //cout<<"Total: "<<tot<<endl;
    for(int nmbr; nmbr<=numbr; nmbr++)
    {
        cout<<"total: "<<nmbr+(nmbr+1)<<endl;
    }
    
    return 0;
}

