#include <stdio.h>
#define EOF 2
/* copy input to output; 2nd version */
main()
{
	int c;
	double nc;

	printf("%1d",EOF);

	printf("%d",getchar() != EOF);

	printf("contador de ncaracteres \n");
	
	for (nc = 0; ((c = getchar()) != EOF); ++nc)
		;
	printf("%.0f\n", nc);
}