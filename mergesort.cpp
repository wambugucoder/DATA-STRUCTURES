#include <iostream>
#include <array>

using namespace std;



void merge(int arr[],int start,int mid,int last){

   int left = mid-start+1;
   int right =last - mid ;
   int leftArray[left];
   int rightArray[right];
   int i;
   int j;
   int k;
   //copy contents
   for (i=0;i<left;i++)leftArray[i]=arr[start+i];
   for (j=0;j<right;j++)rightArray[j]=arr[mid+1+j];

    i =0  ;
    j =0 ;
 k = start ;
   while(i<left && j<right){
       if(leftArray[i]<= rightArray[j]){
            arr[k] = leftArray[i];
            i++;

       }
       else{
           arr[k] = rightArray[j];
            j++;
       }
       k++;

   }
   while(i<left){
       arr[k] = leftArray[i];
            i++;
            k++;
   }

     while(i<right){
       arr[k] = rightArray[j];
            j++;
            k++;
   }




}
 void display(int arr[]) {
   for(int i = 0; i <6; i++)
      cout << arr[i] << " ";
   cout << endl;
}

 void divide(int arr[],int start,int last){

     if(start  < last){
     int mid= (start + last)/2;
      divide(arr,start,mid);
      divide(arr,mid+1,last);
     merge(arr,start,mid,last);

     }



 }
 int main(){
       int size;
    cout<<"Enter the size of the Array that is to be sorted: "; cin>>size;
    int Hello[size],i;
    cout<<"Enter the elements of the array one by one:n";
    for(i=0; i<size; i++) cin>>Hello[i];
    divide(Hello, 0, size - 1);
    cout<<"The Sorted List isn";
    for(i=0; i<size; i++)
    {
        cout<<Hello[i]<<" ";
    }

 }
