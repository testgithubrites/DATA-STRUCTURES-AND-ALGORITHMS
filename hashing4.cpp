#include<iostream>
#include<unordered_set>
using namespace std;
int unions(int a[] , int b[] ,int n1,int n2)
{
   unordered_set<int>set;
   for(int i=0;i<n1;i++)
   {
     set.insert(a[i]);
   }
   for(int i=0;i<n1;i++)
   {
     set.insert(b[i]);
   }
   return set.size();
}
int main(){
int a[] = {1,6,3,1,3};
int b[]= {2,5,2,10};
int n1=5,n2=3;
int res = unions(a,b,n1,n2);
cout<<res;
return 0;
}