/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 5, 2021, 11:05 AM
 * Purpose: Sum of i
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow

//Function Prototypes
int sumFor(int);//Using the for-loop to sum
int sumFrm(int);//Using the derived formula
int sumRec(int);//Using Recursion, Base Case, Sequence

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    int n;//End of sequence
    
    //Initialize Variables
    n=10;
    
    //Display the outputs
    cout<<"For Loop Sum of 1 to  "<<n<<" = "<<sumFor(n)<<endl;
    cout<<"F(n) Sum of 1 to      "<<n<<" = "<<sumFrm(n)<<endl;
    cout<<"Recursive Sum of 1 to "<<n<<" = "<<sumRec(n)<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
int sumFor(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int sumFrm(int n){
    return n*(n+1)/2;
}
int sumRec(int n){
    //Base Case
    if(n<=1)return 1;
    //The recursive function
    return sumRec(n-1)+n;
}