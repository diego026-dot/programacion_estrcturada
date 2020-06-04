#include <stdio.h>
#include<stdlib.h>

int fi(int f){
	if( (f==0) || (f== -1))
	return 1;
	else return fi(f-1) + fi(f-2);
}

int main(){
	
	int i,tot;
	printf("0");
	printf("1\n");
	printf("1\n");
	for(tot=1;tot<=20;tot++){
		i=fi(tot);
		printf("%d %d\n",tot,i);
		
	}
	return 0;
}

