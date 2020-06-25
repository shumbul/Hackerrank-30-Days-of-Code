//Day 5: Loops
//Problem Link: https://www.hackerrank.com/challenges/30-loops/problem

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int i,j;
    for(i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}

