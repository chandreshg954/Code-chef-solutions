#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    //char** s;
    int c,a=0,t,len=0,i,f,e,h,k=0,co;
    //char b[4];
    cin>>t;
    char** s = new char*[t];
    for(int k=0;k<t;k++)
        s[k] = new char[5000000];
    while(a<t)
    {
        cin>>s[a];
        a++;
    }
    a=0;
    while(a<t)
    {
        len = 0;
        co = 0;
        for(int j=0;s[a][j]!='\0';j++)
            len++;
        for(i=0;i<len;i++)
        {
            if(s[a][i]=='c' || s[a][i]=='h' || s[a][i]=='e' || s[a][i]=='f')
            {
                //b[k]=s[a][i]; b[k+1]=s[a][i+1]; b[k+2]=s[a][i+2]; b[k+3]=s[a][i+3];
                c=0; f=0; h=0; e=0;
                 for(k=i;k<4+i;k++)
                {
                if(s[a][k] == 'c')
                    c++;
                else if(s[a][k] == 'h')
                    h++;
                else if(s[a][k] == 'e')
                    e++;
                else if(s[a][k] == 'f')
                    f++;
                else
                    break;
                }
            if(c==1 && h==1 && e==1 && f==1)
                co++;
            }
        }
        if(co==0)
            cout<<"normal\n";
        else
            cout<<"lovely "<<co<<"\n";
        a++;
    }
}
