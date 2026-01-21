#include<stdio.h>
int main(){
	int i,j,a[5][5]={0};
	for(i=0;i<5;i++){
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=1;i<5;i++){
		j=1;
		while(j<i){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			j++;
		}
	}
	for(i=0;i<5;i++){
		j=0;
		while(j<=i){
			printf("%5d",a[i][j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
