#include<bits/stdc++.h>
using namespace std;
string mult(string s1,int n)
{
 string s;
reverse(s1.begin(),s1.end());
int r;
r=0;
int m=s1.length();
for(int i=0;i<m;i++)
{
	int mul=(s1[i]-'0')*n + r;
	s.push_back(mul%10+'0');
	r=mul/10;	
}
if(r!=0){
s.push_back(r+'0');
}
reverse(s.begin(),s.end());
return s;
}

string add(string s1,string s2)
{
string s;
if(s1.length()<s2.length()){swap(s1,s2);}
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
int n1=s1.length();
int n2=s2.length();
int r=0;
int sum;
for(int i=0;i<n2;i++)
{
	sum=(s1[i]-'0')+(s2[i]-'0')+r;
	r=sum/10;
	s.push_back(sum%10+'0');
}
for(int j=n2;j<n1;j++)
{
	sum=(s1[j]-'0')+r;
	r=sum/10;
	s.push_back(sum%10+'0');

}
if(r!=0){s.push_back(r+'0');}
reverse(s.begin(),s.end());
return s;


}


  
int main()
{
string s1,s2,s3;
cin>>s1>>s2;
s3='0';
int n1=s1.length();
int n2=s2.length();
reverse(s2.begin(),s2.end());
for(int i=0;i<n2;i++)
{
string s=mult(s1,(s2[i]-'0'));
for(int j=0;j<i;j++)
{
s.push_back('0');
}

s3=add(s3,s);
}
cout<<s3;
return 0;
}
