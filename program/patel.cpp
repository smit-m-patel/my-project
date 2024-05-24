#include<iostream>
using namespace std;
int firstoucc(int arr[],int size,int key){
   int sindex=0;
   int ans=-1;
   int eindex=size-1;
int mid=sindex+(eindex-sindex)/2;
   while(sindex<=eindex) { 
if(arr[mid]==key){  
    ans=mid;
    eindex=mid-1;
}
else if(key>arr[mid]){
  sindex=mid+1;
}
else if(arr[mid]>key){
    eindex=mid-1;
}
mid=sindex+(eindex-sindex)/2;
}
return ans;
}

int lastoucc(int arr[],int size,int key){
   int sindex=0;
   int ans=-1;
   int eindex=size-1;
int mid=sindex+(eindex-sindex)/2;
   while(sindex<=eindex) { 
if(arr[mid]==key){
    ans=mid;
    sindex=mid+1;
}
else if(key>arr[mid]){
  sindex=mid+1;
}
else if(arr[mid]>key){
    eindex=mid-1;
}
mid=sindex+(eindex-sindex)/2;
}
return ans;
}






int main(){
    int arr[5]={1,2,2,3,4};
    int first=firstoucc(arr,5,2);
    int last=lastoucc(arr,5,2);
     cout << "first oucrense of 2 is:"<<first<<endl;
      cout << "last oucrense of 2 is:"<<last<<endl;
      cout<<"total occurence of 2 is"<<(last-first)+1;
}