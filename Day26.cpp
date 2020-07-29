#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int rd,rm,ry,ed,em,ey;
    cin>>rd>>rm>>ry;
    cin>>ed>>em>>ey;
    if(ry>ey)
    cout<<"10000"<<endl;
    else if(rm>em&&ry==ey)
    cout<<500*(rm-em)<<endl;
    else if(rd>ed &&rm==em &&ry==ey)
    cout<<15*(rd-ed)<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}

