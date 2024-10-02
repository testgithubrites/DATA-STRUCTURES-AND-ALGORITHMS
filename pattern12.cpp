#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int num1=0,num2=1;
   for(int i=2;i<=n;i++)
   {
     for(int j=2;j<=i;j++)
     {
       cout<<num1<<"\t";
       int num3 = num1+num2;
       num1=num2;
       num2=num3;
     }
     cout<<endl;
   }
return 0;
}