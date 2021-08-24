/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 24, 2021, 7:51 AM
 * Purpose:  How to compare real/float values for an equality
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
#include <iomanip>    //Format Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    float x,y,epsilon;
    bool equal;
    
    //Initialize Variables
    x=3.2e6f;//3.2 million
    y=3.2000003e6f;//
    epsilon=pow(10,log10(x)-7);//Float within 7 significant digits
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<"x = "<<"10^"<<log10(x)<<endl;
    cout<<"y = "<<"10^"<<log10(y)<<endl;

    
    //Map inputs to outputs -> i.e. process the inputs
    //equal=(-epsilon < x-y) && (x-y < epsilon);
    equal=abs(x-y)<epsilon;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<(equal?"x==y":"x!=y")<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations