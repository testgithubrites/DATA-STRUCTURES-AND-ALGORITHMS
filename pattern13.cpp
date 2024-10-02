#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int stars=1;
   int spaces=n-1;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=spaces;j++)
    {
      cout<<" ";
    }
     for(int j=1;j<=stars;j++)
     {
      if(j==1|| j==stars || i==n/2+1)
      {
       cout<<"*";
      }
      else
      {
        cout<<" ";
      }
     }
     for(int j=1;j<=spaces;j++)
    {
      cout<<" ";
    }
    cout<<endl;
    stars+=2;
    spaces--;
   }
   cout<<endl;
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==n/2+1)
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
return 0;
}