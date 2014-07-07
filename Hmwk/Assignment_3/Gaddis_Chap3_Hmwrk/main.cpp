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
    cout<<"3. Problem Three"<<endl;     //Three: Magic Dates
    cout<<"4. Problem Four"<<endl;      //Four: Area of Rectangles
    cout<<"5. Problem Five"<<endl;      //Five: Body Mass Index
    cout<<"6. Problem Six"<<endl;       //Six: Mass and weight
    cout<<"7. Problem Seven"<<endl;     //Seven: Time Calculator
    cout<<"8. Problem Eight"<<endl;     //Eight: Change for a dollar game
    cout<<"9. Problem Nine"<<endl;      //Nine: Math Tutor
    cout<<"10. Problem Ten"<<endl;      //Ten: Software Sales
    cout<<"11. End Program"<<endl;      //Stop the loop
    cout<<"\n";                         //create a space between blocks of text
    cin>>choice;                        //get the choice from the user
    cin.ignore();                       //Ignores the enter key afterwards
    
    //Switch Statement starts here
    switch (choice)
    {
        case 1:                         //First Problem
        {
            cout<<"\n";                 //Space after the choice number
            cout<<"Gaddis 7th Ed - Problem 1: Minimum/Maximum"<<endl;
            //Declare Variables
            int x=0, y=0;               //Random letters for the integer
            //Initial Input
            cout<<"What is your first integer?"<<endl;
            cin>>x;                     //Variables one
            cin.ignore();               //Ignores the enter key afterwards
            cout<<"What is the second integer?"<<endl;
            cin>>y;                      //Variable two
            cin.ignore();               //Ignores the enter key afterwards
            cout<<"\n";                 //Space so that numbers aren't confused
            //Final Output
            (x<y)?(cout<<y<<" is bigger"<<endl<<endl):(cout<<x<<" is bigger"<<endl<<endl);
            //End of Problem One
            cout<<"Press Enter to continue\n";//To start at the menu again
            cin.ignore();               //Recognizes the enter key
                break;
        }
        case 2:                         //Problem Two
        {
            cout<<"\n";                 //Space after choice number
            cout<<"Gaddis 7th Ed - Problem 2: Roman Numeral Converter"<<endl;
            //Declare Variables
            int numbr;                  //Number of 1-10
            //Initial Input
            cout<<"Enter a number 1-10 to convert it into a Roman numeral."<<endl;
            cin>>numbr;                 //Get the number from user
            cin.ignore();               //Ignores the enter key after
            switch(numbr)               //Start of the switch for this problem
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
                //End of problem two
            }
            cout<<"\n";                    //Space after end of problem
            cout<<"Press Enter to continue\n";//Start from menu again
            cin.ignore();                  //recognizes enter key
                break;
        }
        case 3:                            //Problem three
        {
            cout<<"\n";                   //space after the choice
            cout<<"Gaddis 7th Ed - Problem 3: Magic Dates\n";
            //Declare variables
            unsigned short month, day, yr;
            //Initial Input
            cout<<"Enter a month in numeric form."<<endl;
            cin>>month;
            cin.ignore();                   //Ignores enter key after
            cout<<"Enter the day."<<endl;
            cin>>day;
            cin.ignore();                   //Ignores enter key after
            cout<<"Enter the last two digits of the year."<<endl;
            cin>>yr;
            cin.ignore();                   //ignores enter key after
            //start the if statement
            if (yr==month*day)              //calculation
            {
            cout<<"It is a magic date!"<<endl;
            }
            if (yr!=month*day)              //calculation
            {
            cout<<"It is not magic."<<endl;
            }
            //End of problem 3
            cout<<"\n";                     //Space after answer
            cout<<"Press Enter to continue."<<endl;//start from menu
            cin.ignore();                   //recognizes enter key
                break;
        }
        case 4:                             //Problem Four
        {
            cout<<"\n";                     //Space after choice
            cout<<"Gaddis 7th Ed - Problem 4: Area of rectangles"<<endl;
            //Declare variables
            int leg1, leg2;                 //length of the two rectangles
            int wid1, wid2;                 //width of two rectangles
            int area1, area2;               //area of both rectangles
            //Initial Input
            cout<<"What is the length of the first rectangle?"<<endl;
            cin>>leg1;
            cin.ignore();                   //Ignores the enter key after
            cout<<"What is the width of the first rectangle?"<<endl;
            cin>>wid1;
            cin.ignore();
            cout<<"What is the length of the second rectangle?"<<endl;
            cin>>leg2;
            cin.ignore();
            cout<<"What is the width of the second rectangle?"<<endl;
            cin>>wid2;
            cin.ignore();
            //Calculations
            area1=leg1*wid1;
            area2=leg2*wid2;
            //Start the if statement
            if (area1>area2)                //if area of the first rect. is bigger
            {
            cout<<"The area of the first rectangle is bigger than the second."<<endl;
            }
            else if (area2>area1)           //if area of second rectangle is bigger
            {
            cout<<"The area of the second rectangle is bigger than the first."<<endl;
            }
            else if (area2==area1)          //if both rectangles have the same area
            {        
            cout<<"These rectangles have the same area."<<endl;
            }
            //End of problem 4
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 5:                             //Problem 5
        {
            cout<<"\n";                     //Space after choice number
            cout<<"Gaddis 7th Ed - Problem 5: BMI"<<endl;
            //Display Variables
            unsigned short weight, height; //the integers from user
            float bmi;                      //result after the calculations
            //Initial Input
            cout<<"What is your weight in pounds?"<<endl;
            cin>>weight;
            cin.ignore();
            cout<<"What is your height in inches?"<<endl;
            cin>>height;
            cin.ignore();
            //Calculations
            bmi=(weight*703)/pow(height, 2.0);
            cout<<setprecision(2)<<fixed<<endl;//sets the decimal points
            //Start of if statement
            if (bmi>25)                         //if bmi is bigger than 25
            {
            cout<<"You are overweight according to your BMI: "<<bmi<<endl;
            }
            else if (bmi<18.5)                  //if bmi is less than 18.5
            {
            cout<<"You are underweight according to your BMI: "<<bmi<<endl;
            }
            else if (25>bmi<18.5)               //if bmi is in between the two
            {
            cout<<"You have optimal weight according to your BMI: "<<bmi<<endl;
            }
            //End of Problem 5
            cout<<"Press Enter to continue\n";  //Prompts user to start menu
            cin.ignore();                       //recognizes enter key
                 break;
        }
        case 6:                                 //problem 6
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 6 Mass and Weight"<<endl;
            //Display Variables
            unsigned short mass;                //mass of the object in kg
            float wt;                           //weight of object in Newtons
            //Initial Input
            cout<<"What is the object's mass in kilograms?"<<endl;
            cin>>mass;
            cin.ignore();
            //Calculations
            wt=mass*9.8;
            //Final Output
            cout<<setprecision(2)<<fixed<<endl;//Keeps decimal points to two places
            if (wt>1000)                    //weight calculated is bigger than 1000
            {
            cout<<"This object is too heavy."<<endl;
            }
            else if (wt<10)                 //weight calculated is less than 10
            {
            cout<<"This object is too light."<<endl;
            }
            else
            {
            cout<<"The object's weight in Newtons is "<<wt<<endl;
            }
            //End of problem 6
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 7:                         //Start of Problem 7
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 7: Time Calculator\n";
            //Declare Variables
            float sec, min, hr, dys;
            //Initial Input
            cout<<"Enter a number of seconds"<<endl;
            cin>>sec;
            cin.ignore();
            cout<<setprecision(0)<<fixed;   //makes it so there are no decimals
            if (sec>=60 && sec<3600)
            {
            min=sec/6e1;
            cout<<"You entered "<<min<<" minute(s)"<<endl;
            }
            else if (sec>=3600 && sec<86400)
            {
            hr=sec/3.6e3;
            cout<<"you entered "<<hr<<" hour(s)"<<endl;
            }
            else if (sec>=86400)
            {
            dys=sec/8.64e4;
            cout<<"You entered "<<dys<<" day(s)"<<endl;
            }
            else
            {
                cout<<"You entered "<<sec<<" second(s)"<<endl;
            }
            //End of Problem 7
            cout<<"Press Enter to continue."<<endl;
            cin.ignore();
                break;
        }
        case 8:                         //Start of problem 8
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 8: Change for a Dollar Game.\n";
            //Declare variables
            unsigned short pen, nik, dime, qtr;
            //Initial Input
            cout<<"Enter the number of pennies.\n";
            cin>>pen;                   //Pennies
            cin.ignore();
            cout<<"Enter the number of nickels.\n";
            cin>>nik;                   //Nickel
            cin.ignore();
            cout<<"Enter the number of dimes.\n";
            cin>>dime;                  //Dimes
            cin.ignore();
            cout<<"Enter the number of quarters.\n";
            cin>>qtr;                   //Quarters
            cin.ignore();
            //Calculations and Output
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
            //End of Problem 8
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 9:                         //Start of Problem 9
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
            if (z==a)                       //If the two answers are the same
            {
                cout<<"Congratulations that is correct!\n";
            }
            else if (z!=a)                  //If the user's answer is wrong
            {
                cout<<"The correct answer is "<<z<<endl;
            }
            //End of problem 9
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 10:                            //Start of Problem 10
        {
            cout<<"\n";
            cout<<"Gaddis 7th Ed - Problem 10: Software sales.\n";
            //Declare Variables
            unsigned short qty=0;
            float totcost;
            cout<<"What are the number of units sold?\n";
            cin>>qty;
            cin.ignore();
            cout<<setprecision(2)<<fixed;   //Decimals set to two places
            //Start of if statement; Output
            if (qty>=1 && qty<=9)           //Range of quantity
            {
                //Calculations with no discount
            totcost=qty*99;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=10 && qty<=19)
            {
                //Calculations with 20% discount
            totcost=(qty*99)*8.0e-1;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=20 && qty<=49)
            {
                //Calculations with 30% discount
            totcost=(qty*99)*7.0e-1;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>=50 && qty<=99)
            {
                //Calculations with 40% discount
            totcost=(qty*99)*6.0e-1;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty>100)
            {
                //Calculations with 50% discount
            totcost=(qty*99)*5.0e-1;
            cout<<"The total cost of your purchase: $"<<totcost<<endl;
            }
            else if (qty<=0)
            {
            cout<<"You entered a number less than 1. Try again."<<endl;
            }
            //End of problem 10
            cout<<"Press Enter to continue\n";
            cin.ignore();
                break;
        }
        case 11:                        //Ends the program
        {
            cout<<"\n";
            cout<<"Thank you.\n";
                break;
        }
        default:                      //ends program if number is not on the list
        {
            cout<<"\n";
            cout<<"You entered a number not on the list. Please try again."<<endl;
                break;
        }
      }
    }
         //Exit stage   
return 0;

}

