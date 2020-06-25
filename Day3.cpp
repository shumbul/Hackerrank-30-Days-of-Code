//Day 3: Intro to Conditional Statements
//Problem Link: https://www.hackerrank.com/challenges/30-conditional-statements/problem

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N,flag=0;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    ((N%2==1)?(flag=1):((N>=2&&N<=5)?(flag=0):((N>=6&&N<=20)?(flag=1):((N>20)?(flag=0):(flag=1)))));
    if (flag==0)
    cout<<"Not Weird"<<endl;
    else
    cout<<"Weird"<<endl;
    return 0;
}

