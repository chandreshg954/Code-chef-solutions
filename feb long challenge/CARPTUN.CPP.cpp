#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,t,a=0;
    cin>>t;
    long long n[t],arr[t][3];
    //long long booth_time[100][100000];
    long long** booth_time = new long long*[100];

    for(i=0;i<t;i++)
        booth_time[i] = new long long[100000];
    while(a<t)
    {
        cin>>n[a];
        for(i=0;i<n[a];i++)
            cin>>booth_time[a][i];
        for(i=0;i<3;i++)
            cin>>arr[a][i];
        a++;
    }
    for(a=0;a<t;a++)
    {
        long long time,time1[100000],time2[100000];
        time1[0] = booth_time[a][0];
        for(i=1;i<n[a];i++)
        {
                time = time1[i-1] + booth_time[a][i] + arr[a][1]/arr[a][2];
                time1[i] = time;
        }
        time = 2*booth_time[a][0];
        time2[0] = time;
        for(i=1;i<n[a];i++)
        {
            if((time2[i-1] + arr[a][1]/arr[a][2]) < time1[i])
            {
                time = arr[a][1]/arr[a][2] + booth_time[a][i] + time2[i-1] + time1[i] - time2[i-1] - arr[a][1]/arr[a][2];
                time2[i] = time;
            }
            else
                time = arr[a][1]/arr[a][2] + booth_time[a][i] + time2[i-1];
                time2[i] = time;
        }
        time = (time2[n[a]-1] - time1[n[a]-1])*(arr[a][0]-1);
        cout<<fixed<<setprecision(9)<<time<<"\n";
    }
}
