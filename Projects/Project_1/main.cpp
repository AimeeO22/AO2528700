/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 * Created on July 9, 2014, 11:24 AM
 * Purpose: Project One
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    unsigned short natural=21;//highest amount of points you can get
    unsigned short a, b, c, d, e, f, g;//1-10 the cards of face value
    unsigned short choice=0;//yes or no variable
    //int jack=10, queen=10, king=10, ace;
    unsigned seed=time(0);
    srand(seed);
    a=1+rand()%9+1;
    b=1+rand()%9+1;
    c=1+rand()%9+1;
    d=1+rand()%9+1;
    e=1+rand()%9+1;
    f=1+rand()%9+1;
    g=1+rand()%9+1;
    cout<<"Computer Cards: "<<a<<endl;
    cout<<"Player Cards: "<<c<<" "<<d<<endl;
    cout<<"Hit? \n 1.Yes \n 2.No"<<endl;
    cin>>choice;
        switch (choice)
        {
            case 1:
            
                cout<<"Player cards: \n"<<c
                <<" "<<d<<" "<<e<<endl;
                break;
            
            default:
            
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
            
        
    if (a+b==21 || a+b+f==21 || a+b+f+g==21)
    {
        cout<<"Computer cards: "<<a<<" "<<b<<endl;
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
    else if (21<c+d+e)
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
        cout<<"Computer cards: "<<a<<" "<<b<<" "<<f<<endl;
        cout<<"It's a draw."<<endl;
    }
            }
        }
    return 0;
}

