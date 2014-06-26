/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on June 24, 2014, 8:17 PM
 * Purpose: Chapter 2 Homework Problem 8: Total Purchase
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float item1=12.95;//The first item bought
    float item2=24.95; //The second item bought
    float item3=6.95;//The third item bought
    float item4=14.95;//The fourth item bought
    float item5=3.95;//The fifth item bought
    float subttl=63.75;//The amount, before sales tax is added
    float slstx=0.6e-1;//Amount of sales tax
    float total=67.58;//The total after sales tax has been added
    //Output
    cout<<"Price of Item 1 = "<<item1<<endl;
    cout<<"Price of Item 2 = "<<item2<<endl;
    cout<<"Price of Item 3 = "<<item3<<endl;
    cout<<"Price of Item 4 = "<<item4<<endl;
    cout<<"Price of Item 5 = "<<item5<<endl;
    cout<<"Subtotal = "<<subttl<<endl;
    cout<<"Sales Tax Amount = "<<subttl*slstx<<endl;
    cout<<"Total = "<<total<<endl;
    //Exit Stage Left
    return 0;
}

