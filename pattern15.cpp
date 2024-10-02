#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int stars=n, spaces=0;
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
      stars--;
      spaces+=2;
  }
return 0;
}