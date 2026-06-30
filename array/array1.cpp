#include<iostream>
using namespace std;

// Printing Array
int printingArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" At "<< i << "th index " <<endl;
    }
    return 0;
}

// Linear Searching Algo on Array
int linearSearch(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<key<<" founded at "<<i<<"th index"<<endl;
        }
        else{
            cout<<"Key is not existing in Array";
        }
    }
    return 0;
}

// Reverse an Array with extra space
int reverseArray(int *arr,int n){
    int arrcp[n];
    int j=n-1;
    for(int i=0;i<n;i++){
        arrcp[j]=arr[i];
        j--;
    }
    for(int i=0;i<n;i++){
        arr[i]=arrcp[i];
        cout<<arr[i]<<" At "<< i << "th index " <<endl;
    }
    return 0;
}


//Reverse an Array with no extra space
int reverseArray1(int *arr,int n){
    int end=n-1;
    for(int st=0;st<end;st++){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" At "<< i << "th index " <<endl;
    }
    return 0;
}

//Binary searching algo on Array it will perform only on sorted array
int binarySearch(int *arr,int n, int key){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=(st+end) / 2 ;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            st=mid+1;   
        }
    }
    return 0;
}

//Printing Subarrays of an Array
int printingSubarrays(int *arr, int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr) / sizeof(int);
    printingSubarrays(arr,n);
    return 0;
}