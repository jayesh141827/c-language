#include<stdio.h>
#include<string.h>

void cube(){

 int n;
 printf("enter n :");
 scanf("%d",&n);
 
 if(n%3==0 && n%5==0){
 
 printf("divisibile by both");

}
 else{
 printf("not divisible by both");
 
   }
 
}
int main(){
    cube();
 return 0;
}









