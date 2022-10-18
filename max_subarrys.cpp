#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[1000];
    int maxSum = 0;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Generatting subarays

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum =0;

            //Element of subarays
            for (int k=i;k<=j;k++){
                currentSum +=a[k];
            }
        }
        if(maxSum<currentSum){
            maxSum=currentSum;
        }
    }
    cout<<"Maximum sum is "<<maxSum<<endl;
}
