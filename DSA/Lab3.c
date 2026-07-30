#include <stdio.h>

void sum(int a, int b)
{
	printf("Sum = %d \n", a + b);
}

void compare(int a, int b){
	if(a > b){
		printf("%d is greater\n", a);
		}
	else if(b > a){
		printf("%d is greater\n", b);
		}
	else{
		printf("Both are equal\n");
		}
	}

void posneg(int a){
	if(a > 0){
		printf("%d is positive\n", a);	
		}
	}
	
int natsum(int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum = sum + i;
		}
	return sum;
	}

void digits(int n){
	int dig = 1;
	while(n > 10){
		n = n/10;
		dig += 1;
	}
	printf("num of digits = %d\n", dig); 
	}

int factorial(int f){
	if(f == 1){
		return 1;
		}
	else{
		return f*factorial(f-1);
		}
	}

int grtarr(int a1[], int n){
	int grt = a1[0];
	for (int i = 0; i < n; i++){
		if(grt < a1[i]){
			grt = a1[i];
		}
	}
	return grt;
}

int grar2(int a2[], int n){
	int grt = a2[0];
	for (int i = 0; i < n; i++){
		if(grt < a2[i]){
			grt = a2[i];
		}
	}
	int gt2 = a2[0];
	for (int i = 0; i < n; i++){
		if(gt2 < a2[i] && a2[i] < grt){
			gt2 = a2[i];
		}
		else if(gt2 == grt){
		gt2 = a2[1];
		}
	}
	return gt2;
}

int main(void){;
    int  ar1[7] = {2, 14, 22, 19, 9, 2, 12};
    printf("%d\n", grar2(ar1, 7));
}