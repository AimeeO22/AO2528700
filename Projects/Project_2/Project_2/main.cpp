/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 26, 2014, 10:50 AM
 * Purpose: Project 2 Game
 */

#include <cstdlib>
#include <fstream>		//for writing and reading from a file
#include <iostream>		
#include <ctime>		//for random seed
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned short a, b, c, d, e, f, g, h;	//1-10 the cards of face value
    unsigned int choice=0, choice2=0;	//yes or no variable
    unsigned seed=time(0);
//Function Prototypes
void mssg();
void uwin();
void iwin();
//Execution Begins Here

int main(int argc, char** argv) {
    unsigned short a, b, c, d, e, f, g, h;	//1-10 the cards of face value
    unsigned int choice=0, choice2=0;	//yes or no variable
    unsigned seed=time(0);		//random seed
    srand(seed);
    a=1+rand()%9+1;                     //computer
    b=1+rand()%9+1;                     //computer
    c=1+rand()%9+1;                     //player
    d=1+rand()%9+1;                     //player
    e=1+rand()%9+1;                     //player
    f=1+rand()%9+1;                     //computer
    g=1+rand()%9+1;                     //computer
    h=1+rand()%9+1;                     //player
    mssg();
    do
    {
    cout<<"1. Play Game\n"
    <<"2. Quit Game\n";
    cin>>choice2;
    switch (choice2)
    {
    case 1:
    {
    cout<<"Computer Cards: "<<a<<endl;
    cout<<"Player Cards: "<<c<<" "<<d<<endl;
    cout<<"Hit? \n 1.Yes \n 2.No"<<endl;
    cin>>choice;
        switch (choice)
        {
            case 1:
            {
                cout<<"Player cards: "<<c
                <<" "<<d<<" "<<e<<endl;
                cout<<"Computer Cards: "<<a<<endl;

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
                    
            else if (c+d+e<21 && a+b<c+d+e)
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
                            if (c+d+e+h>21)
                            {
                                iwin();
                            }
                            else if (c+d+e+h>a+b && c+d+e+h<22)
                            {
                                uwin();
                            }
                            else if (a+b>c+d+e+h && a+b<22)
                            {
                                iwin();
                            }
                            break;
                        }
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
                uwin();
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
                            if (c+d+e+h>21)
                            {
                                iwin();
                            }
                            else if (c+d+e+h>a+b && c+d+e+h<22)
                            {
                                uwin();
                            }
                            else if (a+b>c+d+e+h && a+b<22)
                            {
                                iwin();
                            }
                            break;
                        }
                        default:
                        {
                            cout<<"player cards: \n"<<c
                            <<" "<<d<<" "<<e<<endl;
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
                break;
            //}
        
        
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
                break;
}
        }
    }
        case 2:
        {
            cout<<"Thank you for playing!\n";
            break;
        }
    }

        }while (choice2==1);
    return 0;
}

void mssg()
{
    cout<<"Welcome to Blackjack!\nThe rules "
            <<"of the game are simple.\n"
            <<"Try to get to 21 without going over,\n"
            <<"and without going under the dealer "
            <<"(that's me!)\nReady? Let's Go!\n";
}

void uwin()
{
    cout<<"Congratulations, you won "
            <<"the game! Would you "
            <<"like to try again?\n";
}
void iwin()
{
    cout<<"I'm sorry, you lose. "
            <<"Try again next time!\n";
}