#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(mid==0 or arr[mid-1]!=arr[mid]){
                return mid;
            }else{
                high=mid-1;
            }
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

int lastOcc(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(mid==n-1 or arr[mid+1]!=arr[mid]){
                return mid;
            }else{
                low=mid+1;
            }
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

int countOcc(int arr[],int n,int x){
    int first=firstOcc(arr,n,x);
    if(first==-1){
        return 0;
    }
    int last=lastOcc(arr,n,x);
    return (last-first+1);
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int x;
cin>>x;

cout<<countOcc(arr,n,x);

    return 0;
}