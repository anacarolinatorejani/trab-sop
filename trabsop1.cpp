#include <stdio.h>
main()
{
	float tempc;
	printf("Digite a temperatura: ");
	scanf("%f", &tempc);
	float tempf = (tempc * 9/5) + 32;
	printf("A temperatura de Celsius para Fahrenheit: %.2f", tempf);
	float tempk = tempc + 273;
	printf("\nA temperatura de Celsius para Kelvin: %.2f", tempk);
}
