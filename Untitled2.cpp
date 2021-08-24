#include <stdio.h>
int main() {
	char arr[100];
	int i,j,k,o;
	printf("enter a string \n");
	fgets(arr,100,stdin);
	printf("choose your option \n");
	printf("1:encryption\n");
	printf("2:decryption\n");
	printf("3:exit\n");
	scanf("%d",&o);
	switch(o){
	case 1:
		for (i=0;(i<100 && arr[i]!='\0') ;i++){
			if(arr[i]==' ') {
				continue;
			}
			arr[i]=arr[i]+3;
		}
		printf("%s\n",arr);
		break;
	case 2:
		for(j=0;(j<100 && arr [j]!='\0');j++){
		
		if (arr[j]==' ') {
			continue;
		}
		arr[j]=arr[j]-3;
	}
		printf("%s\n",arr);
		break;
	default:
		printf("error\n");
	
			
}
}
