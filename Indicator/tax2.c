#include<stdio.h>  

  
int main()  
{  
    int n;
    
    printf("Enter size of arry : ");
    scanf("%d",&n);
    
    int arr[n]; 
    int *a[n];
    int i;  
         
    for(i=0; i<n; i++)  
    {  
	    printf("element : %d : ",i);
        scanf("%d", &arr[i]);  
        
    }  
  for(i=0; i<n; i++){
  
   a[i] = &arr[i];
}
   for(i=0; i<n; i++){
   
   printf("%d\n",*a[i]);
}
	return 0;	
}


