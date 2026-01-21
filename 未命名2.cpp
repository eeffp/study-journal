#include<stdio.h>
int main(){
int array[5][5]={0},i,j;
for(i=0;i<5;i++)
{array[i][0]=1;
array[i][i]=1;}
for(i=1;i<5;i++)
{j=1;
while(j<=i)
{ 
array[i][j]=array[i-1][j]+array[i-1][j-1];
printf("%3d",array[i][j]);
j++;}
printf("\n");
	}
	return 0;}
