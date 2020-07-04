#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> a(6);
    int i=0,j=0,k,sum,maxsum=INT_MIN;
    for (i = 0; i < 6; i++) {
        a[i].resize(6);

        for (j = 0; j < 6; j++) {
            cin >> a[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    i=0,j=0;
    while(!(i==4&&j==0))
    {
        //define sum for each hourglass
        //cout<<"i = "<<i<<" j = "<<j<<endl;
        if (j+2<6)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            //cout<<"sum= "<<sum<<endl;
        if(sum>maxsum)
        maxsum=sum;
            j++;
        }
        else
        {
            i++;
            j=0;
        }
    }

    cout<<maxsum<<endl;
    return 0;
}

