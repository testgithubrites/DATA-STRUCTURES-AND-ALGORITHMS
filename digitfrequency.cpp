/* You are given a number n.
2. You are given a digit d.
3. You are required to calculate the frequency of digit d in number n.
input   994543234
 4
 output
 3*/
 #include<iostream>
using namespace std;
int fun(int n, int d)
{
    int count = 0;
    while(n!=0)
    {
         int num = n%10;
         if(num == d){
          count++;}
          n=n/10;
    }
    return count;
}
int main()
{
    int n,d;
    cout<<"\nEnter number and digit to be counted"<<endl;
    cin>>n>>d;
    int numcount = fun(n,d);
    cout<<numcount;
    return 0;
}