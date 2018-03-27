#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int i,j,l,r,flag,c=0,m=0,l_s;
        float ans = 0.0;
        cin>>l>>r;
        if(l==1)
            l_s=l+1;
        else
            l_s = l;
        for(i=l_s;i<=r;i++)
        {
            flag = 0;
            for(j=2;j<i;j++)
            {
                if(i%j == 0)
                    flag++;
            }
            if(flag == 0)
               c++;
        }
        m = r-l+1;
        ans = (float)c/m;
        cout<<fixed<<setprecision(6)<<ans;
        t--;
    }
}
