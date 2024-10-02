#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int stars = n-2;
   int spaces=0;
   for(int i=1;i<=5;i++)
   {
      for(int j=stars;j>=1;j--)
      {
        cout<<"*\t";
      }
      for(int j=spaces;j>=1;j--)
      {
        cout<<"\t";
      }
      cout<<"\t";
      for(int j=spaces;j>=1;j--)
      {
        cout<<"\t";
      }
      for(int j=stars;j>=1;j--)
      {
        cout<<"*\t";
      }
      cout<<endl;
      if(i<=n/2)
      {
      stars--;
      spaces++;
      }
      else
      {
        stars++;
        spaces--;
      }
   }
return 0;
}