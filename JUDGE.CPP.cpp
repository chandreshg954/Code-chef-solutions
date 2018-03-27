#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n , a[100] , b[100] , i;
        cin>>n;
        for(i=0 ; i<n ; i++)
            cin>>a[i];
        for(i=0 ; i<n ; i++)
            cin>>b[i];
        int max1 = a[0] , max2 = b[0] , sum1 = 0 , sum2 = 0;
        for(i=0 ; i<n ; i++)
        {
            sum1 = sum1 + a[i];
            if(max1 < a[i])
                max1 = a[i];
        }
        for(i=0 ; i<n ; i++)
        {
            sum2 = sum2 + b[i];
            if(max2 < b[i])
                max2 = b[i];
        }
        sum1 = sum1 - max1;
        sum2 = sum2 - max2;
        if(sum1 < sum2)
            cout<<"Alice\n";
        else if(sum1 > sum2)
                cout<<"Bob\n";
        else
            cout<<"Draw\n";
        t--;
    }
}
