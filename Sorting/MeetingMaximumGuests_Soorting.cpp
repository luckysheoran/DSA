#include<bits/stdc++.h>
using namespace std;

int maxGuests(int arr[],int dep[],int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n and j<n){
        if(arr[i]<=dep[j]){
            curr++;i++;
        }else{
            curr--;j++;
        }
        res=max(res,curr);
    }
    return res;
}

int main(){
int n;
cin>>n;

int arr[n],dep[n];

for(int i=0;i<n;i++){
    cin>>arr[i]>>dep[i];
}

cout<<maxGuests(arr,dep,n);

    return 0;
}