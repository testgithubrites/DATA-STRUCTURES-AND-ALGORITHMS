#include<iostream>
using namespace std;
void print(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<",";
  }
}
void reverse(int a[],int i,int j)
{
  while(i<j)
  {
    swap(a[i],a[j]);
    i++;
    j--;
  }
}
void rotate(int a[] , int k,int n)
{
  k = k%n;
  if(k<0)
  {
    k=k+n;
  }
  reverse(a,0,n-k-1);
  reverse(a,n-k,n-1);
  reverse(a,0,n-1);
  print(a,n);
}
int main()
{
  int k;
  cout<<"\nEnter value of k (for rotation):";
  cin>>k;
  int n=5 , a[] = {1,2,3,4,5};
  rotate(a,k,n);
  return 0;
}