#include <stdio.h>

int main() {
    
    int a[]={10,20,30,40,50,60};
    int n = sizeof(a)/sizeof(a[0]);
   int index=0;
   if(index>=0&&index<n)
   printf("%d",a[index]);
   
    }
