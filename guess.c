#include <stdio.h>

int main(void)
{
	int guess = 1;
	char response;
	printf("Choose an integer in the range from 1 to 100. I'll try to guess ");
	printf("it. \nPress the y key, if my guess is correct and ");
	printf("\nthe n key otherwise.\n");
	printf("Is your number %d?\n", guess);
	
	while ((response = getchar()) != 'y')		/* получить ответ */
	{
		if (response == 'n')
			printf("Okay, then it's %d?\n", ++guess);
		else
			printf("Only y or n options are accepted.\n");
		while (getchar() != '\n')				/* пропустить оставшуюся часть входной строки */
			continue;
	}
	printf("I knew that I would succeed!\n");
	return 0;
}
