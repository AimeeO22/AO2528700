/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 26, 2014, 10:50 AM
 * Purpose: Project 2 Game
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mssg();
//Execution Begins Here

int main(int argc, char** argv) {
    //char cardk [52, '1'];           //contains the deck of cards
    unsigned short a, b, c, d, e, f, g, h;//1-10 the cards of face value
    unsigned int choice=0;//yes or no variable
    unsigned seed=time(0);
    srand(seed);
    a=1+rand()%9+1;
    b=1+rand()%9+1;
    c=1+rand()%9+1;
    d=1+rand()%9+1;
    e=1+rand()%9+1;
    f=1+rand()%9+1;
    g=1+rand()%9+1;
    h=1+rand()%9+1;
    mssg();
    cout<<"Computer Cards: "<<a<<endl;
    cout<<"Player Cards: "<<c<<" "<<d<<endl;
    cout<<"Hit? \n 1.Yes \n 2.No"<<endl;
    cin>>choice;
        switch (choice)
        {
            case 1:
            {
                cout<<"Player cards: \n"<<c
                <<" "<<d<<" "<<e<<endl;
                cout<<"Computer Cards: "<<a<<endl;
                if (c+d+e>21)
                {
                    cout<<"You went over 21. You lose.\n";
                }
                else
                {
                cout<<"Player Cards: "<<c<<" "<<d<<" "<<e<<endl;
                cout<<"Hit? \n 1.Yes \n 2.No"<<endl;
                cin>>choice;
                    switch (choice)
                    {
                        case 1:
                        {
                            cout<<"Player cards: \n"<<c
                            <<" "<<d<<" "<<e<<" "<<h<<endl;
                            if (c+d+e+h>21)
                            {
                                cout<<"You went over 21. You lose.\n";
                                return 0;
                            }
                            else if (c+d+e+h>a+b && c+d+e+h<22)
                            {
                                cout<<"You Win!\n";
                            }
                            else if (a+b>c+d+e+h && a+b<22)
                            {
                                cout<<"I win\n";
                            }
                            break;
                        }
                        default:
                        {
                            cout<<"player cards: \n"<<c
                            <<" "<<d<<" "<<e<<endl;
                            break;
                        }
                    }
                }
                break;            
            }
            case 2:
            {
                cout<<"player cards: \n"<<c
                <<" "<<d<<endl;
                break;
            }
        
        
        if (a+b<=15)
        {
            a+b+f;
            if (a+b+f<=15)
            {
                a+b+f+g;
            
        
    if (a+b==21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"I win."<<endl;
    }
    else if (a+b+f==21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"I win."<<endl;
    }
    else if (a+b+f+g==21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<" "<<g<<endl;
        cout<<"I win."<<endl;
    }
    else if(c+d==21 || c+d+e==21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"You Win."<<endl;
    }
    else if (c+d>a+b+f && c+d<=21)//
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"You win"<<endl;
    }
    else if (c+d>a+b+f+g && c+d<=21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"You win"<<endl;
    }
    else if (c+d<a+b && a+b<=21)//duplicated
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"I win"<<endl;
    }
    else if (a+b+f>c+d && a+b+f<=21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"I win"<<endl;   
    }
    else if (a+b+f+g>c+d && a+b+f+g<=21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<" "<<g<<endl;
        cout<<"I win"<<endl; 
    }
    else if (c+d>a+b && c+d<=21)//duplicated
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"You win"<<endl;
    }
    else if (c+d+e>a+b && c+d+e<=21)//duplicated
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"You Win"<<endl;
    }
    else if (c+d+e>a+b+f+g && c+d+e<=21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<" "<<g<<endl;
        cout<<"You Win"<<endl;
    }
    else if (c+d+e>a+b+f && c+d+e<=21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"You Win"<<endl;
    }
    else if (c+d+e>21)
    {
        cout<<"You scored higher than 21. You lose."<<endl;
    }
    else if (a+b==c+d+e || a+b==c+d)//duplicate
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
        cout<<"It's a draw."<<endl;
    }
    else if (a+b+f==c+d+e || a+b+f==c+d)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"It's a draw."<<endl;
    }
    else if (a+b+f+g==c+d+e || a+b+f+g==c+d)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<" "<<g<<endl;
        cout<<"It's a draw."<<endl;
    }
   }
  }       
        }
    return 0;
}
void mssg()
{
    cout<<"Welcome to Blackjack!\nThe rules "
            <<"of the game are simple.\n"
            <<"Try to get to 21 without going over,\n"
            <<"and without going under the dealer "
            <<"(that's me!) Ready?\n";
}