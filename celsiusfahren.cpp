#include<stdio.h>
int main(){
	float degree,cels,fahr;
	char type;
	printf("degree and its type:");
	scanf("%f %c", &degree, &type);
	
	
	if (type=='C' || type=='c')
	{
		fahr=(degree*9/5)+32;
		printf("%f cels is %f fahrenheit", degree, fahr);
	}
	else if (type=='F' || type == 'f')
	{
		cels=(degree-32)*5/9;
		printf("%f fahrenheit is %f celsius", degree, cels);
	}
	return 0;	
}


