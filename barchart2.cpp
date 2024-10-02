/* You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print a bar chart representing value of arr a.
       Sample Input                                Sample Output
			         5                                         * 		
			         3                                         *		
		          1                                        	*	*	
		          0                                         *	*	
            7                                    *			 *	*	
            5                                    *			 *	*	
                                                 *	*		*	*	           */
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
  int max=a[0];
   for(int i=1;i<n;i++)
   {
     if(a[i]>max){
        max=a[i];}
   }
   for(int floor=max;floor>=1;floor--)
   {
      for(int i=0;i<n;i++)
      {
      if(a[i]>=floor)
      {
         cout<<"*\t";
      }
      else{
        cout<<"\t";
      }
   }
   cout<<endl;
   }
return 0;
}