#include <iostream>

using namespace std;
void add(char a[],char b[])
{
    int n=0,m=0;
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        m++;
    }
    if(n>m)
    {
        char d[n];
        int r[n],p[n];
        for(i=0;i<m;i++)
        {
            d[n-m+i]=b[i];
        }
        for(i=0;i<n-m;i++)
        {
            d[i]='0';
        }
        r[n-1]=0;
        for(i=n-1;i>=1;i--)
        {
            p[i]=(a[i]-'0' + d[i]-'0' + r[i])%10;
            r[i-1]=(a[i]-'0' + d[i]-'0' + r[i])/10;
        }
        p[0]=(a[0]-'0' + d[0]-'0' + r[0]);
        for(i=0;i<n;i++)
        {
            cout<<p[i];
        }
    }
        else
    {
        char d[m];
        int r[m],p[m];
        for(i=0;i<n;i++)
        {
            d[m-n+i]=a[i];
        }
        for(i=0;i<m-n;i++)
        {
            d[i]='0';
        }
        r[m-1]=0;
        for(i=m-1;i>=1;i--)
        {
            p[i]=(b[i]-'0' + d[i]-'0' + r[i])%10;
            r[i-1]=(b[i]-'0' + d[i]-'0' + r[i])/10;
        }
        p[0]=(b[0]-'0' + d[0]-'0' + r[0]);
        for(i=0;i<m;i++)
        {
            cout<<p[i];
        }

    }
}
int main()
{
        char p[1000],s[1000];
        cin>>p>>s;
        add(p,s);
}
