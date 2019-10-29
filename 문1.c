
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int solution(int number[]){
	int flag[13] = {67, 84, 70, 123, 71, 48, 48, 68, 95, 74, 48, 66, 125};
	int count=0;
	for(int i = 0; i<13; i++){
		if(flag[i] == number[i])
			count ++;
		else
			count --;
		
	}
	if (count == 13 )
		return 1;
	else 
		return -1;
}




int main(int argc, char **argv)
{
	if ( argc != 14 )
	{
		puts("Usage: ./name x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 x13");
		exit(-1);
	}
	int inp[3];
	for ( int i = 0; i < 13; i++ )
		inp[i] = atoi(argv[i + 1]);
	
    if (1==solution(inp)){
		for (int i = 0; i<13; i++ )
			putchar(inp[i]);
			printf("\n");
		exit(1);
	}
		
	else {
		puts("noNono\n");
		exit(0);
    }
    
    
	return 0;
}

