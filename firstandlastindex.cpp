#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"\nEnter number of elements in array:";
 cin>>n;
 int a[n];
 cout<<"\nEnter array elements";
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
 }
 int lb=0,ub=n-1,fi=-1;
 int data;
 cout<<"\nEnter data";
 cin>>data;

  while(lb<=ub)
  {
    int mid=(lb+ub)/2;
    if(data<a[mid])
     ub=mid-1;
    else if(data>a[mid])
      lb=mid+1;
     else{
      fi=mid;
      ub=mid-1;}
  }
  cout<<"\nFirst Index:"<<fi;
  int li=-1;
  lb=0;
  ub=n-1;
  while(lb<=ub)
  {
    int mid=(lb+ub)/2;
    if(data<a[mid])
     ub=mid-1;
    else if(data>a[mid])
      lb=mid+1;
     else{
      li=mid;
      lb=mid+1;}
  }
  cout<<"\nLast Index:"<<li;
return 0;
}