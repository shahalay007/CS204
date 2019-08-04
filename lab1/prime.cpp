#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long s;
    cin>>s;

    bool prime;
    if (s==1)
        {
        cout<<"Prime Number";
        return 0;
        }
    if (s==0)
        {
        cout<<"Prime Number";
        return 0;
        }

    prime=true;
    for(int i=2; i<=sqrt(s);i++)
    {
        if(s%i == 0)
        {
        prime=false;
        break;
        }
    }

    if (prime==true)
        cout<<"Prime Number";
    else
        cout<<"Prime Number";
    return 0;
}
