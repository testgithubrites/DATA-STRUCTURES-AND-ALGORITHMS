#include<iostream>
#include<unordered_set>
using namespace std;

int countdistinct(int a[], int n) {
    unordered_set<int> set;
    for (int i = 0; i < n; i++) {
        set.insert(a[i]);
    }
    return set.size();
}

int main() {
    int a[] = {2, 8, 2, 9, 2};
    int n = 5;
    int res = countdistinct(a, n);
    
    cout << "Number of distinct elements: " << res << endl;

    return 0;
}
