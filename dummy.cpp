#include<iostream>
using namespace std;
class Fraction
{
   int a,b;
    public:
     Fraction(int a,int b)
     {
       this->a=a;
       this->b=b;
       cout<< a << "/" << b <<endl;
     }   
     void add(Fraction f2)
     {
        
     }
     
};
int main()
{
  Fraction f1(1,2);
  return 0;
}