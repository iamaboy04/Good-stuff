#include <stdio.h>
int main(){
	int csc_201, csc_205,mth_201,total,avg,percent;
	int i,amount;
	
	printf("Enter amount of students: ");
	scanf("%d", &amount);
	
	
	printf("Enter score for CSC 201: ");
	scanf("%d", &csc_201);
	printf("Enter score for CSC 205: ");
	scanf("%d", &csc_205);
	printf("Enter score for MTH 201: ");
	scanf("%d", &mth_201);
	
	total = csc_201 + csc_205 + mth_201;
	printf("The sum total for the 3 courses = %d \n", total);
	
	avg = total/3;
	printf("The average of the 3 courses = %d \n",avg);
	
	percent = (total/300)*100;
	printf("The percentage of the 3 courses = %d \n", percent);
	return 0;
	
	}
