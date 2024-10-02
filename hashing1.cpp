#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int>s;
s.insert(5);  //Insertion of elements
s.insert(10);
if(s.find(5)==s.end()) //Search any particular element
 cout<<"\nElement not found";
else
 cout<<"\nElement found";
//Traverse the set
for(auto it=s.begin();it!=s.end();it++)
{
   cout<<(*it)<<" ";
   s.clear();
   cout<<s.size();
}
return 0;
}