/* You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.*/
#include<iostream>
using namespace std;
void spanOfArray(int a[],int n)
{
 int max,min;
   for(int i=0;i<n;i++)
  {
       max=a[0];
      if(max<a[i])
        max=a[i];
       min=a[0];
       if(min>a[i])
          min=a[i];
  } 
        int span=max-min;
        cout<<span;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
    spanOfArray(a,n);
  return 0;
    
}