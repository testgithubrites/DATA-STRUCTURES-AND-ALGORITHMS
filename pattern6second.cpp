// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"\n Enter number of rows:";
  cin>>n;
   int spaces = 1;
   int stars = n/2+1;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=stars;j++)
       {
           cout<<"*";
       }
       for(int j=1;j<=spaces;j++)
       {
           cout<<" ";
       }
       for(int j=1;j<=stars;j++)
       {
           cout<<"*";
       }
      cout<<endl;
      if(i<=n/2)
      {
          stars--;
          spaces+=2;
      }
      else
      {
          stars++;
          spaces-=2;
      }
   }
     
 
    return 0;
}