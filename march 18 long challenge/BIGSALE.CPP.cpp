#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n , i;
        double sum = 0.0000 , price[100000] , dis[100000] , qty[100000];
        cin>>n;
        for(i=0;i<n;i++)
            cin>>price[i]>>qty[i]>>dis[i];
        for(i=0 ; i<n ; i++)
        {
            sum = sum + (double)((qty[i]*price[i]*dis[i]*dis[i])/10000);
            //cout<<"\n"<<sum;
        }
        cout<<fixed<<setprecision(9)<<sum<<"\n";
        t--;
    }
}
