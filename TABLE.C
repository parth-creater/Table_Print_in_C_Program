#include<stdio.h>
int main()
{
int n,i;
clrscr();
printf("Enter Number To Print Table: ");
scanf("%d",&n);
for(i=1; i<=10; i++){
	printf("%d * %d = %d\n",n,i,n*i);
}
getch();
return 0;
}

