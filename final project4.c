#include <stdio.h>
#include <stdlib.h>
void Menu (){
	printf("choose your option \n");
	printf("1:encryption\n");
	printf("2:decryption\n");
	printf("3:exit\n");
}
void encryption (char arrstr[]){
	int i;
		for (i=0;(i<100&&arrstr[i]!='\0');i++){
			
			if(arrstr[i]==' '){
				continue;
			}
			arrstr[i]=arrstr[i]+3;
		}
		printf("%s\n",arrstr);
	}
	
void decryption (char arrstr[]){
	int j;
		for(j=0;(j<100 && arrstr [j]!='\0');j++){
		
		if (arrstr[j]==' ') {
			continue;
		}
		arrstr[j]=arrstr[j]-3;
	}
		printf("%s\n",arrstr);
	}
	
void Exit (){
	printf("Exiting the program....\n");
   exit(0);	
}

   int main(){
   	char arrstr[100];
   	char ch;
	int i,j,k,o;
    
  do{
    printf("enter a string \n");
	scanf("%s",&arrstr);
		Menu ();
		scanf("%d",&o);
 	if (o==1){
		encryption(arrstr);}
	else if (o==2){
		decryption(arrstr);
	}
	else if (o==3){
		Exit(0);
	}
   	else if (o>=4){
		printf("Error, Number not included in Menu\n");
	}
	printf("\n want to continue(Y/N)");
	scanf("%s",&ch);
   }while(ch=='y'||ch=='Y');
   }
   
