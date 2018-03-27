#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long  arr[1000][4];
    int t,i,a=0,e,o,em,om,patent;
    cin>>t;
    char** s = new char*[t];
    for(i=0;i<t;i++)
        s[i] = new char[1000000];
    while(a<t)
    {
        for(i=0;i<4;i++)
            cin>>arr[a][i];
        cin>>s[a];
    a++;
    }
    for(a=0;a<t;a++)
    {
        e=0;o=0;em=0;om=0;
        for(i=0;s[a][i]!='\0';i++)
        {
            if(s[a][i]=='E')
                e++;
            else
                o++;
        }
        for(i=1;i<=arr[a][1];i++)
        {
            if(i%2==0)
                em++;
            else
                om++;
        }
        patent = 0;
        if(om!=0)
        {
            if(o < arr[a][2])
                patent+=o;
            else
            {
                if(om*arr[a][2] <= o)
                    patent = patent + om*arr[a][2];
                else
                    patent+=o;
            }
        }
        if(em!=0)
        {
            if(e < arr[a][2])
                patent+=e;
            else
            {
                if(em*arr[a][2] <= e)
                    patent = patent + em*arr[a][2];
                else
                    patent+=e;
            }
        }
        if(patent >= arr[a][0])
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
