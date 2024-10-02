#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"\nEnter value of n";
 cin>>n;
 int a[n];
 cout<<"\nEnter array elements";
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
 }
 int data;
 cout<<"\nEnter data whose ceil and floor value is to be calculated";
 cin>>data;
 int l=0,u=n-1,ceil=0,floor=0;
 while(l<=u)
 {
   int mid = (l+u)/2;
   if(data>a[mid])
   {
     l=mid+1;
     floor=a[mid];
   }
   else if(data<a[mid])
   {
     u=mid-1;
     ceil=a[mid];
   }
   else
   {
     floor=a[mid];
     ceil=a[mid];
     break;
   }
 }
 cout<<floor<<endl;
 cout<<ceil<<endl;
return 0;
}