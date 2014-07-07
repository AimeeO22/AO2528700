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
#include <cstdlib>
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
    cout<<"\n";
    cin>>choice;
    cin.ignore();
    
    //Switch Statement starts here
    switch (choice)
    {
        case 1:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 1: Minimum/Maximum"<<endl;
            int x, y;
            cout<<"What is your first integer?"<<endl;
            cin>>x;
            cin.ignore();
            cout<<"What is the second integer?"<<endl;
            cin>>y;
            cin.ignore();
            (x<y)?(cout<<y<<" is bigger"<<endl<<endl):(cout<<x<<" is bigger"<<endl<<endl);
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 2:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 2: Roman Numeral Converter"<<endl;
            int numbr;
            cout<<"Enter a number 1-10 to convert it into a roman numeral."<<endl;
            cin>>numbr;
            cin.ignore();
            switch(numbr)
            {
           case 1:cout<<"Roman Numeral: I"<<endl;
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
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 3:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 3: Magic Dates/n";
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
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 4:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 4: Area of rectangles"<<endl;
            int leg1, leg2, wid1, wid2, area1, area2;
            cout<<"What is the length of the first rectangle?"<<endl;
            cin>>leg1;
            cin.ignore();
            cout<<"What is the width of the first rectangle?"<<endl;
            cin>>wid1;
            cin.ignore();
            cout<<"What is the length of the second rectangle?"<<endl;
            cin>>leg2;
            cin.ignore();
            cout<<"What is the width of the second rectangle?"<<endl;
            cin>>wid2;
            cin.ignore();
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
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 5:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 5: BMI"<<endl;
            //Display Variables
            unsigned short weight, height;
            float bmi;
            //Initial Input
            cout<<"What is your weight in pounds?"<<endl;
            cin>>weight;
            cin.ignore();
            cout<<"What is your height in inches?"<<endl;
            cin>>height;
            cin.ignore();
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
            cout<<"Press Enter to continue\n";
            cin.ignore();
                 break;
        }
        case 6:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 6 Mass and Weight"<<endl;
            //Display Variables
            unsigned short mass;
            float wt;
            //Initial Input
            cout<<"What is the object's mass in kilograms?"<<endl;
            cin>>mass;
            cin.ignore();
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
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 7:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 7: Time Calculator\n";
            short sec;
            float min, hr, dys;
            cout<<"Enter a number of seconds"<<endl;
            cin>>sec;
            cin.ignore();
            cout<<setprecision(2)<<fixed;
            if (sec>=60 && sec<3600 )
            {
            min=sec/60;
            cout<<"You entered "<<min<<" minute(s)"<<endl;
            }
            else if (sec>=3600 && sec<86400)
            {
            hr=sec/3600;
            cout<<"you entered "<<hr<<" hour(s)"<<endl;
            }
            else if (sec>=86400)
            {
            dys=sec/86400;
            cout<<"You entered "<<dys<<" day(s)"<<endl;
            }
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 8:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 8: Change for a Dollar Game.\n";
            unsigned short pen, nik, dime, qtr;
            cout<<"Enter the number of pennies.\n";
            cin>>pen;
            cin.ignore();
            cout<<"Enter the number of nickels.\n";
            cin>>nik;
            cin.ignore();
            cout<<"Enter the number of dimes.\n";
            cin>>dime;
            cin.ignore();
            cout<<"Enter the number of quarters.\n";
            cin>>qtr;
            cin.ignore();
            if ((pen*1)+(nik*5)+(dime*10)+(qtr*25)==100)
            {
            cout<<"Congratulations you won the game!\n";
            }
            else if ((pen*1)+(nik*5)+(dime*10)+(qtr*25)<100)
            {
            cout<<"You entered less than one dollar.\n";
            }
            else if (100<(pen*1)+(nik*5)+(dime*10)+(qtr*25))
            {
            cout<<"You entered more than a dollar.\n";
            }
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 9:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 9: Math Tutor.\n";
            //Declare Variables
            unsigned seed=time(0), t, f;//to generate the random number
            int z, a;//the addition of the two numbers
            //Random Variables
            srand(seed);
            t=1+rand()%1000+1;//to make it between the range of 1-1000
            f=1+rand()%1000+1;
            //Initial Output
            cout<<"Add the following two numbers: "<<endl;
            cout<<t<<endl;
            cout<<f<<endl;
            //Pause
            cout<<"Enter the sum."<<endl;
            cin>>a;
            cin.get();//creates the pause
            //Calculations
            z=f+t;
            //Final Output
            if (z==a)
            {
                cout<<"Congratulations that is correct!\n";
            }
            else if (z!=a)
            {
                cout<<"The correct answer is "<<z<<endl;
            }
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 10:
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 10: Software sales.\n";
            //Declare Variables
            unsigned short qty=0;
            float totcost;
            cout<<"What are the number of units sold?\n";
            cin>>qty;
            cin.ignore();
            cout<<setprecision(2)<<fixed;
            if (qty>=1 && qty<=9)
            {
            totcost=qty*99;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=10 && qty<=19)
            {
            totcost=(qty*99)*.80;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=20 && qty<=49)
            {
            totcost=(qty*99)*.70;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=50 && qty<=99)
            {
            totcost=(qty*99)*.60;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>100)
            {
            totcost=(qty*99)*.50;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty<=0)
            {
            cout<<"You entered a number less than 1. Try again."<<endl;
            }
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        default:
        {
            cout<<"\n";
            cout<<"You entered a number not on the list. Please try again.\n";
                break;
        }
      }
    }
            
return 0;

}

