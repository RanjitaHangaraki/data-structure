#include <stdio.h>
#define CAP 100
int main() {
    
    int a[]={10,20,30,40};
   int n=4;
   int x=45;
   if(n<CAP){
       a[n]=x;
       n++;
   }
   else{
       printf("array is full");
       
   }
   for(int i=0;i<n;i++){
   printf("%d ",a[i]);}
   }
   
