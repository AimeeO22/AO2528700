/* 
 * File:   main.cpp
 * Author: Aimee Orozco-Perez
 *
 * Created on June 27, 2014, 8:42 PM
 */
//System Level Libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    unsigned seed = time(0), y, x, z;
    srand(seed);
    y=1+rand()%300;
    x=1+rand()%300;
    cout<<"Add the following two numbers: "<<endl;
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<"Press Enter when you are done to see the answer."<<endl;
    cin.get();
    z=x+y;
    cout<<z<<endl;
    return 0;
}

