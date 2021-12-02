#include<stdio.h>

int main()

{

int a[1000],i,j,k,c=0;

scanf("%d",&k);

for(i=0;i<=k-1;i++)

{

 scanf("%d",&a[i]);

 

}

for(i=0;i<=k-1;i++)

{

 c=0;

 for(j=1;j<=a[i]/2;j++)

{

 

 if(a[i]%j==0)

 {

   

  c=c+j;

 }

}

printf("%d\n",c);

}

return 0;

}
