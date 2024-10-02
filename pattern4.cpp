#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   //Initialise for first row
   int spaces = 0;
   int stars = n;
   for(int i=1;i<=n;i++)
   {
   for(int j=spaces;j>=1;j--)
   {
     cout<<" ";
   }
   for(int j = stars;j>=1;j--)
   {
     cout<<"*";
   }
   spaces++;
   stars--;
   cout<<endl;
   }
return 0;
}