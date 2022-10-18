#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[], int start, int end){
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";

    }
}
int main(){
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Original Array"<<endl;
    printArray(a, n);
    cout<<endl;
    reverseArray(a, 0, n-1);
    cout<<"Reverse Array"<<endl;
    printArray(a, n);
    return 0;

}
