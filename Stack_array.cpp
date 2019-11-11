#include<iostream>

using namespace std;

int count=0;

void popstack(int arr[])
{
    if(count==0)
        cout<<"Stack Underflow";
    else
        count--;
}

void pushstack(int arr[] ,int key)
{
    if(count<1000)
    {
        arr[count]=key;
        count++;
    }
    else
        cout<<"Stack Overflow";
}

int topele(int arr[])
{
    return arr[count];
}

int sizofstack(int arr[])
{
    return count;
}

bool isstackempty(int arr[])
{
    if(count==0)
        return true;
    else
        return false;
}

int main()
{
    int arr[1000];
    for(int i=0;i<50;i++)
    {
        pushstack(arr,i+5);
    }
    cout<<topele(arr)<<endl;
    /*pop(arr);
    cout<<top(arr)<<endl;
    push(arr,77);
    cout<<top(arr)<<endl;
    cout<<isempty(arr)<<endl;
    cout<<sizofstack(arr);*/
}
