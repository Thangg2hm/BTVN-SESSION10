#include<stdio.h>
int main(){
	int arr[6]={12,67,44,8,11,5};
	int t=sizeof(arr)/sizeof(int);
	printf("mang so nguyen khi chua duoc sap xep:");
	for(int i=0;i<t;i++){
		printf("%d \t",arr[i]);}
		
	for(int h=0;h<t;h++){
	    for(int m=0;m<t-1;m++){
		if(arr[m+1]<arr[m]){
		    int y=arr[m];
			arr[m]=arr[m+1];
			arr[m+1]=y;
			}}}
		
			printf("\n mang so nguyen sau khi da duoc sap xep la:");
			for(int j=0;j<t;j++){
			    printf("%d \t",arr[j]);
				}
				return 0;
				}	
