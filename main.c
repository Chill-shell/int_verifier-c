//no EOF handle here!!

#include <ctype.h>
#include <stdio.h>


int int_verifier(void){

	int number=0;
	int response=0;
	int c=0;
	printf("pick an integer!!\n");
	while(response!=1){
		response=scanf("%d",&number);
		if (response==0){
			printf("Try again!\n");
			while((c=getchar())!='\n' );
		}
		else if (response==1){
			while((c=getchar())!='\n'){
				if(!isspace(c)){
					while((c=getchar())!='\n' );
					printf("Try again!\n");
					response=0;
					break;
				}
			}
		}
	}
	return number;
}



int main(void){
	
	int number=int_verifier();
	printf("You picked:%d\n",number);

	return 0;
	
	
}

