#include<stdio.h>
#include<math.h>
int decemaltobinary(int num)
{
    
    int a[32],i,j;
    for(i=0;num>0;i++)
    {
        a[i]=num%2;
        num=num/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf(" %d",a[j]);
    }

}
int revers(int n)
{
    int rev=0, sum;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        rev=rev*10+rem;

    }
    
 
return rev;


}
int binarytodecemal(int n)
{
    int dec=0,i=0;
    while(n!=0)
    {
        
        dec +=(n%10) * pow(2,1);
        i++;
        dec/=10;
    }
    return dec;
}

int main()
{
   
    /*int n=1353,num;

    int sum;
   
  //decemaltobinary(num);
 num= revers(n);
  sum=n+num;
  

 printf("rev=%d",num);
   printf("\nsum=%d",sum);*/


   int n=111,num;
   printf("hii");
  num= binarytodecemal(n);
  printf("%d",num);


   return 0;

}