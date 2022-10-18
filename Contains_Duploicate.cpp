#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(int a[],int n){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if(a[i] == a[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int k;
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(containsDuplicate(a, n))
        cout << "True";
    else
        cout << "False";
}
