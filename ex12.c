#include <stdio.h>
#include <locale.h>

float media1, media2, somaMedias, mediaMedia;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("============= MÉDIAS DO BALACOBACO =============\n");
	media1 = (7 + 8 + 9) / 3.0;
	media2 = (4 + 5 + 6) / 3.0;
	somaMedias = media1 + media2;
	mediaMedia = (media1 + media2) / 2.0;
	printf("A média aritmética dos números 7, 8 e 9 é: %.1f\n", media1);
	printf("A média aritmética dos números 4, 5 e 6 é: %.1f\n", media2);
	printf("A soma dessas médias aritméticas é: %.1f\n", somaMedias);
	printf("A média dessas médias aritméticas é: %.1f\n", mediaMedia);
	printf("================================================\n");
	return 0;
}
