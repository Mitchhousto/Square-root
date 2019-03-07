/* Hello World program */

#include<stdio.h>

int main()
{
	// Calculates sqrt(n)
    float n = 125; 
    float x = 1;	// Initial x value
    int count;
    
    while(count < 10)
	{
		x = 0.5*(x+n/x);
		printf("%d: %f\n", count, x);
		count = count + 1;
	}
}
