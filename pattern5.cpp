#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int spaces = n/2;
   int stars = 1;
   for(int i=1;i<=n;i++)
   {
      for(int j =1;j<=spaces;j++)
      {
        cout<<" ";
      }
      for(int j=1;j<=stars;j++)
      {
        cout<<"*";
      }
      for(int j =1;j<=spaces;j++)
      {
        cout<<" ";
      }
      if(i<=n/2)
      {
        stars+=2;
         spaces--;
      }
      else
      {
         stars-=2;
         spaces++;
      }
      cout<<endl;
   }
return 0;
}