#include <stdio.h>
main()
{
	float tempc;
	printf("Digite a temperatura: ");
	scanf("%f", &tempc);
	float tempf = (tempc * 9/5) + 32;
	printf("A temperatura de Celsius para Fahrenheit: %.2f", tempf);
}
