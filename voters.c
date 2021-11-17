#include <stdio.h>

int main(){
	int able=18;
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age > able){
	printf("You can vote.\n");
	}
	else{
	printf("You can't vote.\n");
	}
return 0;
}
