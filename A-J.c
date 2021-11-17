#include <stdio.h>

int main(){
	int j;
	char b;
	
	printf("Enter a letter between A to J ");
	scanf("%c", &b);
	
	if(b <= 'J' || b<= 'j'){
	
	for (j=6; j>=1; --j)
		if (j<=6){
		++b;
		printf("%c \n", b);}
		
		else
		{break;}
	}
	else{printf("Your value is invalid \n");}
	return 0;
	}
