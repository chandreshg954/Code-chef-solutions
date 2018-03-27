#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int m,n,j_n[1000],j_m[1000],i,j,k=0,flag;
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>j_m[i];
        for(i=0;i<n;i++)
        {
            flag = -1;
            for(j=0;j<m;j++)
            {
                if(i+1 == j_m[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag == -1)
            {
                j_n[k] = i+1;
                k++;
            }
        }
        for(i=0;i<n-m;i++)
        {
            if(i%2 == 0)
                cout<<j_n[i]<<" ";
        }
        cout<<"\n";
        for(i=0;i<n-m;i++)
        {
            if(i%2 != 0)
                cout<<j_n[i]<<" ";
        }
        cout<<"\n";
        t--;
    }
}
