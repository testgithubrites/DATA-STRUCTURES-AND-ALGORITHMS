#include<iostream>
using namespace std;
int main(){
 int n;
  cin>>n;
  //Pattern S 
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=n;j++)
   {
     if(i==1 || i==n || i==n/2+1 || j==1 && i<=n/2+1 ||j==n && i>=n/2+1)
     {
       cout<<"*";
     }
     else
     {
      cout<<" ";
     }
 }
   cout<<endl;
  }
  //Pattern H 
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=n;j++)
   {
     if(j==1 || j==n || i==n/2+1)
     {
       cout<<"*";
     }
     else
     {
      cout<<" ";
     }
 }
   cout<<endl;
  }
  //Pattern R
  for(int i=1;i<=n;i++)
  {
   
  }
return 0;
}