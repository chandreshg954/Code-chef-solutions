#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n , f=0 , b=0 ,i;
        long long l[100000] , g[100000];
        cin>>n;
        for(i=0 ; i<n ;i++)
            cin>>l[i];
        for(i=0 ; i<n ;i++)
            cin>>g[i];
        for(i=0 ; i<n ; i++)
        {
            if(l[i] <= g[i])
                f++;
            if(l[i] <= g[n-i-1])
                b++;
        }
        if(f == n && b == n)
            cout<<"both\n";
        if(f==n && b!=n)
            cout<<"front\n";
        if(f!=n && b==n)
            cout<<"back\n";
        if(f!=n && b!=n)
            cout<<"none\n";
        t--;
    }
}
