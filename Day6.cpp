//Day 6: Let's Review
//Problem Link: https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.length(),j;
        //cout<<l;
        for(j=0;j<l;j+=2)
        {
            cout<<s[j];
        }
        cout<<" ";
        for(j=1;j<l;j+=2)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}

