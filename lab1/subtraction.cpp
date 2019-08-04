#include <iostream>

using namespace std;
void sub(char s[],char p[])
{
    int n=0,m=0;
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;p[i]!='\0';i++)
    {
        m++;
    }
    if(n>=m)
    {
        char d[n];
        int c[n], a[n];
        for(i=0;i<m;i++)
        {
            d[n-m+i]=p[i];
        }
        for(i=0;i<n-m;i++)
        {
            d[i]='0';
        }
        c[n-1]=0;
        for(i=n-1;i>=0;i--)
        {
            if((s[i]-'0')-(d[i]-'0')+c[i]>=0)
            {
                a[i]=(s[i]-'0')-(d[i]-'0')+c[i];
                c[i-1]=0;
            }
            else
            {
                a[i]=10+(s[i]-'0')-(d[i]-'0')+c[i];
                c[i-1]=-1;
            }
        }
        {

            for(i=0;i<n;i++)
            {
                cout<<a[i];
            }
        }

    }
    else
    {
        char d[m];
        int c[m], a[m];
        for(i=0;i<n;i++)
        {
            d[m-n+i]=s[i];
        }
        for(i=0;i<m-n;i++)
        {
            d[i]='0';
        }
        c[m-1]=0;
        for(i=m-1;i>=0;i--)
        {
            if((p[i]-'0')-(d[i]-'0')+c[i]>=0)
            {
                a[i]=(p[i]-'0')-(d[i]-'0')+c[i];
                c[i-1]=0;
            }
            else
            {
                a[i]=10+(p[i]-'0')-(d[i]-'0')+c[i];
                c[i-1]=-1;
            }
        }

         cout<<"-";
            for(i=0;i<m;i++)
            {
                cout<<a[i];
            }

    }

    }


int main()
{
    char s[10000],p[10000];
    cin>>s>>p;
    sub(s,p);
}

