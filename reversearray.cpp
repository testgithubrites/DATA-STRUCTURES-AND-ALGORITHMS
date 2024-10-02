//Time complexity - O(n)
#include<iostream>
using namespace std;
void print(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<",";
  }
}
void reverse(int a[],int n)
{
  int i=0,j=n-1;
  while(i<j)
  {
    swap(a[i],a[j]);
    i++;
    j--;
  }
  print(a,n);
}
int main()
{
  int a[]={1,2,3,4,5};
  reverse(a,5);
return 0;
}