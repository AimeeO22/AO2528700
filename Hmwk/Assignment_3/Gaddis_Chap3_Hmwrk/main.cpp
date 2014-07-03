/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 2, 2014, 1:19 PM
 * Gaddis 7th Edition Chapter 4 problems 1-10
 */


//System Level Libraries

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variable
    int choice=1;     //main variable to display problem from menu
    while (choice<=10){
    //Display the Menu
    cout<<"1. Problem One"<<endl;       //One: Minimum/Maximum
    cout<<"2. Problem Two"<<endl;       //Two: Roman Numeral Converter
    cout<<"3. Problem Three"<<endl;     //Three:
    cout<<"4. Problem Four"<<endl;
    cout<<"5. Problem Five"<<endl;
    cout<<"6. Problem Six"<<endl;
    cout<<"7. Problem Seven"<<endl;
    cout<<"8. Problem Eight"<<endl;
    cout<<"9. Problem Nine"<<endl;
    cout<<"10. Problem Ten"<<endl;
    cin>>choice;
    
    //Switch Statement starts here
    switch (choice)
    {
        case 1:cout<<"Gaddis 7th Ed - Problem 1: Minimum/Maximum"<<endl;
            int x, y;
            cout<<"What is your first integer?"<<endl;
            cin>>x;
            cout<<"What is the second integer?"<<endl;
            cin>>y;
            (x<y)?(cout<<y<<" is bigger"<<endl):(cout<<x<<" is bigger"<<endl);
                break;
        case 2:cout<<"Gaddis 7th Ed - Problem 2: Roman Numeral Converter"<<endl;
            int numbr;
            cout<<"Enter a number 1-10 to convert it into a roman numeral."<<endl;
            cin>>numbr;
            switch(numbr)
        {   case 1:cout<<"Roman Numeral: I"<<endl;
                break;
            case 2:cout<<"Roman Numeral: II"<<endl;
                break;
            case 3:cout<<"Roman Numeral: III"<<endl;
                break;
            case 4:cout<<"Roman Numeral: IV"<<endl;
                break;
            case 5:cout<<"Roman Numeral: V"<<endl;
                break;
            case 6:cout<<"Roman Numeral: VI"<<endl;
                break;
            case 7:cout<<"Roman Numeral: VII"<<endl;
                break;
            case 8:cout<<"Roman Numeral: VIII"<<endl;
                break;
            case 9:cout<<"Roman Numeral: IX"<<endl;
                break;
            case 10:cout<<"Roman Numeral: X"<<endl;
                break;
            default:cout<<"You did not enter a number greater than 0 and less than 11"<<endl;
                break;
        }
                break;
        case 3:cout<<"Gaddis 7th Ed - Problem 4: Area of rectangles"<<endl;
            int leg1, leg2, wid1, wid2, area1, area2;
            cout<<"What is the length of the first rectangle?"<<endl;
            cin>>leg1;
            cout<<"What is the width of the first rectangle?"<<endl;
            cin>>wid1;
            cout<<"What is the length of the second rectangle?"<<endl;
            cin>>leg2;
            cout<<"What is the width of the second rectangle?"<<endl;
            cin>>wid2;
            //calculations
            area1=leg1*wid1;
            area2=leg2*wid2;
            if (area1>area2)
            {
            cout<<"The area of the first rectangle is bigger than the second."<<endl;
            }
            else if (area2>area1)
            {
            cout<<"The area of the second rectangle is bigger than the first."<<endl;
            }
            else if (area2==area1)
            {        
            cout<<"These rectangles have the same area."<<endl;
            }
                break;
        case 4:cout<<"Gaddis 7th Ed - Problem 5: BMI"<<endl;
            //Display Variables
            unsigned short weight, height;
            float bmi;
            //Initial Input
            cout<<"What is your weight in pounds?"<<endl;
            cin>>weight;
            cout<<"What is your height in inches?"<<endl;
            cin>>height;
            //Calculations
            bmi=(weight*703)/pow(height, 2.0);
            cout<<setprecision(2)<<fixed<<endl;
            if (bmi>25)
            {
            cout<<"You are overweight according to your BMI: "<<bmi<<endl;
            }
            else if (bmi<18.5)
            {
            cout<<"You are underweight according to your BMI: "<<bmi<<endl;
            }
            else if (25>bmi<18.5)
            {
            cout<<"You have optimal weight according to your BMI: "<<bmi<<endl;
            }
                 break;
        case 5:cout<<"Gaddis 7th Ed - Problem 6 Mass and Weight"<<endl;
            //Display Variables
            unsigned short mass;
            float wt;
            //Initial Input
            cout<<"What is the object's mass in kilograms?"<<endl;
            cin>>mass;
            //Calculations
            wt=mass*9.8;
            //Final Output
            cout<<setprecision(2)<<fixed<<endl;
            if (wt>1000)
            {
            cout<<"This object is too heavy."<<endl;
            }
            else if (wt<10)
            {
            cout<<"This object is too light."<<endl;
            }
            else
            {
            cout<<"The object's weight in Newtons is "<<wt<<endl;
            }
        }
    }
            
    

return 0;

}

