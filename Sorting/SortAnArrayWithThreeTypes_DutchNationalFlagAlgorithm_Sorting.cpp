//Sort an array of 0s 1s and 2s
//Three Way partitioning (All the occ. of pivot should come together)
//Partition around a range 

#include<bits/stdc++.h>
using namespace std;

void seg(int arr[],int n){
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

seg(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}