#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s;
	printf("input the second:");
	scanf("%d",&s);
	printf("The time for %d is %d:%d:%d",s,s/3600,(s/60)%60,s%60);
	return 0;
	
}
	
