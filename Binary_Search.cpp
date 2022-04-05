#include<iostream>
using namespace std;
 int main(){
     int item;
     int p=-1;
     int a[] = {90,23,56,88,11};
     cout<<"Search Item : ";
     cin>>item;
     for(int i=0;i<5-1;i++)
    {
        int m = i;
        for(int j=i+1;j<5;j++)
        {
            if(a[m]>a[j])
            {
               m = j;
               
            }
        }
        swap(a[i],a[m]);
    }
     int fi=0,li=5-1;
     while (fi<=li)
     {
     
     int mi=(fi+li)/2;
     if(item<a[mi]){
         li=mi-1;
     }
     else if(item>a[mi]){
         fi=mi+1;

     }
     else{
         p=mi;
         break;
     }
     }

   if(p==-1){
       cout<<"Item not found in the array.";
   }
   else{
   cout<<"Item found at "<<p<<endl;}
   return 0;
 }