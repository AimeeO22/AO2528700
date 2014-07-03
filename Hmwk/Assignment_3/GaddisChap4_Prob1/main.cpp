/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 1, 2014, 10:25 AM
 * Purpose: Test out the 'if' statement
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;


int main(int argc, char** argv) {
/*    const int hs=95;
    int sc1, sc2, sc3;
    float avg;
    cout<<"Enter the scores: "<<endl;
    cin>>sc1>>sc2>>sc3;
    avg=(sc1+sc2+sc3)/3;
    cout<<setprecision(2)<<fixed;
    cout<<"Average = "<<avg<<endl;
     if (avg>hs)
        cout<<"Congrats!"<<endl;
     else
        cout<<"You could do better"<<endl;
 
    char emp, recg;
    cout<<"Are you employed? Answer with Y or N"<<endl;
    cin>>emp;
    cout<<"Are you a recent grad?"<<endl;
    cin>>recg;
    if(emp=='Y')
    {
        if(recg=='Y')
        {
           cout<<"Congrats you qualify!"<<endl;
        }
        else
        {
         cout<<"You do not qualify"<<endl;
         cout<<"Must have recently grad to qualify"<<endl;
        }
    } 
    else
    { cout<<"You do not qualify!"<<endl;
      cout<<"You must have a job to qualify"<<endl;
     }
    
    //Declare variables
    float rate, pmnt ;
    int loan, nofp;
    //Initial Input
    cout<<"What is the monthly interest rate?"<<endl;
    cin>>rate;
    cout<<"What is the number of payments?"<<endl;
    cin>>nofp;
    cout<<"What is the amount of the loan?"<<endl;
    cin>>loan;
    //Calculations
    pmnt=((rate*pow((1+rate),nofp))/(pow(1+rate,nofp)-1))*loan;
    //Final Output
    cout<<"Loan Amount: "<<loan<<endl;
    cout<<"Monthly Interest Rate: "<<rate<<endl;
    cout<<"Number of Payments: "<<nofp<<endl;
    cout<<"Monthly Payment: "<<pmnt<<endl;
    
    int x, y;
    cout<<"What is your first integer?"<<endl;
    cin>>x;
    cout<<"What is the second integer?"<<endl;
    cin>>y;
    (x<y)?(cout<<y<<" is bigger"<<endl):(cout<<x<<" is bigger"<<endl);
 
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
 */
    unsigned short month, day, yr;
    cout<<"Enter a month in numeric form."<<endl;
    cin>>month;
    cout<<"Enter the day."<<endl;
    cin>>day;
    cout<<"Enter the last two digits of the year."<<endl;
    cin>>yr;
    if (yr==month*day)
    {
        cout<<"It is a magic date!"<<endl;
    }
    if (yr!=month*day)
    {
        cout<<"It is not magic."<<endl;
    }
    return 0;
    

}