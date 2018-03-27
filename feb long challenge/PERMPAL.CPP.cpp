#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//string s[100] ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        int a[26] = {0};
        char d;
        int i,len=0,e=0,o=0,k=0,len3 = 0;
        cin>>s1;
        for(i=0;s1[i]!='\0';i++)
            len++;
        for (i = 0; i < len; i++)
        {
            char c = s1[i];
            a[(int)(c - 'a')]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]%2==0)
                e++;
            else
                if(a[i]%2==1)
                    o++;
        }
        if((len%2 == 0 && o == 0) && (len%2!=0 && o!=1))
        {
            cout<<"-1\n";
            t--;
            continue;
        }
       /* for(i=0;i<26 && len/2!=k;i++)
        {
            cout<<i<<"\n";
            while(a[i]>1)
            {
                /*if(len%2 == 0)
                {
                    s2[k] = char(i+'a');
                    s2[len-k-1] = char(i+'a');
                    a[i]=a[i]-2;
                    k++;
                }
                else
                        s2[k] = char(i+'a');
                        s2[len-k-1] = char(i+'a');
                        a[i]=a[i]-2;
                        k++;
            }
        }*/
        for(i=0;i<26;i++)
        {
            if(a[i]%2 ==1)
                d = char(i+'a');
            s2 = s2+ string(a[i]/2,i+'a');
        }
        s3 = s2;
        if(len%2 == 1)
        {
            s3 = s3 + d;
        }
        for(i=0;s3[i]!='\0';i++)
            len3++;
        for(i=len-1 ; i>=0;i--)
        {
            s3[len3] = s2[i];
            len3++;
        }
        //s3 = s3 + reverse(s2.begin(),s2.end());
        for(i=0;i<len;i++)
            cout<<s3[i];
    }
    return 0;
}
