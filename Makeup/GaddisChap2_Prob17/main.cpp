/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 26, 2014, 12:17 AM
 * Purpose: Chapter 2 Homework Problem 17: Stock Comission
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declaration of Variables
    int shares=600;//Amount of Shares Bought
    float price=21.77;//Price of each share
    float comiss=.02;//Percent of commission paid to stock broker
    int stocka=13062;//Total amount of stock bought before commission
    float acomiss=261.24;//Amount of commission that is added to total stock
//Output
    cout<<"Amount Paid for Stock Alone = "<<stocka<<endl;
    cout<<"Amount of Commission = "<<acomiss<<endl;
    cout<<"Total Amount Paid = "<<stocka+acomiss<<endl;
    //Exit Stage
    return 0;
}

