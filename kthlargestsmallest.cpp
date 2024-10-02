//Using Sorting 
//Time complexity -> O(nlogn)       Space complexity -> O(1)
#include <bits/stdc++.h>
using namespace std;
void kth_largest(vector<int>&arr , int k)
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        cout<<"Kth largest element is "<<arr[n-k]<<endl<<"Kth smallest element is "<<arr[k-1];
    }
int main() 
{
    int arr[]={3,2,1,6,5,7};
    vector<int> vec(begin(arr),end(arr));
    kth_largest(vec,2);
    return 0;
}

/*// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cout<<"\nEnter value of k";
    cin>>k;
    cout<<"\nEnter value of n";
    cin>>n;
    int a[n];
    cout<<"Enter values in array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<k<<"th "<<"largest element in array is :"<<a[n-k];
    
}*/