//Day 1: Data Types
//Problem Link: https://www.hackerrank.com/challenges/30-data-types/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    cin>>i2;
    cin>>d2;
    cin.ignore();
    getline(cin,s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    printf("%0.1f\n",d+d2);
    s=s+s2;
    cout<<s<<endl;
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
