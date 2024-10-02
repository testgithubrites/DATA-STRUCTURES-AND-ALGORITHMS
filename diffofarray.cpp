/*1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to find the difference of two numbers represented by two arrays and print the arrays. a2 - a1

Assumption - number represented by a2 is greater.*/
#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
   cin>>n1;
   int *a1 = new int[n1];
   for(int i=0;i<n1;i++)
   {
       cin>>a1[i];
   }
cin>>n2;
   int *a2 = new int[n2];
   for(int i=0;i<n2;i++)
   {
       cin>>a2[i];
   }
   int *ans = new int[n2];
   int i = n1-1;
   int j = n2-1;
   int k=n2-1;
   int borrow=0;

   while(k>=0)
   {
       int sub = (a2[j] -borrow);
       if(i>=0)
      {
         sub -= a1[i];
      }
         if(sub<0)
         {
           sub+=10;
           borrow = 1;
         }
         else
         {
           borrow = 0;
         }
         ans[k]=sub;
         i--;
         j--;
         k--;
   }

   i = 0;
   while(ans[i]==0)
   {
     i++;
   }
  for(int i=0;i<n2;i++)
  {
    cout<<ans[i]<<endl;
  }
return 0;
}