#include <stdio.h>

#define HOLA

void Char_input(void){
	char c;
	c = getchar();
	
	putchar(c);
	printf("\nSimon: %c\n",c);
	
	
}


/* print Conversion table*/

main()
{

	
	#ifdef HOLA
	float far = 0, cel;
	while (far <= 300) {
	
		cel = (5.0/9.0)*(far-32.0);
		printf("que pedo %% %3.0f\t%6.1f\n",far,cel);
		far+=20;
	}
	printf("Longway\n");
	#else
	int far;
	for(far=0;far<=300; far+=20)
		printf("%3d %6.1f\n",far, (5.0/9.0)*(far-32));
	printf("Shortway\n");
	#endif
	
	Char_input();

}
