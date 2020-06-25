#include "printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, j;
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("I:%d\tJ:%d\n", i, j);

	if (argc == 3)
	{
		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%D----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");


		printf("---------------TEST *.*-------------\n\n");
		printf(" %d\n", printf("%*.*d", i, j, 0));
		printf(" %d\n", printf("%*.*d", i, j, 1));
		printf(" %d\n", printf("%*.*d", i, j, 10));
		printf(" %d\n", printf("%*.*d", i, j, 101));
		printf(" %d\n", printf("%*.*d", i, j, 1001));
		printf(" %d\n", printf("%*.*d", i, j, 10001));
		printf(" %d\n", printf("%*.*d", i, j, 100001));
		printf(" %d\n", printf("%*.*d", i, j, 1000001));
		printf(" %d\n", printf("%*.*d", i, j, 10000001));
		printf(" %d\n", printf("%*.*d", i, j, 100000001));
		printf(" %d\n", printf("%*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%-*.*d", i, j, 0));
		printf(" %d\n", printf("%-*.*d", i, j, 1));
		printf(" %d\n", printf("%-*.*d", i, j, 10));
		printf(" %d\n", printf("%-*.*d", i, j, 101));
		printf(" %d\n", printf("%-*.*d", i, j, 1001));
		printf(" %d\n", printf("%-*.*d", i, j, 10001));
		printf(" %d\n", printf("%-*.*d", i, j, 100001));
		printf(" %d\n", printf("%-*.*d", i, j, 1000001));
		printf(" %d\n", printf("%-*.*d", i, j, 10000001));
		printf(" %d\n", printf("%-*.*d", i, j, 100000001));
		printf(" %d\n", printf("%-*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%0*.*d", i, j, 0));
		printf(" %d\n", printf("%0*.*d", i, j, 1));
		printf(" %d\n", printf("%0*.*d", i, j, 10));
		printf(" %d\n", printf("%0*.*d", i, j, 101));
		printf(" %d\n", printf("%0*.*d", i, j, 1001));
		printf(" %d\n", printf("%0*.*d", i, j, 10001));
		printf(" %d\n", printf("%0*.*d", i, j, 100001));
		printf(" %d\n", printf("%0*.*d", i, j, 1000001));
		printf(" %d\n", printf("%0*.*d", i, j, 10000001));
		printf(" %d\n", printf("%0*.*d", i, j, 100000001));
		printf(" %d\n", printf("%0*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%0-*.*d", i, j, 0));
		printf(" %d\n", printf("%0-*.*d", i, j, 1));
		printf(" %d\n", printf("%0-*.*d", i, j, 10));
		printf(" %d\n", printf("%0-*.*d", i, j, 101));
		printf(" %d\n", printf("%0-*.*d", i, j, 1001));
		printf(" %d\n", printf("%0-*.*d", i, j, 10001));
		printf(" %d\n", printf("%0-*.*d", i, j, 100001));
		printf(" %d\n", printf("%0-*.*d", i, j, 1000001));
		printf(" %d\n", printf("%0-*.*d", i, j, 10000001));
		printf(" %d\n", printf("%0-*.*d", i, j, 100000001));
		printf(" %d\n", printf("%0-*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%-0*.*d", i, j, 0));
		printf(" %d\n", printf("%-0*.*d", i, j, 1));
		printf(" %d\n", printf("%-0*.*d", i, j, 10));
		printf(" %d\n", printf("%-0*.*d", i, j, 101));
		printf(" %d\n", printf("%-0*.*d", i, j, 1001));
		printf(" %d\n", printf("%-0*.*d", i, j, 10001));
		printf(" %d\n", printf("%-0*.*d", i, j, 100001));
		printf(" %d\n", printf("%-0*.*d", i, j, 1000001));
		printf(" %d\n", printf("%-0*.*d", i, j, 10000001));
		printf(" %d\n", printf("%-0*.*d", i, j, 100000001));
		printf(" %d\n", printf("%-0*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%--------*.*d", i, j, 0));
		printf(" %d\n", printf("%--------*.*d", i, j, 1));
		printf(" %d\n", printf("%--------*.*d", i, j, 10));
		printf(" %d\n", printf("%--------*.*d", i, j, 101));
		printf(" %d\n", printf("%--------*.*d", i, j, 1001));
		printf(" %d\n", printf("%--------*.*d", i, j, 10001));
		printf(" %d\n", printf("%--------*.*d", i, j, 100001));
		printf(" %d\n", printf("%--------*.*d", i, j, 1000001));
		printf(" %d\n", printf("%--------*.*d", i, j, 10000001));
		printf(" %d\n", printf("%--------*.*d", i, j, 100000001));
		printf(" %d\n", printf("%--------*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%0000000*.*d", i, j, 0));
		printf(" %d\n", printf("%0000000*.*d", i, j, 1));
		printf(" %d\n", printf("%0000000*.*d", i, j, 10));
		printf(" %d\n", printf("%0000000*.*d", i, j, 101));
		printf(" %d\n", printf("%0000000*.*d", i, j, 1001));
		printf(" %d\n", printf("%0000000*.*d", i, j, 10001));
		printf(" %d\n", printf("%0000000*.*d", i, j, 100001));
		printf(" %d\n", printf("%0000000*.*d", i, j, 1000001));
		printf(" %d\n", printf("%0000000*.*d", i, j, 10000001));
		printf(" %d\n", printf("%0000000*.*d", i, j, 100000001));
		printf(" %d\n", printf("%0000000*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%0000000------*.*d", i, j, 0));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 1));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 10));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 101));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 1001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 10001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 100001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 1000001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 10000001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, 100000001));
		printf(" %d\n", printf("%0000000------*.*d", i, j, -1000000001));

		printf(" %d\n", printf("%------0000000*.*d", i, j, 0));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 1));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 10));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 101));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 1001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 10001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 100001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 1000001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 10000001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, 100000001));
		printf(" %d\n", printf("%------0000000*.*d", i, j, -1000000001));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*d", i, 0));
		printf(" %d\n", printf("%.*d", i, 1));
		printf(" %d\n", printf("%.*d", i, 10));
		printf(" %d\n", printf("%.*d", i, 101));
		printf(" %d\n", printf("%.*d", i, 1001));
		printf(" %d\n", printf("%.*d", i, 10001));
		printf(" %d\n", printf("%.*d", i, 100001));
		printf(" %d\n", printf("%.*d", i, 1000001));
		printf(" %d\n", printf("%.*d", i, 10000001));
		printf(" %d\n", printf("%.*d", i, 100000001));
		printf(" %d\n", printf("%.*d", i, -1000000001));

		printf(" %d\n", printf("%-.*d", i, 0));
		printf(" %d\n", printf("%-.*d", i, 1));
		printf(" %d\n", printf("%-.*d", i, 10));
		printf(" %d\n", printf("%-.*d", i, 101));
		printf(" %d\n", printf("%-.*d", i, 1001));
		printf(" %d\n", printf("%-.*d", i, 10001));
		printf(" %d\n", printf("%-.*d", i, 100001));
		printf(" %d\n", printf("%-.*d", i, 1000001));
		printf(" %d\n", printf("%-.*d", i, 10000001));
		printf(" %d\n", printf("%-.*d", i, 100000001));
		printf(" %d\n", printf("%-.*d", i, -1000000001));

		printf(" %d\n", printf("%0.*d", i, 0));
		printf(" %d\n", printf("%0.*d", i, 1));
		printf(" %d\n", printf("%0.*d", i, 10));
		printf(" %d\n", printf("%0.*d", i, 101));
		printf(" %d\n", printf("%0.*d", i, 1001));
		printf(" %d\n", printf("%0.*d", i, 10001));
		printf(" %d\n", printf("%0.*d", i, 100001));
		printf(" %d\n", printf("%0.*d", i, 1000001));
		printf(" %d\n", printf("%0.*d", i, 10000001));
		printf(" %d\n", printf("%0.*d", i, 100000001));
		printf(" %d\n", printf("%0.*d", i, -1000000001));

		printf(" %d\n", printf("%0-.*d", i, 0));
		printf(" %d\n", printf("%0-.*d", i, 1));
		printf(" %d\n", printf("%0-.*d", i, 10));
		printf(" %d\n", printf("%0-.*d", i, 101));
		printf(" %d\n", printf("%0-.*d", i, 1001));
		printf(" %d\n", printf("%0-.*d", i, 10001));
		printf(" %d\n", printf("%0-.*d", i, 100001));
		printf(" %d\n", printf("%0-.*d", i, 1000001));
		printf(" %d\n", printf("%0-.*d", i, 10000001));
		printf(" %d\n", printf("%0-.*d", i, 100000001));
		printf(" %d\n", printf("%0-.*d", i, -1000000001));

		printf(" %d\n", printf("%-0.*d", i, 0));
		printf(" %d\n", printf("%-0.*d", i, 1));
		printf(" %d\n", printf("%-0.*d", i, 10));
		printf(" %d\n", printf("%-0.*d", i, 101));
		printf(" %d\n", printf("%-0.*d", i, 1001));
		printf(" %d\n", printf("%-0.*d", i, 10001));
		printf(" %d\n", printf("%-0.*d", i, 100001));
		printf(" %d\n", printf("%-0.*d", i, 1000001));
		printf(" %d\n", printf("%-0.*d", i, 10000001));
		printf(" %d\n", printf("%-0.*d", i, 100000001));
		printf(" %d\n", printf("%-0.*d", i, -1000000001));

		printf(" %d\n", printf("%--------.*d", i, 0));
		printf(" %d\n", printf("%--------.*d", i, 1));
		printf(" %d\n", printf("%--------.*d", i, 10));
		printf(" %d\n", printf("%--------.*d", i, 101));
		printf(" %d\n", printf("%--------.*d", i, 1001));
		printf(" %d\n", printf("%--------.*d", i, 10001));
		printf(" %d\n", printf("%--------.*d", i, 100001));
		printf(" %d\n", printf("%--------.*d", i, 1000001));
		printf(" %d\n", printf("%--------.*d", i, 10000001));
		printf(" %d\n", printf("%--------.*d", i, 100000001));
		printf(" %d\n", printf("%--------.*d", i, -1000000001));

		printf(" %d\n", printf("%0000000.*d", i, 0));
		printf(" %d\n", printf("%0000000.*d", i, 1));
		printf(" %d\n", printf("%0000000.*d", i, 10));
		printf(" %d\n", printf("%0000000.*d", i, 101));
		printf(" %d\n", printf("%0000000.*d", i, 1001));
		printf(" %d\n", printf("%0000000.*d", i, 10001));
		printf(" %d\n", printf("%0000000.*d", i, 100001));
		printf(" %d\n", printf("%0000000.*d", i, 1000001));
		printf(" %d\n", printf("%0000000.*d", i, 10000001));
		printf(" %d\n", printf("%0000000.*d", i, 100000001));
		printf(" %d\n", printf("%0000000.*d", i, -1000000001));

		printf(" %d\n", printf("%0000000------.*d", i, 0));
		printf(" %d\n", printf("%0000000------.*d", i, 1));
		printf(" %d\n", printf("%0000000------.*d", i, 10));
		printf(" %d\n", printf("%0000000------.*d", i, 101));
		printf(" %d\n", printf("%0000000------.*d", i, 1001));
		printf(" %d\n", printf("%0000000------.*d", i, 10001));
		printf(" %d\n", printf("%0000000------.*d", i, 100001));
		printf(" %d\n", printf("%0000000------.*d", i, 1000001));
		printf(" %d\n", printf("%0000000------.*d", i, 10000001));
		printf(" %d\n", printf("%0000000------.*d", i, 100000001));
		printf(" %d\n", printf("%0000000------.*d", i, -1000000001));

		printf(" %d\n", printf("%------0000000.*d", i, 0));
		printf(" %d\n", printf("%------0000000.*d", i, 1));
		printf(" %d\n", printf("%------0000000.*d", i, 10));
		printf(" %d\n", printf("%------0000000.*d", i, 101));
		printf(" %d\n", printf("%------0000000.*d", i, 1001));
		printf(" %d\n", printf("%------0000000.*d", i, 10001));
		printf(" %d\n", printf("%------0000000.*d", i, 100001));
		printf(" %d\n", printf("%------0000000.*d", i, 1000001));
		printf(" %d\n", printf("%------0000000.*d", i, 10000001));
		printf(" %d\n", printf("%------0000000.*d", i, 100000001));
		printf(" %d\n", printf("%------0000000.*d", i, -1000000001));


		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.d", i, 0));
		printf(" %d\n", printf("%*.d", i, 1));
		printf(" %d\n", printf("%*.d", i, 10));
		printf(" %d\n", printf("%*.d", i, 101));
		printf(" %d\n", printf("%*.d", i, 1001));
		printf(" %d\n", printf("%*.d", i, 10001));
		printf(" %d\n", printf("%*.d", i, 100001));
		printf(" %d\n", printf("%*.d", i, 1000001));
		printf(" %d\n", printf("%*.d", i, 10000001));
		printf(" %d\n", printf("%*.d", i, 100000001));
		printf(" %d\n", printf("%*.d", i, -1000000001));

		printf(" %d\n", printf("%-*.d", i, 0));
		printf(" %d\n", printf("%-*.d", i, 1));
		printf(" %d\n", printf("%-*.d", i, 10));
		printf(" %d\n", printf("%-*.d", i, 101));
		printf(" %d\n", printf("%-*.d", i, 1001));
		printf(" %d\n", printf("%-*.d", i, 10001));
		printf(" %d\n", printf("%-*.d", i, 100001));
		printf(" %d\n", printf("%-*.d", i, 1000001));
		printf(" %d\n", printf("%-*.d", i, 10000001));
		printf(" %d\n", printf("%-*.d", i, 100000001));
		printf(" %d\n", printf("%-*.d", i, -1000000001));

		printf(" %d\n", printf("%0*.d", i, 0));
		printf(" %d\n", printf("%0*.d", i, 1));
		printf(" %d\n", printf("%0*.d", i, 10));
		printf(" %d\n", printf("%0*.d", i, 101));
		printf(" %d\n", printf("%0*.d", i, 1001));
		printf(" %d\n", printf("%0*.d", i, 10001));
		printf(" %d\n", printf("%0*.d", i, 100001));
		printf(" %d\n", printf("%0*.d", i, 1000001));
		printf(" %d\n", printf("%0*.d", i, 10000001));
		printf(" %d\n", printf("%0*.d", i, 100000001));
		printf(" %d\n", printf("%0*.d", i, -1000000001));

		printf(" %d\n", printf("%0-*.d", i, 0));
		printf(" %d\n", printf("%0-*.d", i, 1));
		printf(" %d\n", printf("%0-*.d", i, 10));
		printf(" %d\n", printf("%0-*.d", i, 101));
		printf(" %d\n", printf("%0-*.d", i, 1001));
		printf(" %d\n", printf("%0-*.d", i, 10001));
		printf(" %d\n", printf("%0-*.d", i, 100001));
		printf(" %d\n", printf("%0-*.d", i, 1000001));
		printf(" %d\n", printf("%0-*.d", i, 10000001));
		printf(" %d\n", printf("%0-*.d", i, 100000001));
		printf(" %d\n", printf("%0-*.d", i, -1000000001));

		printf(" %d\n", printf("%-0*.d", i, 0));
		printf(" %d\n", printf("%-0*.d", i, 1));
		printf(" %d\n", printf("%-0*.d", i, 10));
		printf(" %d\n", printf("%-0*.d", i, 101));
		printf(" %d\n", printf("%-0*.d", i, 1001));
		printf(" %d\n", printf("%-0*.d", i, 10001));
		printf(" %d\n", printf("%-0*.d", i, 100001));
		printf(" %d\n", printf("%-0*.d", i, 1000001));
		printf(" %d\n", printf("%-0*.d", i, 10000001));
		printf(" %d\n", printf("%-0*.d", i, 100000001));
		printf(" %d\n", printf("%-0*.d", i, -1000000001));

		printf(" %d\n", printf("%--------*.d", i, 0));
		printf(" %d\n", printf("%--------*.d", i, 1));
		printf(" %d\n", printf("%--------*.d", i, 10));
		printf(" %d\n", printf("%--------*.d", i, 101));
		printf(" %d\n", printf("%--------*.d", i, 1001));
		printf(" %d\n", printf("%--------*.d", i, 10001));
		printf(" %d\n", printf("%--------*.d", i, 100001));
		printf(" %d\n", printf("%--------*.d", i, 1000001));
		printf(" %d\n", printf("%--------*.d", i, 10000001));
		printf(" %d\n", printf("%--------*.d", i, 100000001));
		printf(" %d\n", printf("%--------*.d", i, -1000000001));

		printf(" %d\n", printf("%0000000*.d", i, 0));
		printf(" %d\n", printf("%0000000*.d", i, 1));
		printf(" %d\n", printf("%0000000*.d", i, 10));
		printf(" %d\n", printf("%0000000*.d", i, 101));
		printf(" %d\n", printf("%0000000*.d", i, 1001));
		printf(" %d\n", printf("%0000000*.d", i, 10001));
		printf(" %d\n", printf("%0000000*.d", i, 100001));
		printf(" %d\n", printf("%0000000*.d", i, 1000001));
		printf(" %d\n", printf("%0000000*.d", i, 10000001));
		printf(" %d\n", printf("%0000000*.d", i, 100000001));
		printf(" %d\n", printf("%0000000*.d", i, -1000000001));

		printf(" %d\n", printf("%0000000------*.d", i, 0));
		printf(" %d\n", printf("%0000000------*.d", i, 1));
		printf(" %d\n", printf("%0000000------*.d", i, 10));
		printf(" %d\n", printf("%0000000------*.d", i, 101));
		printf(" %d\n", printf("%0000000------*.d", i, 1001));
		printf(" %d\n", printf("%0000000------*.d", i, 10001));
		printf(" %d\n", printf("%0000000------*.d", i, 100001));
		printf(" %d\n", printf("%0000000------*.d", i, 1000001));
		printf(" %d\n", printf("%0000000------*.d", i, 10000001));
		printf(" %d\n", printf("%0000000------*.d", i, 100000001));
		printf(" %d\n", printf("%0000000------*.d", i, -1000000001));

		printf(" %d\n", printf("%------0000000*.d", i, 0));
		printf(" %d\n", printf("%------0000000*.d", i, 1));
		printf(" %d\n", printf("%------0000000*.d", i, 10));
		printf(" %d\n", printf("%------0000000*.d", i, 101));
		printf(" %d\n", printf("%------0000000*.d", i, 1001));
		printf(" %d\n", printf("%------0000000*.d", i, 10001));
		printf(" %d\n", printf("%------0000000*.d", i, 100001));
		printf(" %d\n", printf("%------0000000*.d", i, 1000001));
		printf(" %d\n", printf("%------0000000*.d", i, 10000001));
		printf(" %d\n", printf("%------0000000*.d", i, 100000001));
		printf(" %d\n", printf("%------0000000*.d", i, -1000000001));

		printf("\n");

		printf("---------------TEST *------------\n\n");

		printf(" %d\n", printf("%*d", i, 0));
		printf(" %d\n", printf("%*d", i, 1));
		printf(" %d\n", printf("%*d", i, 10));
		printf(" %d\n", printf("%*d", i, 101));
		printf(" %d\n", printf("%*d", i, 1001));
		printf(" %d\n", printf("%*d", i, 10001));
		printf(" %d\n", printf("%*d", i, 100001));
		printf(" %d\n", printf("%*d", i, 1000001));
		printf(" %d\n", printf("%*d", i, 10000001));
		printf(" %d\n", printf("%*d", i, 100000001));
		printf(" %d\n", printf("%*d", i, -1000000001));

		printf(" %d\n", printf("%-*d", i, 0));
		printf(" %d\n", printf("%-*d", i, 1));
		printf(" %d\n", printf("%-*d", i, 10));
		printf(" %d\n", printf("%-*d", i, 101));
		printf(" %d\n", printf("%-*d", i, 1001));
		printf(" %d\n", printf("%-*d", i, 10001));
		printf(" %d\n", printf("%-*d", i, 100001));
		printf(" %d\n", printf("%-*d", i, 1000001));
		printf(" %d\n", printf("%-*d", i, 10000001));
		printf(" %d\n", printf("%-*d", i, 100000001));
		printf(" %d\n", printf("%-*d", i, -1000000001));

		printf(" %d\n", printf("%0*d", i, 0));
		printf(" %d\n", printf("%0*d", i, 1));
		printf(" %d\n", printf("%0*d", i, 10));
		printf(" %d\n", printf("%0*d", i, 101));
		printf(" %d\n", printf("%0*d", i, 1001));
		printf(" %d\n", printf("%0*d", i, 10001));
		printf(" %d\n", printf("%0*d", i, 100001));
		printf(" %d\n", printf("%0*d", i, 1000001));
		printf(" %d\n", printf("%0*d", i, 10000001));
		printf(" %d\n", printf("%0*d", i, 100000001));
		printf(" %d\n", printf("%0*d", i, -1000000001));

		printf(" %d\n", printf("%0-*d", i, 0));
		printf(" %d\n", printf("%0-*d", i, 1));
		printf(" %d\n", printf("%0-*d", i, 10));
		printf(" %d\n", printf("%0-*d", i, 101));
		printf(" %d\n", printf("%0-*d", i, 1001));
		printf(" %d\n", printf("%0-*d", i, 10001));
		printf(" %d\n", printf("%0-*d", i, 100001));
		printf(" %d\n", printf("%0-*d", i, 1000001));
		printf(" %d\n", printf("%0-*d", i, 10000001));
		printf(" %d\n", printf("%0-*d", i, 100000001));
		printf(" %d\n", printf("%0-*d", i, -1000000001));

		printf(" %d\n", printf("%-0*d", i, 0));
		printf(" %d\n", printf("%-0*d", i, 1));
		printf(" %d\n", printf("%-0*d", i, 10));
		printf(" %d\n", printf("%-0*d", i, 101));
		printf(" %d\n", printf("%-0*d", i, 1001));
		printf(" %d\n", printf("%-0*d", i, 10001));
		printf(" %d\n", printf("%-0*d", i, 100001));
		printf(" %d\n", printf("%-0*d", i, 1000001));
		printf(" %d\n", printf("%-0*d", i, 10000001));
		printf(" %d\n", printf("%-0*d", i, 100000001));
		printf(" %d\n", printf("%-0*d", i, -1000000001));

		printf(" %d\n", printf("%--------*d", i, 0));
		printf(" %d\n", printf("%--------*d", i, 1));
		printf(" %d\n", printf("%--------*d", i, 10));
		printf(" %d\n", printf("%--------*d", i, 101));
		printf(" %d\n", printf("%--------*d", i, 1001));
		printf(" %d\n", printf("%--------*d", i, 10001));
		printf(" %d\n", printf("%--------*d", i, 100001));
		printf(" %d\n", printf("%--------*d", i, 1000001));
		printf(" %d\n", printf("%--------*d", i, 10000001));
		printf(" %d\n", printf("%--------*d", i, 100000001));
		printf(" %d\n", printf("%--------*d", i, -1000000001));

		printf(" %d\n", printf("%0000000*d", i, 0));
		printf(" %d\n", printf("%0000000*d", i, 1));
		printf(" %d\n", printf("%0000000*d", i, 10));
		printf(" %d\n", printf("%0000000*d", i, 101));
		printf(" %d\n", printf("%0000000*d", i, 1001));
		printf(" %d\n", printf("%0000000*d", i, 10001));
		printf(" %d\n", printf("%0000000*d", i, 100001));
		printf(" %d\n", printf("%0000000*d", i, 1000001));
		printf(" %d\n", printf("%0000000*d", i, 10000001));
		printf(" %d\n", printf("%0000000*d", i, 100000001));
		printf(" %d\n", printf("%0000000*d", i, -1000000001));

		printf(" %d\n", printf("%0000000------*d", i, 0));
		printf(" %d\n", printf("%0000000------*d", i, 1));
		printf(" %d\n", printf("%0000000------*d", i, 10));
		printf(" %d\n", printf("%0000000------*d", i, 101));
		printf(" %d\n", printf("%0000000------*d", i, 1001));
		printf(" %d\n", printf("%0000000------*d", i, 10001));
		printf(" %d\n", printf("%0000000------*d", i, 100001));
		printf(" %d\n", printf("%0000000------*d", i, 1000001));
		printf(" %d\n", printf("%0000000------*d", i, 10000001));
		printf(" %d\n", printf("%0000000------*d", i, 100000001));
		printf(" %d\n", printf("%0000000------*d", i, -1000000001));

		printf(" %d\n", printf("%------0000000*d", i, 0));
		printf(" %d\n", printf("%------0000000*d", i, 1));
		printf(" %d\n", printf("%------0000000*d", i, 10));
		printf(" %d\n", printf("%------0000000*d", i, 101));
		printf(" %d\n", printf("%------0000000*d", i, 1001));
		printf(" %d\n", printf("%------0000000*d", i, 10001));
		printf(" %d\n", printf("%------0000000*d", i, 100001));
		printf(" %d\n", printf("%------0000000*d", i, 1000001));
		printf(" %d\n", printf("%------0000000*d", i, 10000001));
		printf(" %d\n", printf("%------0000000*d", i, 100000001));
		printf(" %d\n", printf("%------0000000*d", i, -1000000001));

		printf("\n");

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%I----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");


		printf("---------------TEST *.*-------------\n\n");
		printf(" %d\n", printf("%*.*i", i, j, 0));
		printf(" %d\n", printf("%*.*i", i, j, 1));
		printf(" %d\n", printf("%*.*i", i, j, 10));
		printf(" %d\n", printf("%*.*i", i, j, 101));
		printf(" %d\n", printf("%*.*i", i, j, 1001));
		printf(" %d\n", printf("%*.*i", i, j, 10001));
		printf(" %d\n", printf("%*.*i", i, j, 100001));
		printf(" %d\n", printf("%*.*i", i, j, 1000001));
		printf(" %d\n", printf("%*.*i", i, j, 10000001));
		printf(" %d\n", printf("%*.*i", i, j, 100000001));
		printf(" %d\n", printf("%*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%-*.*i", i, j, 0));
		printf(" %d\n", printf("%-*.*i", i, j, 1));
		printf(" %d\n", printf("%-*.*i", i, j, 10));
		printf(" %d\n", printf("%-*.*i", i, j, 101));
		printf(" %d\n", printf("%-*.*i", i, j, 1001));
		printf(" %d\n", printf("%-*.*i", i, j, 10001));
		printf(" %d\n", printf("%-*.*i", i, j, 100001));
		printf(" %d\n", printf("%-*.*i", i, j, 1000001));
		printf(" %d\n", printf("%-*.*i", i, j, 10000001));
		printf(" %d\n", printf("%-*.*i", i, j, 100000001));
		printf(" %d\n", printf("%-*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%0*.*i", i, j, 0));
		printf(" %d\n", printf("%0*.*i", i, j, 1));
		printf(" %d\n", printf("%0*.*i", i, j, 10));
		printf(" %d\n", printf("%0*.*i", i, j, 101));
		printf(" %d\n", printf("%0*.*i", i, j, 1001));
		printf(" %d\n", printf("%0*.*i", i, j, 10001));
		printf(" %d\n", printf("%0*.*i", i, j, 100001));
		printf(" %d\n", printf("%0*.*i", i, j, 1000001));
		printf(" %d\n", printf("%0*.*i", i, j, 10000001));
		printf(" %d\n", printf("%0*.*i", i, j, 100000001));
		printf(" %d\n", printf("%0*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%0-*.*i", i, j, 0));
		printf(" %d\n", printf("%0-*.*i", i, j, 1));
		printf(" %d\n", printf("%0-*.*i", i, j, 10));
		printf(" %d\n", printf("%0-*.*i", i, j, 101));
		printf(" %d\n", printf("%0-*.*i", i, j, 1001));
		printf(" %d\n", printf("%0-*.*i", i, j, 10001));
		printf(" %d\n", printf("%0-*.*i", i, j, 100001));
		printf(" %d\n", printf("%0-*.*i", i, j, 1000001));
		printf(" %d\n", printf("%0-*.*i", i, j, 10000001));
		printf(" %d\n", printf("%0-*.*i", i, j, 100000001));
		printf(" %d\n", printf("%0-*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%-0*.*i", i, j, 0));
		printf(" %d\n", printf("%-0*.*i", i, j, 1));
		printf(" %d\n", printf("%-0*.*i", i, j, 10));
		printf(" %d\n", printf("%-0*.*i", i, j, 101));
		printf(" %d\n", printf("%-0*.*i", i, j, 1001));
		printf(" %d\n", printf("%-0*.*i", i, j, 10001));
		printf(" %d\n", printf("%-0*.*i", i, j, 100001));
		printf(" %d\n", printf("%-0*.*i", i, j, 1000001));
		printf(" %d\n", printf("%-0*.*i", i, j, 10000001));
		printf(" %d\n", printf("%-0*.*i", i, j, 100000001));
		printf(" %d\n", printf("%-0*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%--------*.*i", i, j, 0));
		printf(" %d\n", printf("%--------*.*i", i, j, 1));
		printf(" %d\n", printf("%--------*.*i", i, j, 10));
		printf(" %d\n", printf("%--------*.*i", i, j, 101));
		printf(" %d\n", printf("%--------*.*i", i, j, 1001));
		printf(" %d\n", printf("%--------*.*i", i, j, 10001));
		printf(" %d\n", printf("%--------*.*i", i, j, 100001));
		printf(" %d\n", printf("%--------*.*i", i, j, 1000001));
		printf(" %d\n", printf("%--------*.*i", i, j, 10000001));
		printf(" %d\n", printf("%--------*.*i", i, j, 100000001));
		printf(" %d\n", printf("%--------*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%0000000*.*i", i, j, 0));
		printf(" %d\n", printf("%0000000*.*i", i, j, 1));
		printf(" %d\n", printf("%0000000*.*i", i, j, 10));
		printf(" %d\n", printf("%0000000*.*i", i, j, 101));
		printf(" %d\n", printf("%0000000*.*i", i, j, 1001));
		printf(" %d\n", printf("%0000000*.*i", i, j, 10001));
		printf(" %d\n", printf("%0000000*.*i", i, j, 100001));
		printf(" %d\n", printf("%0000000*.*i", i, j, 1000001));
		printf(" %d\n", printf("%0000000*.*i", i, j, 10000001));
		printf(" %d\n", printf("%0000000*.*i", i, j, 100000001));
		printf(" %d\n", printf("%0000000*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%0000000------*.*i", i, j, 0));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 1));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 10));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 101));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 1001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 10001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 100001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 1000001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 10000001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, 100000001));
		printf(" %d\n", printf("%0000000------*.*i", i, j, -1000000001));

		printf(" %d\n", printf("%------0000000*.*i", i, j, 0));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 1));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 10));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 101));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 1001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 10001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 100001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 1000001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 10000001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, 100000001));
		printf(" %d\n", printf("%------0000000*.*i", i, j, -1000000001));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*i", i, 0));
		printf(" %d\n", printf("%.*i", i, 1));
		printf(" %d\n", printf("%.*i", i, 10));
		printf(" %d\n", printf("%.*i", i, 101));
		printf(" %d\n", printf("%.*i", i, 1001));
		printf(" %d\n", printf("%.*i", i, 10001));
		printf(" %d\n", printf("%.*i", i, 100001));
		printf(" %d\n", printf("%.*i", i, 1000001));
		printf(" %d\n", printf("%.*i", i, 10000001));
		printf(" %d\n", printf("%.*i", i, 100000001));
		printf(" %d\n", printf("%.*i", i, -1000000001));

		printf(" %d\n", printf("%-.*i", i, 0));
		printf(" %d\n", printf("%-.*i", i, 1));
		printf(" %d\n", printf("%-.*i", i, 10));
		printf(" %d\n", printf("%-.*i", i, 101));
		printf(" %d\n", printf("%-.*i", i, 1001));
		printf(" %d\n", printf("%-.*i", i, 10001));
		printf(" %d\n", printf("%-.*i", i, 100001));
		printf(" %d\n", printf("%-.*i", i, 1000001));
		printf(" %d\n", printf("%-.*i", i, 10000001));
		printf(" %d\n", printf("%-.*i", i, 100000001));
		printf(" %d\n", printf("%-.*i", i, -1000000001));

		printf(" %d\n", printf("%0.*i", i, 0));
		printf(" %d\n", printf("%0.*i", i, 1));
		printf(" %d\n", printf("%0.*i", i, 10));
		printf(" %d\n", printf("%0.*i", i, 101));
		printf(" %d\n", printf("%0.*i", i, 1001));
		printf(" %d\n", printf("%0.*i", i, 10001));
		printf(" %d\n", printf("%0.*i", i, 100001));
		printf(" %d\n", printf("%0.*i", i, 1000001));
		printf(" %d\n", printf("%0.*i", i, 10000001));
		printf(" %d\n", printf("%0.*i", i, 100000001));
		printf(" %d\n", printf("%0.*i", i, -1000000001));

		printf(" %d\n", printf("%0-.*i", i, 0));
		printf(" %d\n", printf("%0-.*i", i, 1));
		printf(" %d\n", printf("%0-.*i", i, 10));
		printf(" %d\n", printf("%0-.*i", i, 101));
		printf(" %d\n", printf("%0-.*i", i, 1001));
		printf(" %d\n", printf("%0-.*i", i, 10001));
		printf(" %d\n", printf("%0-.*i", i, 100001));
		printf(" %d\n", printf("%0-.*i", i, 1000001));
		printf(" %d\n", printf("%0-.*i", i, 10000001));
		printf(" %d\n", printf("%0-.*i", i, 100000001));
		printf(" %d\n", printf("%0-.*i", i, -1000000001));

		printf(" %d\n", printf("%-0.*i", i, 0));
		printf(" %d\n", printf("%-0.*i", i, 1));
		printf(" %d\n", printf("%-0.*i", i, 10));
		printf(" %d\n", printf("%-0.*i", i, 101));
		printf(" %d\n", printf("%-0.*i", i, 1001));
		printf(" %d\n", printf("%-0.*i", i, 10001));
		printf(" %d\n", printf("%-0.*i", i, 100001));
		printf(" %d\n", printf("%-0.*i", i, 1000001));
		printf(" %d\n", printf("%-0.*i", i, 10000001));
		printf(" %d\n", printf("%-0.*i", i, 100000001));
		printf(" %d\n", printf("%-0.*i", i, -1000000001));

		printf(" %d\n", printf("%--------.*i", i, 0));
		printf(" %d\n", printf("%--------.*i", i, 1));
		printf(" %d\n", printf("%--------.*i", i, 10));
		printf(" %d\n", printf("%--------.*i", i, 101));
		printf(" %d\n", printf("%--------.*i", i, 1001));
		printf(" %d\n", printf("%--------.*i", i, 10001));
		printf(" %d\n", printf("%--------.*i", i, 100001));
		printf(" %d\n", printf("%--------.*i", i, 1000001));
		printf(" %d\n", printf("%--------.*i", i, 10000001));
		printf(" %d\n", printf("%--------.*i", i, 100000001));
		printf(" %d\n", printf("%--------.*i", i, -1000000001));

		printf(" %d\n", printf("%0000000.*i", i, 0));
		printf(" %d\n", printf("%0000000.*i", i, 1));
		printf(" %d\n", printf("%0000000.*i", i, 10));
		printf(" %d\n", printf("%0000000.*i", i, 101));
		printf(" %d\n", printf("%0000000.*i", i, 1001));
		printf(" %d\n", printf("%0000000.*i", i, 10001));
		printf(" %d\n", printf("%0000000.*i", i, 100001));
		printf(" %d\n", printf("%0000000.*i", i, 1000001));
		printf(" %d\n", printf("%0000000.*i", i, 10000001));
		printf(" %d\n", printf("%0000000.*i", i, 100000001));
		printf(" %d\n", printf("%0000000.*i", i, -1000000001));

		printf(" %d\n", printf("%0000000------.*i", i, 0));
		printf(" %d\n", printf("%0000000------.*i", i, 1));
		printf(" %d\n", printf("%0000000------.*i", i, 10));
		printf(" %d\n", printf("%0000000------.*i", i, 101));
		printf(" %d\n", printf("%0000000------.*i", i, 1001));
		printf(" %d\n", printf("%0000000------.*i", i, 10001));
		printf(" %d\n", printf("%0000000------.*i", i, 100001));
		printf(" %d\n", printf("%0000000------.*i", i, 1000001));
		printf(" %d\n", printf("%0000000------.*i", i, 10000001));
		printf(" %d\n", printf("%0000000------.*i", i, 100000001));
		printf(" %d\n", printf("%0000000------.*i", i, -1000000001));

		printf(" %d\n", printf("%------0000000.*i", i, 0));
		printf(" %d\n", printf("%------0000000.*i", i, 1));
		printf(" %d\n", printf("%------0000000.*i", i, 10));
		printf(" %d\n", printf("%------0000000.*i", i, 101));
		printf(" %d\n", printf("%------0000000.*i", i, 1001));
		printf(" %d\n", printf("%------0000000.*i", i, 10001));
		printf(" %d\n", printf("%------0000000.*i", i, 100001));
		printf(" %d\n", printf("%------0000000.*i", i, 1000001));
		printf(" %d\n", printf("%------0000000.*i", i, 10000001));
		printf(" %d\n", printf("%------0000000.*i", i, 100000001));
		printf(" %d\n", printf("%------0000000.*i", i, -1000000001));


		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.i", i, 0));
		printf(" %d\n", printf("%*.i", i, 1));
		printf(" %d\n", printf("%*.i", i, 10));
		printf(" %d\n", printf("%*.i", i, 101));
		printf(" %d\n", printf("%*.i", i, 1001));
		printf(" %d\n", printf("%*.i", i, 10001));
		printf(" %d\n", printf("%*.i", i, 100001));
		printf(" %d\n", printf("%*.i", i, 1000001));
		printf(" %d\n", printf("%*.i", i, 10000001));
		printf(" %d\n", printf("%*.i", i, 100000001));
		printf(" %d\n", printf("%*.i", i, -1000000001));

		printf(" %d\n", printf("%-*.i", i, 0));
		printf(" %d\n", printf("%-*.i", i, 1));
		printf(" %d\n", printf("%-*.i", i, 10));
		printf(" %d\n", printf("%-*.i", i, 101));
		printf(" %d\n", printf("%-*.i", i, 1001));
		printf(" %d\n", printf("%-*.i", i, 10001));
		printf(" %d\n", printf("%-*.i", i, 100001));
		printf(" %d\n", printf("%-*.i", i, 1000001));
		printf(" %d\n", printf("%-*.i", i, 10000001));
		printf(" %d\n", printf("%-*.i", i, 100000001));
		printf(" %d\n", printf("%-*.i", i, -1000000001));

		printf(" %d\n", printf("%0*.i", i, 0));
		printf(" %d\n", printf("%0*.i", i, 1));
		printf(" %d\n", printf("%0*.i", i, 10));
		printf(" %d\n", printf("%0*.i", i, 101));
		printf(" %d\n", printf("%0*.i", i, 1001));
		printf(" %d\n", printf("%0*.i", i, 10001));
		printf(" %d\n", printf("%0*.i", i, 100001));
		printf(" %d\n", printf("%0*.i", i, 1000001));
		printf(" %d\n", printf("%0*.i", i, 10000001));
		printf(" %d\n", printf("%0*.i", i, 100000001));
		printf(" %d\n", printf("%0*.i", i, -1000000001));

		printf(" %d\n", printf("%0-*.i", i, 0));
		printf(" %d\n", printf("%0-*.i", i, 1));
		printf(" %d\n", printf("%0-*.i", i, 10));
		printf(" %d\n", printf("%0-*.i", i, 101));
		printf(" %d\n", printf("%0-*.i", i, 1001));
		printf(" %d\n", printf("%0-*.i", i, 10001));
		printf(" %d\n", printf("%0-*.i", i, 100001));
		printf(" %d\n", printf("%0-*.i", i, 1000001));
		printf(" %d\n", printf("%0-*.i", i, 10000001));
		printf(" %d\n", printf("%0-*.i", i, 100000001));
		printf(" %d\n", printf("%0-*.i", i, -1000000001));

		printf(" %d\n", printf("%-0*.i", i, 0));
		printf(" %d\n", printf("%-0*.i", i, 1));
		printf(" %d\n", printf("%-0*.i", i, 10));
		printf(" %d\n", printf("%-0*.i", i, 101));
		printf(" %d\n", printf("%-0*.i", i, 1001));
		printf(" %d\n", printf("%-0*.i", i, 10001));
		printf(" %d\n", printf("%-0*.i", i, 100001));
		printf(" %d\n", printf("%-0*.i", i, 1000001));
		printf(" %d\n", printf("%-0*.i", i, 10000001));
		printf(" %d\n", printf("%-0*.i", i, 100000001));
		printf(" %d\n", printf("%-0*.i", i, -1000000001));

		printf(" %d\n", printf("%--------*.i", i, 0));
		printf(" %d\n", printf("%--------*.i", i, 1));
		printf(" %d\n", printf("%--------*.i", i, 10));
		printf(" %d\n", printf("%--------*.i", i, 101));
		printf(" %d\n", printf("%--------*.i", i, 1001));
		printf(" %d\n", printf("%--------*.i", i, 10001));
		printf(" %d\n", printf("%--------*.i", i, 100001));
		printf(" %d\n", printf("%--------*.i", i, 1000001));
		printf(" %d\n", printf("%--------*.i", i, 10000001));
		printf(" %d\n", printf("%--------*.i", i, 100000001));
		printf(" %d\n", printf("%--------*.i", i, -1000000001));

		printf(" %d\n", printf("%0000000*.i", i, 0));
		printf(" %d\n", printf("%0000000*.i", i, 1));
		printf(" %d\n", printf("%0000000*.i", i, 10));
		printf(" %d\n", printf("%0000000*.i", i, 101));
		printf(" %d\n", printf("%0000000*.i", i, 1001));
		printf(" %d\n", printf("%0000000*.i", i, 10001));
		printf(" %d\n", printf("%0000000*.i", i, 100001));
		printf(" %d\n", printf("%0000000*.i", i, 1000001));
		printf(" %d\n", printf("%0000000*.i", i, 10000001));
		printf(" %d\n", printf("%0000000*.i", i, 100000001));
		printf(" %d\n", printf("%0000000*.i", i, -1000000001));

		printf(" %d\n", printf("%0000000------*.i", i, 0));
		printf(" %d\n", printf("%0000000------*.i", i, 1));
		printf(" %d\n", printf("%0000000------*.i", i, 10));
		printf(" %d\n", printf("%0000000------*.i", i, 101));
		printf(" %d\n", printf("%0000000------*.i", i, 1001));
		printf(" %d\n", printf("%0000000------*.i", i, 10001));
		printf(" %d\n", printf("%0000000------*.i", i, 100001));
		printf(" %d\n", printf("%0000000------*.i", i, 1000001));
		printf(" %d\n", printf("%0000000------*.i", i, 10000001));
		printf(" %d\n", printf("%0000000------*.i", i, 100000001));
		printf(" %d\n", printf("%0000000------*.i", i, -1000000001));

		printf(" %d\n", printf("%------0000000*.i", i, 0));
		printf(" %d\n", printf("%------0000000*.i", i, 1));
		printf(" %d\n", printf("%------0000000*.i", i, 10));
		printf(" %d\n", printf("%------0000000*.i", i, 101));
		printf(" %d\n", printf("%------0000000*.i", i, 1001));
		printf(" %d\n", printf("%------0000000*.i", i, 10001));
		printf(" %d\n", printf("%------0000000*.i", i, 100001));
		printf(" %d\n", printf("%------0000000*.i", i, 1000001));
		printf(" %d\n", printf("%------0000000*.i", i, 10000001));
		printf(" %d\n", printf("%------0000000*.i", i, 100000001));
		printf(" %d\n", printf("%------0000000*.i", i, -1000000001));

		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*i", i, 0));
		printf(" %d\n", printf("%*i", i, 1));
		printf(" %d\n", printf("%*i", i, 10));
		printf(" %d\n", printf("%*i", i, 101));
		printf(" %d\n", printf("%*i", i, 1001));
		printf(" %d\n", printf("%*i", i, 10001));
		printf(" %d\n", printf("%*i", i, 100001));
		printf(" %d\n", printf("%*i", i, 1000001));
		printf(" %d\n", printf("%*i", i, 10000001));
		printf(" %d\n", printf("%*i", i, 100000001));
		printf(" %d\n", printf("%*i", i, -1000000001));

		printf(" %d\n", printf("%-*i", i, 0));
		printf(" %d\n", printf("%-*i", i, 1));
		printf(" %d\n", printf("%-*i", i, 10));
		printf(" %d\n", printf("%-*i", i, 101));
		printf(" %d\n", printf("%-*i", i, 1001));
		printf(" %d\n", printf("%-*i", i, 10001));
		printf(" %d\n", printf("%-*i", i, 100001));
		printf(" %d\n", printf("%-*i", i, 1000001));
		printf(" %d\n", printf("%-*i", i, 10000001));
		printf(" %d\n", printf("%-*i", i, 100000001));
		printf(" %d\n", printf("%-*i", i, -1000000001));

		printf(" %d\n", printf("%0*i", i, 0));
		printf(" %d\n", printf("%0*i", i, 1));
		printf(" %d\n", printf("%0*i", i, 10));
		printf(" %d\n", printf("%0*i", i, 101));
		printf(" %d\n", printf("%0*i", i, 1001));
		printf(" %d\n", printf("%0*i", i, 10001));
		printf(" %d\n", printf("%0*i", i, 100001));
		printf(" %d\n", printf("%0*i", i, 1000001));
		printf(" %d\n", printf("%0*i", i, 10000001));
		printf(" %d\n", printf("%0*i", i, 100000001));
		printf(" %d\n", printf("%0*i", i, -1000000001));

		printf(" %d\n", printf("%0-*i", i, 0));
		printf(" %d\n", printf("%0-*i", i, 1));
		printf(" %d\n", printf("%0-*i", i, 10));
		printf(" %d\n", printf("%0-*i", i, 101));
		printf(" %d\n", printf("%0-*i", i, 1001));
		printf(" %d\n", printf("%0-*i", i, 10001));
		printf(" %d\n", printf("%0-*i", i, 100001));
		printf(" %d\n", printf("%0-*i", i, 1000001));
		printf(" %d\n", printf("%0-*i", i, 10000001));
		printf(" %d\n", printf("%0-*i", i, 100000001));
		printf(" %d\n", printf("%0-*i", i, -1000000001));

		printf(" %d\n", printf("%-0*i", i, 0));
		printf(" %d\n", printf("%-0*i", i, 1));
		printf(" %d\n", printf("%-0*i", i, 10));
		printf(" %d\n", printf("%-0*i", i, 101));
		printf(" %d\n", printf("%-0*i", i, 1001));
		printf(" %d\n", printf("%-0*i", i, 10001));
		printf(" %d\n", printf("%-0*i", i, 100001));
		printf(" %d\n", printf("%-0*i", i, 1000001));
		printf(" %d\n", printf("%-0*i", i, 10000001));
		printf(" %d\n", printf("%-0*i", i, 100000001));
		printf(" %d\n", printf("%-0*i", i, -1000000001));

		printf(" %d\n", printf("%--------*i", i, 0));
		printf(" %d\n", printf("%--------*i", i, 1));
		printf(" %d\n", printf("%--------*i", i, 10));
		printf(" %d\n", printf("%--------*i", i, 101));
		printf(" %d\n", printf("%--------*i", i, 1001));
		printf(" %d\n", printf("%--------*i", i, 10001));
		printf(" %d\n", printf("%--------*i", i, 100001));
		printf(" %d\n", printf("%--------*i", i, 1000001));
		printf(" %d\n", printf("%--------*i", i, 10000001));
		printf(" %d\n", printf("%--------*i", i, 100000001));
		printf(" %d\n", printf("%--------*i", i, -1000000001));

		printf(" %d\n", printf("%0000000*i", i, 0));
		printf(" %d\n", printf("%0000000*i", i, 1));
		printf(" %d\n", printf("%0000000*i", i, 10));
		printf(" %d\n", printf("%0000000*i", i, 101));
		printf(" %d\n", printf("%0000000*i", i, 1001));
		printf(" %d\n", printf("%0000000*i", i, 10001));
		printf(" %d\n", printf("%0000000*i", i, 100001));
		printf(" %d\n", printf("%0000000*i", i, 1000001));
		printf(" %d\n", printf("%0000000*i", i, 10000001));
		printf(" %d\n", printf("%0000000*i", i, 100000001));
		printf(" %d\n", printf("%0000000*i", i, -1000000001));

		printf(" %d\n", printf("%0000000------*i", i, 0));
		printf(" %d\n", printf("%0000000------*i", i, 1));
		printf(" %d\n", printf("%0000000------*i", i, 10));
		printf(" %d\n", printf("%0000000------*i", i, 101));
		printf(" %d\n", printf("%0000000------*i", i, 1001));
		printf(" %d\n", printf("%0000000------*i", i, 10001));
		printf(" %d\n", printf("%0000000------*i", i, 100001));
		printf(" %d\n", printf("%0000000------*i", i, 1000001));
		printf(" %d\n", printf("%0000000------*i", i, 10000001));
		printf(" %d\n", printf("%0000000------*i", i, 100000001));
		printf(" %d\n", printf("%0000000------*i", i, -1000000001));

		printf(" %d\n", printf("%------0000000*i", i, 0));
		printf(" %d\n", printf("%------0000000*i", i, 1));
		printf(" %d\n", printf("%------0000000*i", i, 10));
		printf(" %d\n", printf("%------0000000*i", i, 101));
		printf(" %d\n", printf("%------0000000*i", i, 1001));
		printf(" %d\n", printf("%------0000000*i", i, 10001));
		printf(" %d\n", printf("%------0000000*i", i, 100001));
		printf(" %d\n", printf("%------0000000*i", i, 1000001));
		printf(" %d\n", printf("%------0000000*i", i, 10000001));
		printf(" %d\n", printf("%------0000000*i", i, 100000001));
		printf(" %d\n", printf("%------0000000*i", i, -1000000001));

		printf("\n");

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%U----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");


		printf("---------------TEST *.*-------------\n\n");
		printf(" %d\n", printf("%*.*u", i, j, 0));
		printf(" %d\n", printf("%*.*u", i, j, 1));
		printf(" %d\n", printf("%*.*u", i, j, 10));
		printf(" %d\n", printf("%*.*u", i, j, 101));
		printf(" %d\n", printf("%*.*u", i, j, 1001));
		printf(" %d\n", printf("%*.*u", i, j, 10001));
		printf(" %d\n", printf("%*.*u", i, j, 100001));
		printf(" %d\n", printf("%*.*u", i, j, 1000001));
		printf(" %d\n", printf("%*.*u", i, j, 10000001));
		printf(" %d\n", printf("%*.*u", i, j, 100000001));
		printf(" %d\n", printf("%*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%-*.*u", i, j, 0));
		printf(" %d\n", printf("%-*.*u", i, j, 1));
		printf(" %d\n", printf("%-*.*u", i, j, 10));
		printf(" %d\n", printf("%-*.*u", i, j, 101));
		printf(" %d\n", printf("%-*.*u", i, j, 1001));
		printf(" %d\n", printf("%-*.*u", i, j, 10001));
		printf(" %d\n", printf("%-*.*u", i, j, 100001));
		printf(" %d\n", printf("%-*.*u", i, j, 1000001));
		printf(" %d\n", printf("%-*.*u", i, j, 10000001));
		printf(" %d\n", printf("%-*.*u", i, j, 100000001));
		printf(" %d\n", printf("%-*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%0*.*u", i, j, 0));
		printf(" %d\n", printf("%0*.*u", i, j, 1));
		printf(" %d\n", printf("%0*.*u", i, j, 10));
		printf(" %d\n", printf("%0*.*u", i, j, 101));
		printf(" %d\n", printf("%0*.*u", i, j, 1001));
		printf(" %d\n", printf("%0*.*u", i, j, 10001));
		printf(" %d\n", printf("%0*.*u", i, j, 100001));
		printf(" %d\n", printf("%0*.*u", i, j, 1000001));
		printf(" %d\n", printf("%0*.*u", i, j, 10000001));
		printf(" %d\n", printf("%0*.*u", i, j, 100000001));
		printf(" %d\n", printf("%0*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%0-*.*u", i, j, 0));
		printf(" %d\n", printf("%0-*.*u", i, j, 1));
		printf(" %d\n", printf("%0-*.*u", i, j, 10));
		printf(" %d\n", printf("%0-*.*u", i, j, 101));
		printf(" %d\n", printf("%0-*.*u", i, j, 1001));
		printf(" %d\n", printf("%0-*.*u", i, j, 10001));
		printf(" %d\n", printf("%0-*.*u", i, j, 100001));
		printf(" %d\n", printf("%0-*.*u", i, j, 1000001));
		printf(" %d\n", printf("%0-*.*u", i, j, 10000001));
		printf(" %d\n", printf("%0-*.*u", i, j, 100000001));
		printf(" %d\n", printf("%0-*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%-0*.*u", i, j, 0));
		printf(" %d\n", printf("%-0*.*u", i, j, 1));
		printf(" %d\n", printf("%-0*.*u", i, j, 10));
		printf(" %d\n", printf("%-0*.*u", i, j, 101));
		printf(" %d\n", printf("%-0*.*u", i, j, 1001));
		printf(" %d\n", printf("%-0*.*u", i, j, 10001));
		printf(" %d\n", printf("%-0*.*u", i, j, 100001));
		printf(" %d\n", printf("%-0*.*u", i, j, 1000001));
		printf(" %d\n", printf("%-0*.*u", i, j, 10000001));
		printf(" %d\n", printf("%-0*.*u", i, j, 100000001));
		printf(" %d\n", printf("%-0*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%--------*.*u", i, j, 0));
		printf(" %d\n", printf("%--------*.*u", i, j, 1));
		printf(" %d\n", printf("%--------*.*u", i, j, 10));
		printf(" %d\n", printf("%--------*.*u", i, j, 101));
		printf(" %d\n", printf("%--------*.*u", i, j, 1001));
		printf(" %d\n", printf("%--------*.*u", i, j, 10001));
		printf(" %d\n", printf("%--------*.*u", i, j, 100001));
		printf(" %d\n", printf("%--------*.*u", i, j, 1000001));
		printf(" %d\n", printf("%--------*.*u", i, j, 10000001));
		printf(" %d\n", printf("%--------*.*u", i, j, 100000001));
		printf(" %d\n", printf("%--------*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%0000000*.*u", i, j, 0));
		printf(" %d\n", printf("%0000000*.*u", i, j, 1));
		printf(" %d\n", printf("%0000000*.*u", i, j, 10));
		printf(" %d\n", printf("%0000000*.*u", i, j, 101));
		printf(" %d\n", printf("%0000000*.*u", i, j, 1001));
		printf(" %d\n", printf("%0000000*.*u", i, j, 10001));
		printf(" %d\n", printf("%0000000*.*u", i, j, 100001));
		printf(" %d\n", printf("%0000000*.*u", i, j, 1000001));
		printf(" %d\n", printf("%0000000*.*u", i, j, 10000001));
		printf(" %d\n", printf("%0000000*.*u", i, j, 100000001));
		printf(" %d\n", printf("%0000000*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%0000000------*.*u", i, j, 0));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 1));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 10));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 101));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 1001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 10001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 100001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 1000001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 10000001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, 100000001));
		printf(" %d\n", printf("%0000000------*.*u", i, j, -1000000001));

		printf(" %d\n", printf("%------0000000*.*u", i, j, 0));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 1));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 10));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 101));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 1001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 10001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 100001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 1000001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 10000001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, 100000001));
		printf(" %d\n", printf("%------0000000*.*u", i, j, -1000000001));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*u", i, 0));
		printf(" %d\n", printf("%.*u", i, 1));
		printf(" %d\n", printf("%.*u", i, 10));
		printf(" %d\n", printf("%.*u", i, 101));
		printf(" %d\n", printf("%.*u", i, 1001));
		printf(" %d\n", printf("%.*u", i, 10001));
		printf(" %d\n", printf("%.*u", i, 100001));
		printf(" %d\n", printf("%.*u", i, 1000001));
		printf(" %d\n", printf("%.*u", i, 10000001));
		printf(" %d\n", printf("%.*u", i, 100000001));
		printf(" %d\n", printf("%.*u", i, -1000000001));

		printf(" %d\n", printf("%-.*u", i, 0));
		printf(" %d\n", printf("%-.*u", i, 1));
		printf(" %d\n", printf("%-.*u", i, 10));
		printf(" %d\n", printf("%-.*u", i, 101));
		printf(" %d\n", printf("%-.*u", i, 1001));
		printf(" %d\n", printf("%-.*u", i, 10001));
		printf(" %d\n", printf("%-.*u", i, 100001));
		printf(" %d\n", printf("%-.*u", i, 1000001));
		printf(" %d\n", printf("%-.*u", i, 10000001));
		printf(" %d\n", printf("%-.*u", i, 100000001));
		printf(" %d\n", printf("%-.*u", i, -1000000001));

		printf(" %d\n", printf("%0.*u", i, 0));
		printf(" %d\n", printf("%0.*u", i, 1));
		printf(" %d\n", printf("%0.*u", i, 10));
		printf(" %d\n", printf("%0.*u", i, 101));
		printf(" %d\n", printf("%0.*u", i, 1001));
		printf(" %d\n", printf("%0.*u", i, 10001));
		printf(" %d\n", printf("%0.*u", i, 100001));
		printf(" %d\n", printf("%0.*u", i, 1000001));
		printf(" %d\n", printf("%0.*u", i, 10000001));
		printf(" %d\n", printf("%0.*u", i, 100000001));
		printf(" %d\n", printf("%0.*u", i, -1000000001));

		printf(" %d\n", printf("%0-.*u", i, 0));
		printf(" %d\n", printf("%0-.*u", i, 1));
		printf(" %d\n", printf("%0-.*u", i, 10));
		printf(" %d\n", printf("%0-.*u", i, 101));
		printf(" %d\n", printf("%0-.*u", i, 1001));
		printf(" %d\n", printf("%0-.*u", i, 10001));
		printf(" %d\n", printf("%0-.*u", i, 100001));
		printf(" %d\n", printf("%0-.*u", i, 1000001));
		printf(" %d\n", printf("%0-.*u", i, 10000001));
		printf(" %d\n", printf("%0-.*u", i, 100000001));
		printf(" %d\n", printf("%0-.*u", i, -1000000001));

		printf(" %d\n", printf("%-0.*u", i, 0));
		printf(" %d\n", printf("%-0.*u", i, 1));
		printf(" %d\n", printf("%-0.*u", i, 10));
		printf(" %d\n", printf("%-0.*u", i, 101));
		printf(" %d\n", printf("%-0.*u", i, 1001));
		printf(" %d\n", printf("%-0.*u", i, 10001));
		printf(" %d\n", printf("%-0.*u", i, 100001));
		printf(" %d\n", printf("%-0.*u", i, 1000001));
		printf(" %d\n", printf("%-0.*u", i, 10000001));
		printf(" %d\n", printf("%-0.*u", i, 100000001));
		printf(" %d\n", printf("%-0.*u", i, -1000000001));

		printf(" %d\n", printf("%--------.*u", i, 0));
		printf(" %d\n", printf("%--------.*u", i, 1));
		printf(" %d\n", printf("%--------.*u", i, 10));
		printf(" %d\n", printf("%--------.*u", i, 101));
		printf(" %d\n", printf("%--------.*u", i, 1001));
		printf(" %d\n", printf("%--------.*u", i, 10001));
		printf(" %d\n", printf("%--------.*u", i, 100001));
		printf(" %d\n", printf("%--------.*u", i, 1000001));
		printf(" %d\n", printf("%--------.*u", i, 10000001));
		printf(" %d\n", printf("%--------.*u", i, 100000001));
		printf(" %d\n", printf("%--------.*u", i, -1000000001));

		printf(" %d\n", printf("%0000000.*u", i, 0));
		printf(" %d\n", printf("%0000000.*u", i, 1));
		printf(" %d\n", printf("%0000000.*u", i, 10));
		printf(" %d\n", printf("%0000000.*u", i, 101));
		printf(" %d\n", printf("%0000000.*u", i, 1001));
		printf(" %d\n", printf("%0000000.*u", i, 10001));
		printf(" %d\n", printf("%0000000.*u", i, 100001));
		printf(" %d\n", printf("%0000000.*u", i, 1000001));
		printf(" %d\n", printf("%0000000.*u", i, 10000001));
		printf(" %d\n", printf("%0000000.*u", i, 100000001));
		printf(" %d\n", printf("%0000000.*u", i, -1000000001));

		printf(" %d\n", printf("%0000000------.*u", i, 0));
		printf(" %d\n", printf("%0000000------.*u", i, 1));
		printf(" %d\n", printf("%0000000------.*u", i, 10));
		printf(" %d\n", printf("%0000000------.*u", i, 101));
		printf(" %d\n", printf("%0000000------.*u", i, 1001));
		printf(" %d\n", printf("%0000000------.*u", i, 10001));
		printf(" %d\n", printf("%0000000------.*u", i, 100001));
		printf(" %d\n", printf("%0000000------.*u", i, 1000001));
		printf(" %d\n", printf("%0000000------.*u", i, 10000001));
		printf(" %d\n", printf("%0000000------.*u", i, 100000001));
		printf(" %d\n", printf("%0000000------.*u", i, -1000000001));

		printf(" %d\n", printf("%------0000000.*u", i, 0));
		printf(" %d\n", printf("%------0000000.*u", i, 1));
		printf(" %d\n", printf("%------0000000.*u", i, 10));
		printf(" %d\n", printf("%------0000000.*u", i, 101));
		printf(" %d\n", printf("%------0000000.*u", i, 1001));
		printf(" %d\n", printf("%------0000000.*u", i, 10001));
		printf(" %d\n", printf("%------0000000.*u", i, 100001));
		printf(" %d\n", printf("%------0000000.*u", i, 1000001));
		printf(" %d\n", printf("%------0000000.*u", i, 10000001));
		printf(" %d\n", printf("%------0000000.*u", i, 100000001));
		printf(" %d\n", printf("%------0000000.*u", i, -1000000001));


		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.u", i, 0));
		printf(" %d\n", printf("%*.u", i, 1));
		printf(" %d\n", printf("%*.u", i, 10));
		printf(" %d\n", printf("%*.u", i, 101));
		printf(" %d\n", printf("%*.u", i, 1001));
		printf(" %d\n", printf("%*.u", i, 10001));
		printf(" %d\n", printf("%*.u", i, 100001));
		printf(" %d\n", printf("%*.u", i, 1000001));
		printf(" %d\n", printf("%*.u", i, 10000001));
		printf(" %d\n", printf("%*.u", i, 100000001));
		printf(" %d\n", printf("%*.u", i, -1000000001));

		printf(" %d\n", printf("%-*.u", i, 0));
		printf(" %d\n", printf("%-*.u", i, 1));
		printf(" %d\n", printf("%-*.u", i, 10));
		printf(" %d\n", printf("%-*.u", i, 101));
		printf(" %d\n", printf("%-*.u", i, 1001));
		printf(" %d\n", printf("%-*.u", i, 10001));
		printf(" %d\n", printf("%-*.u", i, 100001));
		printf(" %d\n", printf("%-*.u", i, 1000001));
		printf(" %d\n", printf("%-*.u", i, 10000001));
		printf(" %d\n", printf("%-*.u", i, 100000001));
		printf(" %d\n", printf("%-*.u", i, -1000000001));

		printf(" %d\n", printf("%0*.u", i, 0));
		printf(" %d\n", printf("%0*.u", i, 1));
		printf(" %d\n", printf("%0*.u", i, 10));
		printf(" %d\n", printf("%0*.u", i, 101));
		printf(" %d\n", printf("%0*.u", i, 1001));
		printf(" %d\n", printf("%0*.u", i, 10001));
		printf(" %d\n", printf("%0*.u", i, 100001));
		printf(" %d\n", printf("%0*.u", i, 1000001));
		printf(" %d\n", printf("%0*.u", i, 10000001));
		printf(" %d\n", printf("%0*.u", i, 100000001));
		printf(" %d\n", printf("%0*.u", i, -1000000001));

		printf(" %d\n", printf("%0-*.u", i, 0));
		printf(" %d\n", printf("%0-*.u", i, 1));
		printf(" %d\n", printf("%0-*.u", i, 10));
		printf(" %d\n", printf("%0-*.u", i, 101));
		printf(" %d\n", printf("%0-*.u", i, 1001));
		printf(" %d\n", printf("%0-*.u", i, 10001));
		printf(" %d\n", printf("%0-*.u", i, 100001));
		printf(" %d\n", printf("%0-*.u", i, 1000001));
		printf(" %d\n", printf("%0-*.u", i, 10000001));
		printf(" %d\n", printf("%0-*.u", i, 100000001));
		printf(" %d\n", printf("%0-*.u", i, -1000000001));

		printf(" %d\n", printf("%-0*.u", i, 0));
		printf(" %d\n", printf("%-0*.u", i, 1));
		printf(" %d\n", printf("%-0*.u", i, 10));
		printf(" %d\n", printf("%-0*.u", i, 101));
		printf(" %d\n", printf("%-0*.u", i, 1001));
		printf(" %d\n", printf("%-0*.u", i, 10001));
		printf(" %d\n", printf("%-0*.u", i, 100001));
		printf(" %d\n", printf("%-0*.u", i, 1000001));
		printf(" %d\n", printf("%-0*.u", i, 10000001));
		printf(" %d\n", printf("%-0*.u", i, 100000001));
		printf(" %d\n", printf("%-0*.u", i, -1000000001));

		printf(" %d\n", printf("%--------*.u", i, 0));
		printf(" %d\n", printf("%--------*.u", i, 1));
		printf(" %d\n", printf("%--------*.u", i, 10));
		printf(" %d\n", printf("%--------*.u", i, 101));
		printf(" %d\n", printf("%--------*.u", i, 1001));
		printf(" %d\n", printf("%--------*.u", i, 10001));
		printf(" %d\n", printf("%--------*.u", i, 100001));
		printf(" %d\n", printf("%--------*.u", i, 1000001));
		printf(" %d\n", printf("%--------*.u", i, 10000001));
		printf(" %d\n", printf("%--------*.u", i, 100000001));
		printf(" %d\n", printf("%--------*.u", i, -1000000001));

		printf(" %d\n", printf("%0000000*.u", i, 0));
		printf(" %d\n", printf("%0000000*.u", i, 1));
		printf(" %d\n", printf("%0000000*.u", i, 10));
		printf(" %d\n", printf("%0000000*.u", i, 101));
		printf(" %d\n", printf("%0000000*.u", i, 1001));
		printf(" %d\n", printf("%0000000*.u", i, 10001));
		printf(" %d\n", printf("%0000000*.u", i, 100001));
		printf(" %d\n", printf("%0000000*.u", i, 1000001));
		printf(" %d\n", printf("%0000000*.u", i, 10000001));
		printf(" %d\n", printf("%0000000*.u", i, 100000001));
		printf(" %d\n", printf("%0000000*.u", i, -1000000001));

		printf(" %d\n", printf("%0000000------*.u", i, 0));
		printf(" %d\n", printf("%0000000------*.u", i, 1));
		printf(" %d\n", printf("%0000000------*.u", i, 10));
		printf(" %d\n", printf("%0000000------*.u", i, 101));
		printf(" %d\n", printf("%0000000------*.u", i, 1001));
		printf(" %d\n", printf("%0000000------*.u", i, 10001));
		printf(" %d\n", printf("%0000000------*.u", i, 100001));
		printf(" %d\n", printf("%0000000------*.u", i, 1000001));
		printf(" %d\n", printf("%0000000------*.u", i, 10000001));
		printf(" %d\n", printf("%0000000------*.u", i, 100000001));
		printf(" %d\n", printf("%0000000------*.u", i, -1000000001));

		printf(" %d\n", printf("%------0000000*.u", i, 0));
		printf(" %d\n", printf("%------0000000*.u", i, 1));
		printf(" %d\n", printf("%------0000000*.u", i, 10));
		printf(" %d\n", printf("%------0000000*.u", i, 101));
		printf(" %d\n", printf("%------0000000*.u", i, 1001));
		printf(" %d\n", printf("%------0000000*.u", i, 10001));
		printf(" %d\n", printf("%------0000000*.u", i, 100001));
		printf(" %d\n", printf("%------0000000*.u", i, 1000001));
		printf(" %d\n", printf("%------0000000*.u", i, 10000001));
		printf(" %d\n", printf("%------0000000*.u", i, 100000001));
		printf(" %d\n", printf("%------0000000*.u", i, -1000000001));

		printf("\n");

		printf("---------------TEST *------------\n\n");

		printf(" %d\n", printf("%*u", i, 0));
		printf(" %d\n", printf("%*u", i, 1));
		printf(" %d\n", printf("%*u", i, 10));
		printf(" %d\n", printf("%*u", i, 101));
		printf(" %d\n", printf("%*u", i, 1001));
		printf(" %d\n", printf("%*u", i, 10001));
		printf(" %d\n", printf("%*u", i, 100001));
		printf(" %d\n", printf("%*u", i, 1000001));
		printf(" %d\n", printf("%*u", i, 10000001));
		printf(" %d\n", printf("%*u", i, 100000001));
		printf(" %d\n", printf("%*u", i, -1000000001));

		printf(" %d\n", printf("%-*u", i, 0));
		printf(" %d\n", printf("%-*u", i, 1));
		printf(" %d\n", printf("%-*u", i, 10));
		printf(" %d\n", printf("%-*u", i, 101));
		printf(" %d\n", printf("%-*u", i, 1001));
		printf(" %d\n", printf("%-*u", i, 10001));
		printf(" %d\n", printf("%-*u", i, 100001));
		printf(" %d\n", printf("%-*u", i, 1000001));
		printf(" %d\n", printf("%-*u", i, 10000001));
		printf(" %d\n", printf("%-*u", i, 100000001));
		printf(" %d\n", printf("%-*u", i, -1000000001));

		printf(" %d\n", printf("%0*u", i, 0));
		printf(" %d\n", printf("%0*u", i, 1));
		printf(" %d\n", printf("%0*u", i, 10));
		printf(" %d\n", printf("%0*u", i, 101));
		printf(" %d\n", printf("%0*u", i, 1001));
		printf(" %d\n", printf("%0*u", i, 10001));
		printf(" %d\n", printf("%0*u", i, 100001));
		printf(" %d\n", printf("%0*u", i, 1000001));
		printf(" %d\n", printf("%0*u", i, 10000001));
		printf(" %d\n", printf("%0*u", i, 100000001));
		printf(" %d\n", printf("%0*u", i, -1000000001));

		printf(" %d\n", printf("%0-*u", i, 0));
		printf(" %d\n", printf("%0-*u", i, 1));
		printf(" %d\n", printf("%0-*u", i, 10));
		printf(" %d\n", printf("%0-*u", i, 101));
		printf(" %d\n", printf("%0-*u", i, 1001));
		printf(" %d\n", printf("%0-*u", i, 10001));
		printf(" %d\n", printf("%0-*u", i, 100001));
		printf(" %d\n", printf("%0-*u", i, 1000001));
		printf(" %d\n", printf("%0-*u", i, 10000001));
		printf(" %d\n", printf("%0-*u", i, 100000001));
		printf(" %d\n", printf("%0-*u", i, -1000000001));

		printf(" %d\n", printf("%-0*u", i, 0));
		printf(" %d\n", printf("%-0*u", i, 1));
		printf(" %d\n", printf("%-0*u", i, 10));
		printf(" %d\n", printf("%-0*u", i, 101));
		printf(" %d\n", printf("%-0*u", i, 1001));
		printf(" %d\n", printf("%-0*u", i, 10001));
		printf(" %d\n", printf("%-0*u", i, 100001));
		printf(" %d\n", printf("%-0*u", i, 1000001));
		printf(" %d\n", printf("%-0*u", i, 10000001));
		printf(" %d\n", printf("%-0*u", i, 100000001));
		printf(" %d\n", printf("%-0*u", i, -1000000001));

		printf(" %d\n", printf("%--------*u", i, 0));
		printf(" %d\n", printf("%--------*u", i, 1));
		printf(" %d\n", printf("%--------*u", i, 10));
		printf(" %d\n", printf("%--------*u", i, 101));
		printf(" %d\n", printf("%--------*u", i, 1001));
		printf(" %d\n", printf("%--------*u", i, 10001));
		printf(" %d\n", printf("%--------*u", i, 100001));
		printf(" %d\n", printf("%--------*u", i, 1000001));
		printf(" %d\n", printf("%--------*u", i, 10000001));
		printf(" %d\n", printf("%--------*u", i, 100000001));
		printf(" %d\n", printf("%--------*u", i, -1000000001));

		printf(" %d\n", printf("%0000000*u", i, 0));
		printf(" %d\n", printf("%0000000*u", i, 1));
		printf(" %d\n", printf("%0000000*u", i, 10));
		printf(" %d\n", printf("%0000000*u", i, 101));
		printf(" %d\n", printf("%0000000*u", i, 1001));
		printf(" %d\n", printf("%0000000*u", i, 10001));
		printf(" %d\n", printf("%0000000*u", i, 100001));
		printf(" %d\n", printf("%0000000*u", i, 1000001));
		printf(" %d\n", printf("%0000000*u", i, 10000001));
		printf(" %d\n", printf("%0000000*u", i, 100000001));
		printf(" %d\n", printf("%0000000*u", i, -1000000001));

		printf(" %d\n", printf("%0000000------*u", i, 0));
		printf(" %d\n", printf("%0000000------*u", i, 1));
		printf(" %d\n", printf("%0000000------*u", i, 10));
		printf(" %d\n", printf("%0000000------*u", i, 101));
		printf(" %d\n", printf("%0000000------*u", i, 1001));
		printf(" %d\n", printf("%0000000------*u", i, 10001));
		printf(" %d\n", printf("%0000000------*u", i, 100001));
		printf(" %d\n", printf("%0000000------*u", i, 1000001));
		printf(" %d\n", printf("%0000000------*u", i, 10000001));
		printf(" %d\n", printf("%0000000------*u", i, 100000001));
		printf(" %d\n", printf("%0000000------*u", i, -1000000001));

		printf(" %d\n", printf("%------0000000*u", i, 0));
		printf(" %d\n", printf("%------0000000*u", i, 1));
		printf(" %d\n", printf("%------0000000*u", i, 10));
		printf(" %d\n", printf("%------0000000*u", i, 101));
		printf(" %d\n", printf("%------0000000*u", i, 1001));
		printf(" %d\n", printf("%------0000000*u", i, 10001));
		printf(" %d\n", printf("%------0000000*u", i, 100001));
		printf(" %d\n", printf("%------0000000*u", i, 1000001));
		printf(" %d\n", printf("%------0000000*u", i, 10000001));
		printf(" %d\n", printf("%------0000000*u", i, 100000001));
		printf(" %d\n", printf("%------0000000*u", i, -1000000001));

		printf("\n");


		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%S----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");

		printf("---------------TEST *.*-------------\n\n");

		printf(" %d\n", printf("%*.*s", i, j, NULL));
		printf(" %d\n", printf("%*.*s", i, j, ""));
		printf(" %d\n", printf("%*.*s", i, j, "1"));
		printf(" %d\n", printf("%*.*s", i, j, "10"));
		printf(" %d\n", printf("%*.*s", i, j, "101"));
		printf(" %d\n", printf("%*.*s", i, j, "1001"));
		printf(" %d\n", printf("%*.*s", i, j, "10001"));
		printf(" %d\n", printf("%*.*s", i, j, "100001"));
		printf(" %d\n", printf("%*.*s", i, j, "1000001"));
		printf(" %d\n", printf("%*.*s", i, j, "10000001"));
		printf(" %d\n", printf("%*.*s", i, j, "100000001"));
		printf(" %d\n", printf("%*.*s", i, j, "1000000001"));

		printf(" %d\n", printf("%-*.*s", i, j, NULL));
		printf(" %d\n", printf("%-*.*s", i, j, ""));
		printf(" %d\n", printf("%-*.*s", i, j, "1"));
		printf(" %d\n", printf("%-*.*s", i, j, "10"));
		printf(" %d\n", printf("%-*.*s", i, j, "101"));
		printf(" %d\n", printf("%-*.*s", i, j, "1001"));
		printf(" %d\n", printf("%-*.*s", i, j, "10001"));
		printf(" %d\n", printf("%-*.*s", i, j, "100001"));
		printf(" %d\n", printf("%-*.*s", i, j, "1000001"));
		printf(" %d\n", printf("%-*.*s", i, j, "10000001"));
		printf(" %d\n", printf("%-*.*s", i, j, "100000001"));
		printf(" %d\n", printf("%-*.*s", i, j, "1000000001"));

		printf(" %d\n", printf("%--------*.*s", i, j, NULL));
		printf(" %d\n", printf("%--------*.*s", i, j, ""));
		printf(" %d\n", printf("%--------*.*s", i, j, "1"));
		printf(" %d\n", printf("%--------*.*s", i, j, "10"));
		printf(" %d\n", printf("%--------*.*s", i, j, "101"));
		printf(" %d\n", printf("%--------*.*s", i, j, "1001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "10001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "100001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "1000001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "10000001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "100000001"));
		printf(" %d\n", printf("%--------*.*s", i, j, "1000000001"));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*s", i, NULL));
		printf(" %d\n", printf("%.*s", i, ""));
		printf(" %d\n", printf("%.*s", i, "1"));
		printf(" %d\n", printf("%.*s", i, "10"));
		printf(" %d\n", printf("%.*s", i, "101"));
		printf(" %d\n", printf("%.*s", i, "1001"));
		printf(" %d\n", printf("%.*s", i, "10001"));
		printf(" %d\n", printf("%.*s", i, "100001"));
		printf(" %d\n", printf("%.*s", i, "1000001"));
		printf(" %d\n", printf("%.*s", i, "10000001"));
		printf(" %d\n", printf("%.*s", i, "100000001"));
		printf(" %d\n", printf("%.*s", i, "1000000001"));

		printf(" %d\n", printf("%-.*s", i, NULL));
		printf(" %d\n", printf("%-.*s", i, ""));
		printf(" %d\n", printf("%-.*s", i, "1"));
		printf(" %d\n", printf("%-.*s", i, "10"));
		printf(" %d\n", printf("%-.*s", i, "101"));
		printf(" %d\n", printf("%-.*s", i, "1001"));
		printf(" %d\n", printf("%-.*s", i, "10001"));
		printf(" %d\n", printf("%-.*s", i, "100001"));
		printf(" %d\n", printf("%-.*s", i, "1000001"));
		printf(" %d\n", printf("%-.*s", i, "10000001"));
		printf(" %d\n", printf("%-.*s", i, "100000001"));
		printf(" %d\n", printf("%-.*s", i, "1000000001"));

		printf(" %d\n", printf("%--------.*s", i, NULL));
		printf(" %d\n", printf("%--------.*s", i, ""));
		printf(" %d\n", printf("%--------.*s", i, "1"));
		printf(" %d\n", printf("%--------.*s", i, "10"));
		printf(" %d\n", printf("%--------.*s", i, "101"));
		printf(" %d\n", printf("%--------.*s", i, "1001"));
		printf(" %d\n", printf("%--------.*s", i, "10001"));
		printf(" %d\n", printf("%--------.*s", i, "100001"));
		printf(" %d\n", printf("%--------.*s", i, "1000001"));
		printf(" %d\n", printf("%--------.*s", i, "10000001"));
		printf(" %d\n", printf("%--------.*s", i, "100000001"));
		printf(" %d\n", printf("%--------.*s", i, "1000000001"));

		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.s", i, NULL));
		printf(" %d\n", printf("%*.s", i, ""));
		printf(" %d\n", printf("%*.s", i, "1"));
		printf(" %d\n", printf("%*.s", i, "10"));
		printf(" %d\n", printf("%*.s", i, "101"));
		printf(" %d\n", printf("%*.s", i, "1001"));
		printf(" %d\n", printf("%*.s", i, "10001"));
		printf(" %d\n", printf("%*.s", i, "100001"));
		printf(" %d\n", printf("%*.s", i, "1000001"));
		printf(" %d\n", printf("%*.s", i, "10000001"));
		printf(" %d\n", printf("%*.s", i, "100000001"));
		printf(" %d\n", printf("%*.s", i, "1000000001"));

		printf(" %d\n", printf("%-*.s", i, NULL));
		printf(" %d\n", printf("%-*.s", i, ""));
		printf(" %d\n", printf("%-*.s", i, "1"));
		printf(" %d\n", printf("%-*.s", i, "10"));
		printf(" %d\n", printf("%-*.s", i, "101"));
		printf(" %d\n", printf("%-*.s", i, "1001"));
		printf(" %d\n", printf("%-*.s", i, "10001"));
		printf(" %d\n", printf("%-*.s", i, "100001"));
		printf(" %d\n", printf("%-*.s", i, "1000001"));
		printf(" %d\n", printf("%-*.s", i, "10000001"));
		printf(" %d\n", printf("%-*.s", i, "100000001"));
		printf(" %d\n", printf("%-*.s", i, "1000000001"));

		printf(" %d\n", printf("%--------*.s", i, NULL));
		printf(" %d\n", printf("%--------*.s", i, ""));
		printf(" %d\n", printf("%--------*.s", i, "1"));
		printf(" %d\n", printf("%--------*.s", i, "10"));
		printf(" %d\n", printf("%--------*.s", i, "101"));
		printf(" %d\n", printf("%--------*.s", i, "1001"));
		printf(" %d\n", printf("%--------*.s", i, "10001"));
		printf(" %d\n", printf("%--------*.s", i, "100001"));
		printf(" %d\n", printf("%--------*.s", i, "1000001"));
		printf(" %d\n", printf("%--------*.s", i, "10000001"));
		printf(" %d\n", printf("%--------*.s", i, "100000001"));
		printf(" %d\n", printf("%--------*.s", i, "1000000001"));

		printf("---------------TEST *-------------\n\n");

		printf(" %d\n", printf("%*s", i, NULL));
		printf(" %d\n", printf("%*s", i, ""));
		printf(" %d\n", printf("%*s", i, "1"));
		printf(" %d\n", printf("%*s", i, "10"));
		printf(" %d\n", printf("%*s", i, "101"));
		printf(" %d\n", printf("%*s", i, "1001"));
		printf(" %d\n", printf("%*s", i, "10001"));
		printf(" %d\n", printf("%*s", i, "100001"));
		printf(" %d\n", printf("%*s", i, "1000001"));
		printf(" %d\n", printf("%*s", i, "10000001"));
		printf(" %d\n", printf("%*s", i, "100000001"));
		printf(" %d\n", printf("%*s", i, "1000000001"));

		printf(" %d\n", printf("%-*s", i, NULL));
		printf(" %d\n", printf("%-*s", i, ""));
		printf(" %d\n", printf("%-*s", i, "1"));
		printf(" %d\n", printf("%-*s", i, "10"));
		printf(" %d\n", printf("%-*s", i, "101"));
		printf(" %d\n", printf("%-*s", i, "1001"));
		printf(" %d\n", printf("%-*s", i, "10001"));
		printf(" %d\n", printf("%-*s", i, "100001"));
		printf(" %d\n", printf("%-*s", i, "1000001"));
		printf(" %d\n", printf("%-*s", i, "10000001"));
		printf(" %d\n", printf("%-*s", i, "100000001"));
		printf(" %d\n", printf("%-*s", i, "1000000001"));

		printf(" %d\n", printf("%--------*s", i, NULL));
		printf(" %d\n", printf("%--------*s", i, ""));
		printf(" %d\n", printf("%--------*s", i, "1"));
		printf(" %d\n", printf("%--------*s", i, "10"));
		printf(" %d\n", printf("%--------*s", i, "101"));
		printf(" %d\n", printf("%--------*s", i, "1001"));
		printf(" %d\n", printf("%--------*s", i, "10001"));
		printf(" %d\n", printf("%--------*s", i, "100001"));
		printf(" %d\n", printf("%--------*s", i, "1000001"));
		printf(" %d\n", printf("%--------*s", i, "10000001"));
		printf(" %d\n", printf("%--------*s", i, "100000001"));
		printf(" %d\n", printf("%--------*s", i, "1000000001"));

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%C----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");

		printf("---------------TEST *-------------\n\n");

		printf(" %d\n", printf("%*c", j, 0));
		printf(" %d\n", printf("%*c", j, -15));
		printf(" %d\n", printf("%*c", j, 256));
		printf(" %d\n", printf("%*c", j, 127));
		printf(" %d\n", printf("%*c", j, '\0'));
		printf(" %d\n", printf("%*c", j, 'A'));
		printf(" %d\n", printf("%*c", j, 42));

		printf(" %d\n", printf("%-*c", j, 0));
		printf(" %d\n", printf("%-*c", j, -15));
		printf(" %d\n", printf("%-*c", j, 256));
		printf(" %d\n", printf("%-*c", j, 127));
		printf(" %d\n", printf("%-*c", j, '\0'));
		printf(" %d\n", printf("%-*c", j, 'A'));
		printf(" %d\n", printf("%-*c", j, 42));

		printf(" %d\n", printf("%--------*c", j, 0));
		printf(" %d\n", printf("%--------*c", j, -15));
		printf(" %d\n", printf("%--------*c", j, 256));
		printf(" %d\n", printf("%--------*c", j, 127));
		printf(" %d\n", printf("%--------*c", j, '\0'));
		printf(" %d\n", printf("%--------*c", j, 'A'));
		printf(" %d\n", printf("%--------*c", j, 42));

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%x----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");

		printf("---------------TEST *.*-------------\n\n");
		printf(" %d\n", printf("%*.*x", i, j, 0));
		printf(" %d\n", printf("%*.*x", i, j, 1));
		printf(" %d\n", printf("%*.*x", i, j, 10));
		printf(" %d\n", printf("%*.*x", i, j, 101));
		printf(" %d\n", printf("%*.*x", i, j, 1001));
		printf(" %d\n", printf("%*.*x", i, j, 10001));
		printf(" %d\n", printf("%*.*x", i, j, 100001));
		printf(" %d\n", printf("%*.*x", i, j, 1000001));
		printf(" %d\n", printf("%*.*x", i, j, 10000001));
		printf(" %d\n", printf("%*.*x", i, j, 100000001));
		printf(" %d\n", printf("%*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%-*.*x", i, j, 0));
		printf(" %d\n", printf("%-*.*x", i, j, 1));
		printf(" %d\n", printf("%-*.*x", i, j, 10));
		printf(" %d\n", printf("%-*.*x", i, j, 101));
		printf(" %d\n", printf("%-*.*x", i, j, 1001));
		printf(" %d\n", printf("%-*.*x", i, j, 10001));
		printf(" %d\n", printf("%-*.*x", i, j, 100001));
		printf(" %d\n", printf("%-*.*x", i, j, 1000001));
		printf(" %d\n", printf("%-*.*x", i, j, 10000001));
		printf(" %d\n", printf("%-*.*x", i, j, 100000001));
		printf(" %d\n", printf("%-*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%0*.*x", i, j, 0));
		printf(" %d\n", printf("%0*.*x", i, j, 1));
		printf(" %d\n", printf("%0*.*x", i, j, 10));
		printf(" %d\n", printf("%0*.*x", i, j, 101));
		printf(" %d\n", printf("%0*.*x", i, j, 1001));
		printf(" %d\n", printf("%0*.*x", i, j, 10001));
		printf(" %d\n", printf("%0*.*x", i, j, 100001));
		printf(" %d\n", printf("%0*.*x", i, j, 1000001));
		printf(" %d\n", printf("%0*.*x", i, j, 10000001));
		printf(" %d\n", printf("%0*.*x", i, j, 100000001));
		printf(" %d\n", printf("%0*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%0-*.*x", i, j, 0));
		printf(" %d\n", printf("%0-*.*x", i, j, 1));
		printf(" %d\n", printf("%0-*.*x", i, j, 10));
		printf(" %d\n", printf("%0-*.*x", i, j, 101));
		printf(" %d\n", printf("%0-*.*x", i, j, 1001));
		printf(" %d\n", printf("%0-*.*x", i, j, 10001));
		printf(" %d\n", printf("%0-*.*x", i, j, 100001));
		printf(" %d\n", printf("%0-*.*x", i, j, 1000001));
		printf(" %d\n", printf("%0-*.*x", i, j, 10000001));
		printf(" %d\n", printf("%0-*.*x", i, j, 100000001));
		printf(" %d\n", printf("%0-*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%-0*.*x", i, j, 0));
		printf(" %d\n", printf("%-0*.*x", i, j, 1));
		printf(" %d\n", printf("%-0*.*x", i, j, 10));
		printf(" %d\n", printf("%-0*.*x", i, j, 101));
		printf(" %d\n", printf("%-0*.*x", i, j, 1001));
		printf(" %d\n", printf("%-0*.*x", i, j, 10001));
		printf(" %d\n", printf("%-0*.*x", i, j, 100001));
		printf(" %d\n", printf("%-0*.*x", i, j, 1000001));
		printf(" %d\n", printf("%-0*.*x", i, j, 10000001));
		printf(" %d\n", printf("%-0*.*x", i, j, 100000001));
		printf(" %d\n", printf("%-0*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%--------*.*x", i, j, 0));
		printf(" %d\n", printf("%--------*.*x", i, j, 1));
		printf(" %d\n", printf("%--------*.*x", i, j, 10));
		printf(" %d\n", printf("%--------*.*x", i, j, 101));
		printf(" %d\n", printf("%--------*.*x", i, j, 1001));
		printf(" %d\n", printf("%--------*.*x", i, j, 10001));
		printf(" %d\n", printf("%--------*.*x", i, j, 100001));
		printf(" %d\n", printf("%--------*.*x", i, j, 1000001));
		printf(" %d\n", printf("%--------*.*x", i, j, 10000001));
		printf(" %d\n", printf("%--------*.*x", i, j, 100000001));
		printf(" %d\n", printf("%--------*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%0000000*.*x", i, j, 0));
		printf(" %d\n", printf("%0000000*.*x", i, j, 1));
		printf(" %d\n", printf("%0000000*.*x", i, j, 10));
		printf(" %d\n", printf("%0000000*.*x", i, j, 101));
		printf(" %d\n", printf("%0000000*.*x", i, j, 1001));
		printf(" %d\n", printf("%0000000*.*x", i, j, 10001));
		printf(" %d\n", printf("%0000000*.*x", i, j, 100001));
		printf(" %d\n", printf("%0000000*.*x", i, j, 1000001));
		printf(" %d\n", printf("%0000000*.*x", i, j, 10000001));
		printf(" %d\n", printf("%0000000*.*x", i, j, 100000001));
		printf(" %d\n", printf("%0000000*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%0000000------*.*x", i, j, 0));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 1));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 10));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 101));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 1001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 10001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 100001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 1000001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 10000001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, 100000001));
		printf(" %d\n", printf("%0000000------*.*x", i, j, -1000000001));

		printf(" %d\n", printf("%------0000000*.*x", i, j, 0));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 1));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 10));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 101));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 1001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 10001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 100001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 1000001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 10000001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, 100000001));
		printf(" %d\n", printf("%------0000000*.*x", i, j, -1000000001));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*x", i, 0));
		printf(" %d\n", printf("%.*x", i, 1));
		printf(" %d\n", printf("%.*x", i, 10));
		printf(" %d\n", printf("%.*x", i, 101));
		printf(" %d\n", printf("%.*x", i, 1001));
		printf(" %d\n", printf("%.*x", i, 10001));
		printf(" %d\n", printf("%.*x", i, 100001));
		printf(" %d\n", printf("%.*x", i, 1000001));
		printf(" %d\n", printf("%.*x", i, 10000001));
		printf(" %d\n", printf("%.*x", i, 100000001));
		printf(" %d\n", printf("%.*x", i, -1000000001));

		printf(" %d\n", printf("%-.*x", i, 0));
		printf(" %d\n", printf("%-.*x", i, 1));
		printf(" %d\n", printf("%-.*x", i, 10));
		printf(" %d\n", printf("%-.*x", i, 101));
		printf(" %d\n", printf("%-.*x", i, 1001));
		printf(" %d\n", printf("%-.*x", i, 10001));
		printf(" %d\n", printf("%-.*x", i, 100001));
		printf(" %d\n", printf("%-.*x", i, 1000001));
		printf(" %d\n", printf("%-.*x", i, 10000001));
		printf(" %d\n", printf("%-.*x", i, 100000001));
		printf(" %d\n", printf("%-.*x", i, -1000000001));

		printf(" %d\n", printf("%0.*x", i, 0));
		printf(" %d\n", printf("%0.*x", i, 1));
		printf(" %d\n", printf("%0.*x", i, 10));
		printf(" %d\n", printf("%0.*x", i, 101));
		printf(" %d\n", printf("%0.*x", i, 1001));
		printf(" %d\n", printf("%0.*x", i, 10001));
		printf(" %d\n", printf("%0.*x", i, 100001));
		printf(" %d\n", printf("%0.*x", i, 1000001));
		printf(" %d\n", printf("%0.*x", i, 10000001));
		printf(" %d\n", printf("%0.*x", i, 100000001));
		printf(" %d\n", printf("%0.*x", i, -1000000001));

		printf(" %d\n", printf("%0-.*x", i, 0));
		printf(" %d\n", printf("%0-.*x", i, 1));
		printf(" %d\n", printf("%0-.*x", i, 10));
		printf(" %d\n", printf("%0-.*x", i, 101));
		printf(" %d\n", printf("%0-.*x", i, 1001));
		printf(" %d\n", printf("%0-.*x", i, 10001));
		printf(" %d\n", printf("%0-.*x", i, 100001));
		printf(" %d\n", printf("%0-.*x", i, 1000001));
		printf(" %d\n", printf("%0-.*x", i, 10000001));
		printf(" %d\n", printf("%0-.*x", i, 100000001));
		printf(" %d\n", printf("%0-.*x", i, -1000000001));

		printf(" %d\n", printf("%-0.*x", i, 0));
		printf(" %d\n", printf("%-0.*x", i, 1));
		printf(" %d\n", printf("%-0.*x", i, 10));
		printf(" %d\n", printf("%-0.*x", i, 101));
		printf(" %d\n", printf("%-0.*x", i, 1001));
		printf(" %d\n", printf("%-0.*x", i, 10001));
		printf(" %d\n", printf("%-0.*x", i, 100001));
		printf(" %d\n", printf("%-0.*x", i, 1000001));
		printf(" %d\n", printf("%-0.*x", i, 10000001));
		printf(" %d\n", printf("%-0.*x", i, 100000001));
		printf(" %d\n", printf("%-0.*x", i, -1000000001));

		printf(" %d\n", printf("%--------.*x", i, 0));
		printf(" %d\n", printf("%--------.*x", i, 1));
		printf(" %d\n", printf("%--------.*x", i, 10));
		printf(" %d\n", printf("%--------.*x", i, 101));
		printf(" %d\n", printf("%--------.*x", i, 1001));
		printf(" %d\n", printf("%--------.*x", i, 10001));
		printf(" %d\n", printf("%--------.*x", i, 100001));
		printf(" %d\n", printf("%--------.*x", i, 1000001));
		printf(" %d\n", printf("%--------.*x", i, 10000001));
		printf(" %d\n", printf("%--------.*x", i, 100000001));
		printf(" %d\n", printf("%--------.*x", i, -1000000001));

		printf(" %d\n", printf("%0000000.*x", i, 0));
		printf(" %d\n", printf("%0000000.*x", i, 1));
		printf(" %d\n", printf("%0000000.*x", i, 10));
		printf(" %d\n", printf("%0000000.*x", i, 101));
		printf(" %d\n", printf("%0000000.*x", i, 1001));
		printf(" %d\n", printf("%0000000.*x", i, 10001));
		printf(" %d\n", printf("%0000000.*x", i, 100001));
		printf(" %d\n", printf("%0000000.*x", i, 1000001));
		printf(" %d\n", printf("%0000000.*x", i, 10000001));
		printf(" %d\n", printf("%0000000.*x", i, 100000001));
		printf(" %d\n", printf("%0000000.*x", i, -1000000001));

		printf(" %d\n", printf("%0000000------.*x", i, 0));
		printf(" %d\n", printf("%0000000------.*x", i, 1));
		printf(" %d\n", printf("%0000000------.*x", i, 10));
		printf(" %d\n", printf("%0000000------.*x", i, 101));
		printf(" %d\n", printf("%0000000------.*x", i, 1001));
		printf(" %d\n", printf("%0000000------.*x", i, 10001));
		printf(" %d\n", printf("%0000000------.*x", i, 100001));
		printf(" %d\n", printf("%0000000------.*x", i, 1000001));
		printf(" %d\n", printf("%0000000------.*x", i, 10000001));
		printf(" %d\n", printf("%0000000------.*x", i, 100000001));
		printf(" %d\n", printf("%0000000------.*x", i, -1000000001));

		printf(" %d\n", printf("%------0000000.*x", i, 0));
		printf(" %d\n", printf("%------0000000.*x", i, 1));
		printf(" %d\n", printf("%------0000000.*x", i, 10));
		printf(" %d\n", printf("%------0000000.*x", i, 101));
		printf(" %d\n", printf("%------0000000.*x", i, 1001));
		printf(" %d\n", printf("%------0000000.*x", i, 10001));
		printf(" %d\n", printf("%------0000000.*x", i, 100001));
		printf(" %d\n", printf("%------0000000.*x", i, 1000001));
		printf(" %d\n", printf("%------0000000.*x", i, 10000001));
		printf(" %d\n", printf("%------0000000.*x", i, 100000001));
		printf(" %d\n", printf("%------0000000.*x", i, -1000000001));


		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.x", i, 0));
		printf(" %d\n", printf("%*.x", i, 1));
		printf(" %d\n", printf("%*.x", i, 10));
		printf(" %d\n", printf("%*.x", i, 101));
		printf(" %d\n", printf("%*.x", i, 1001));
		printf(" %d\n", printf("%*.x", i, 10001));
		printf(" %d\n", printf("%*.x", i, 100001));
		printf(" %d\n", printf("%*.x", i, 1000001));
		printf(" %d\n", printf("%*.x", i, 10000001));
		printf(" %d\n", printf("%*.x", i, 100000001));
		printf(" %d\n", printf("%*.x", i, -1000000001));

		printf(" %d\n", printf("%-*.x", i, 0));
		printf(" %d\n", printf("%-*.x", i, 1));
		printf(" %d\n", printf("%-*.x", i, 10));
		printf(" %d\n", printf("%-*.x", i, 101));
		printf(" %d\n", printf("%-*.x", i, 1001));
		printf(" %d\n", printf("%-*.x", i, 10001));
		printf(" %d\n", printf("%-*.x", i, 100001));
		printf(" %d\n", printf("%-*.x", i, 1000001));
		printf(" %d\n", printf("%-*.x", i, 10000001));
		printf(" %d\n", printf("%-*.x", i, 100000001));
		printf(" %d\n", printf("%-*.x", i, -1000000001));

		printf(" %d\n", printf("%0*.x", i, 0));
		printf(" %d\n", printf("%0*.x", i, 1));
		printf(" %d\n", printf("%0*.x", i, 10));
		printf(" %d\n", printf("%0*.x", i, 101));
		printf(" %d\n", printf("%0*.x", i, 1001));
		printf(" %d\n", printf("%0*.x", i, 10001));
		printf(" %d\n", printf("%0*.x", i, 100001));
		printf(" %d\n", printf("%0*.x", i, 1000001));
		printf(" %d\n", printf("%0*.x", i, 10000001));
		printf(" %d\n", printf("%0*.x", i, 100000001));
		printf(" %d\n", printf("%0*.x", i, -1000000001));

		printf(" %d\n", printf("%0-*.x", i, 0));
		printf(" %d\n", printf("%0-*.x", i, 1));
		printf(" %d\n", printf("%0-*.x", i, 10));
		printf(" %d\n", printf("%0-*.x", i, 101));
		printf(" %d\n", printf("%0-*.x", i, 1001));
		printf(" %d\n", printf("%0-*.x", i, 10001));
		printf(" %d\n", printf("%0-*.x", i, 100001));
		printf(" %d\n", printf("%0-*.x", i, 1000001));
		printf(" %d\n", printf("%0-*.x", i, 10000001));
		printf(" %d\n", printf("%0-*.x", i, 100000001));
		printf(" %d\n", printf("%0-*.x", i, -1000000001));

		printf(" %d\n", printf("%-0*.x", i, 0));
		printf(" %d\n", printf("%-0*.x", i, 1));
		printf(" %d\n", printf("%-0*.x", i, 10));
		printf(" %d\n", printf("%-0*.x", i, 101));
		printf(" %d\n", printf("%-0*.x", i, 1001));
		printf(" %d\n", printf("%-0*.x", i, 10001));
		printf(" %d\n", printf("%-0*.x", i, 100001));
		printf(" %d\n", printf("%-0*.x", i, 1000001));
		printf(" %d\n", printf("%-0*.x", i, 10000001));
		printf(" %d\n", printf("%-0*.x", i, 100000001));
		printf(" %d\n", printf("%-0*.x", i, -1000000001));

		printf(" %d\n", printf("%--------*.x", i, 0));
		printf(" %d\n", printf("%--------*.x", i, 1));
		printf(" %d\n", printf("%--------*.x", i, 10));
		printf(" %d\n", printf("%--------*.x", i, 101));
		printf(" %d\n", printf("%--------*.x", i, 1001));
		printf(" %d\n", printf("%--------*.x", i, 10001));
		printf(" %d\n", printf("%--------*.x", i, 100001));
		printf(" %d\n", printf("%--------*.x", i, 1000001));
		printf(" %d\n", printf("%--------*.x", i, 10000001));
		printf(" %d\n", printf("%--------*.x", i, 100000001));
		printf(" %d\n", printf("%--------*.x", i, -1000000001));

		printf(" %d\n", printf("%0000000*.x", i, 0));
		printf(" %d\n", printf("%0000000*.x", i, 1));
		printf(" %d\n", printf("%0000000*.x", i, 10));
		printf(" %d\n", printf("%0000000*.x", i, 101));
		printf(" %d\n", printf("%0000000*.x", i, 1001));
		printf(" %d\n", printf("%0000000*.x", i, 10001));
		printf(" %d\n", printf("%0000000*.x", i, 100001));
		printf(" %d\n", printf("%0000000*.x", i, 1000001));
		printf(" %d\n", printf("%0000000*.x", i, 10000001));
		printf(" %d\n", printf("%0000000*.x", i, 100000001));
		printf(" %d\n", printf("%0000000*.x", i, -1000000001));

		printf(" %d\n", printf("%0000000------*.x", i, 0));
		printf(" %d\n", printf("%0000000------*.x", i, 1));
		printf(" %d\n", printf("%0000000------*.x", i, 10));
		printf(" %d\n", printf("%0000000------*.x", i, 101));
		printf(" %d\n", printf("%0000000------*.x", i, 1001));
		printf(" %d\n", printf("%0000000------*.x", i, 10001));
		printf(" %d\n", printf("%0000000------*.x", i, 100001));
		printf(" %d\n", printf("%0000000------*.x", i, 1000001));
		printf(" %d\n", printf("%0000000------*.x", i, 10000001));
		printf(" %d\n", printf("%0000000------*.x", i, 100000001));
		printf(" %d\n", printf("%0000000------*.x", i, -1000000001));

		printf(" %d\n", printf("%------0000000*.x", i, 0));
		printf(" %d\n", printf("%------0000000*.x", i, 1));
		printf(" %d\n", printf("%------0000000*.x", i, 10));
		printf(" %d\n", printf("%------0000000*.x", i, 101));
		printf(" %d\n", printf("%------0000000*.x", i, 1001));
		printf(" %d\n", printf("%------0000000*.x", i, 10001));
		printf(" %d\n", printf("%------0000000*.x", i, 100001));
		printf(" %d\n", printf("%------0000000*.x", i, 1000001));
		printf(" %d\n", printf("%------0000000*.x", i, 10000001));
		printf(" %d\n", printf("%------0000000*.x", i, 100000001));
		printf(" %d\n", printf("%------0000000*.x", i, -1000000001));

		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*x", i, 0));
		printf(" %d\n", printf("%*x", i, 1));
		printf(" %d\n", printf("%*x", i, 10));
		printf(" %d\n", printf("%*x", i, 101));
		printf(" %d\n", printf("%*x", i, 1001));
		printf(" %d\n", printf("%*x", i, 10001));
		printf(" %d\n", printf("%*x", i, 100001));
		printf(" %d\n", printf("%*x", i, 1000001));
		printf(" %d\n", printf("%*x", i, 10000001));
		printf(" %d\n", printf("%*x", i, 100000001));
		printf(" %d\n", printf("%*x", i, -1000000001));

		printf(" %d\n", printf("%-*x", i, 0));
		printf(" %d\n", printf("%-*x", i, 1));
		printf(" %d\n", printf("%-*x", i, 10));
		printf(" %d\n", printf("%-*x", i, 101));
		printf(" %d\n", printf("%-*x", i, 1001));
		printf(" %d\n", printf("%-*x", i, 10001));
		printf(" %d\n", printf("%-*x", i, 100001));
		printf(" %d\n", printf("%-*x", i, 1000001));
		printf(" %d\n", printf("%-*x", i, 10000001));
		printf(" %d\n", printf("%-*x", i, 100000001));
		printf(" %d\n", printf("%-*x", i, -1000000001));

		printf(" %d\n", printf("%0*x", i, 0));
		printf(" %d\n", printf("%0*x", i, 1));
		printf(" %d\n", printf("%0*x", i, 10));
		printf(" %d\n", printf("%0*x", i, 101));
		printf(" %d\n", printf("%0*x", i, 1001));
		printf(" %d\n", printf("%0*x", i, 10001));
		printf(" %d\n", printf("%0*x", i, 100001));
		printf(" %d\n", printf("%0*x", i, 1000001));
		printf(" %d\n", printf("%0*x", i, 10000001));
		printf(" %d\n", printf("%0*x", i, 100000001));
		printf(" %d\n", printf("%0*x", i, -1000000001));

		printf(" %d\n", printf("%0-*x", i, 0));
		printf(" %d\n", printf("%0-*x", i, 1));
		printf(" %d\n", printf("%0-*x", i, 10));
		printf(" %d\n", printf("%0-*x", i, 101));
		printf(" %d\n", printf("%0-*x", i, 1001));
		printf(" %d\n", printf("%0-*x", i, 10001));
		printf(" %d\n", printf("%0-*x", i, 100001));
		printf(" %d\n", printf("%0-*x", i, 1000001));
		printf(" %d\n", printf("%0-*x", i, 10000001));
		printf(" %d\n", printf("%0-*x", i, 100000001));
		printf(" %d\n", printf("%0-*x", i, -1000000001));

		printf(" %d\n", printf("%-0*x", i, 0));
		printf(" %d\n", printf("%-0*x", i, 1));
		printf(" %d\n", printf("%-0*x", i, 10));
		printf(" %d\n", printf("%-0*x", i, 101));
		printf(" %d\n", printf("%-0*x", i, 1001));
		printf(" %d\n", printf("%-0*x", i, 10001));
		printf(" %d\n", printf("%-0*x", i, 100001));
		printf(" %d\n", printf("%-0*x", i, 1000001));
		printf(" %d\n", printf("%-0*x", i, 10000001));
		printf(" %d\n", printf("%-0*x", i, 100000001));
		printf(" %d\n", printf("%-0*x", i, -1000000001));

		printf(" %d\n", printf("%--------*x", i, 0));
		printf(" %d\n", printf("%--------*x", i, 1));
		printf(" %d\n", printf("%--------*x", i, 10));
		printf(" %d\n", printf("%--------*x", i, 101));
		printf(" %d\n", printf("%--------*x", i, 1001));
		printf(" %d\n", printf("%--------*x", i, 10001));
		printf(" %d\n", printf("%--------*x", i, 100001));
		printf(" %d\n", printf("%--------*x", i, 1000001));
		printf(" %d\n", printf("%--------*x", i, 10000001));
		printf(" %d\n", printf("%--------*x", i, 100000001));
		printf(" %d\n", printf("%--------*x", i, -1000000001));

		printf(" %d\n", printf("%0000000*x", i, 0));
		printf(" %d\n", printf("%0000000*x", i, 1));
		printf(" %d\n", printf("%0000000*x", i, 10));
		printf(" %d\n", printf("%0000000*x", i, 101));
		printf(" %d\n", printf("%0000000*x", i, 1001));
		printf(" %d\n", printf("%0000000*x", i, 10001));
		printf(" %d\n", printf("%0000000*x", i, 100001));
		printf(" %d\n", printf("%0000000*x", i, 1000001));
		printf(" %d\n", printf("%0000000*x", i, 10000001));
		printf(" %d\n", printf("%0000000*x", i, 100000001));
		printf(" %d\n", printf("%0000000*x", i, -1000000001));

		printf(" %d\n", printf("%0000000------*x", i, 0));
		printf(" %d\n", printf("%0000000------*x", i, 1));
		printf(" %d\n", printf("%0000000------*x", i, 10));
		printf(" %d\n", printf("%0000000------*x", i, 101));
		printf(" %d\n", printf("%0000000------*x", i, 1001));
		printf(" %d\n", printf("%0000000------*x", i, 10001));
		printf(" %d\n", printf("%0000000------*x", i, 100001));
		printf(" %d\n", printf("%0000000------*x", i, 1000001));
		printf(" %d\n", printf("%0000000------*x", i, 10000001));
		printf(" %d\n", printf("%0000000------*x", i, 100000001));
		printf(" %d\n", printf("%0000000------*x", i, -1000000001));

		printf(" %d\n", printf("%------0000000*x", i, 0));
		printf(" %d\n", printf("%------0000000*x", i, 1));
		printf(" %d\n", printf("%------0000000*x", i, 10));
		printf(" %d\n", printf("%------0000000*x", i, 101));
		printf(" %d\n", printf("%------0000000*x", i, 1001));
		printf(" %d\n", printf("%------0000000*x", i, 10001));
		printf(" %d\n", printf("%------0000000*x", i, 100001));
		printf(" %d\n", printf("%------0000000*x", i, 1000001));
		printf(" %d\n", printf("%------0000000*x", i, 10000001));
		printf(" %d\n", printf("%------0000000*x", i, 100000001));
		printf(" %d\n", printf("%------0000000*x", i, -1000000001));

		printf("\n");


		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%X----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");


		printf("---------------TEST *.*-------------\n\n");
		printf(" %d\n", printf("%*.*X", i, j, 0));
		printf(" %d\n", printf("%*.*X", i, j, 1));
		printf(" %d\n", printf("%*.*X", i, j, 10));
		printf(" %d\n", printf("%*.*X", i, j, 101));
		printf(" %d\n", printf("%*.*X", i, j, 1001));
		printf(" %d\n", printf("%*.*X", i, j, 10001));
		printf(" %d\n", printf("%*.*X", i, j, 100001));
		printf(" %d\n", printf("%*.*X", i, j, 1000001));
		printf(" %d\n", printf("%*.*X", i, j, 10000001));
		printf(" %d\n", printf("%*.*X", i, j, 100000001));
		printf(" %d\n", printf("%*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%-*.*X", i, j, 0));
		printf(" %d\n", printf("%-*.*X", i, j, 1));
		printf(" %d\n", printf("%-*.*X", i, j, 10));
		printf(" %d\n", printf("%-*.*X", i, j, 101));
		printf(" %d\n", printf("%-*.*X", i, j, 1001));
		printf(" %d\n", printf("%-*.*X", i, j, 10001));
		printf(" %d\n", printf("%-*.*X", i, j, 100001));
		printf(" %d\n", printf("%-*.*X", i, j, 1000001));
		printf(" %d\n", printf("%-*.*X", i, j, 10000001));
		printf(" %d\n", printf("%-*.*X", i, j, 100000001));
		printf(" %d\n", printf("%-*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%0*.*X", i, j, 0));
		printf(" %d\n", printf("%0*.*X", i, j, 1));
		printf(" %d\n", printf("%0*.*X", i, j, 10));
		printf(" %d\n", printf("%0*.*X", i, j, 101));
		printf(" %d\n", printf("%0*.*X", i, j, 1001));
		printf(" %d\n", printf("%0*.*X", i, j, 10001));
		printf(" %d\n", printf("%0*.*X", i, j, 100001));
		printf(" %d\n", printf("%0*.*X", i, j, 1000001));
		printf(" %d\n", printf("%0*.*X", i, j, 10000001));
		printf(" %d\n", printf("%0*.*X", i, j, 100000001));
		printf(" %d\n", printf("%0*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%0-*.*X", i, j, 0));
		printf(" %d\n", printf("%0-*.*X", i, j, 1));
		printf(" %d\n", printf("%0-*.*X", i, j, 10));
		printf(" %d\n", printf("%0-*.*X", i, j, 101));
		printf(" %d\n", printf("%0-*.*X", i, j, 1001));
		printf(" %d\n", printf("%0-*.*X", i, j, 10001));
		printf(" %d\n", printf("%0-*.*X", i, j, 100001));
		printf(" %d\n", printf("%0-*.*X", i, j, 1000001));
		printf(" %d\n", printf("%0-*.*X", i, j, 10000001));
		printf(" %d\n", printf("%0-*.*X", i, j, 100000001));
		printf(" %d\n", printf("%0-*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%-0*.*X", i, j, 0));
		printf(" %d\n", printf("%-0*.*X", i, j, 1));
		printf(" %d\n", printf("%-0*.*X", i, j, 10));
		printf(" %d\n", printf("%-0*.*X", i, j, 101));
		printf(" %d\n", printf("%-0*.*X", i, j, 1001));
		printf(" %d\n", printf("%-0*.*X", i, j, 10001));
		printf(" %d\n", printf("%-0*.*X", i, j, 100001));
		printf(" %d\n", printf("%-0*.*X", i, j, 1000001));
		printf(" %d\n", printf("%-0*.*X", i, j, 10000001));
		printf(" %d\n", printf("%-0*.*X", i, j, 100000001));
		printf(" %d\n", printf("%-0*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%--------*.*X", i, j, 0));
		printf(" %d\n", printf("%--------*.*X", i, j, 1));
		printf(" %d\n", printf("%--------*.*X", i, j, 10));
		printf(" %d\n", printf("%--------*.*X", i, j, 101));
		printf(" %d\n", printf("%--------*.*X", i, j, 1001));
		printf(" %d\n", printf("%--------*.*X", i, j, 10001));
		printf(" %d\n", printf("%--------*.*X", i, j, 100001));
		printf(" %d\n", printf("%--------*.*X", i, j, 1000001));
		printf(" %d\n", printf("%--------*.*X", i, j, 10000001));
		printf(" %d\n", printf("%--------*.*X", i, j, 100000001));
		printf(" %d\n", printf("%--------*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%0000000*.*X", i, j, 0));
		printf(" %d\n", printf("%0000000*.*X", i, j, 1));
		printf(" %d\n", printf("%0000000*.*X", i, j, 10));
		printf(" %d\n", printf("%0000000*.*X", i, j, 101));
		printf(" %d\n", printf("%0000000*.*X", i, j, 1001));
		printf(" %d\n", printf("%0000000*.*X", i, j, 10001));
		printf(" %d\n", printf("%0000000*.*X", i, j, 100001));
		printf(" %d\n", printf("%0000000*.*X", i, j, 1000001));
		printf(" %d\n", printf("%0000000*.*X", i, j, 10000001));
		printf(" %d\n", printf("%0000000*.*X", i, j, 100000001));
		printf(" %d\n", printf("%0000000*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%0000000------*.*X", i, j, 0));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 1));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 10));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 101));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 1001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 10001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 100001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 1000001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 10000001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, 100000001));
		printf(" %d\n", printf("%0000000------*.*X", i, j, -1000000001));

		printf(" %d\n", printf("%------0000000*.*X", i, j, 0));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 1));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 10));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 101));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 1001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 10001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 100001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 1000001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 10000001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, 100000001));
		printf(" %d\n", printf("%------0000000*.*X", i, j, -1000000001));

		printf("\n");

		printf("---------------TEST .*-------------\n\n");

		printf(" %d\n", printf("%.*X", i, 0));
		printf(" %d\n", printf("%.*X", i, 1));
		printf(" %d\n", printf("%.*X", i, 10));
		printf(" %d\n", printf("%.*X", i, 101));
		printf(" %d\n", printf("%.*X", i, 1001));
		printf(" %d\n", printf("%.*X", i, 10001));
		printf(" %d\n", printf("%.*X", i, 100001));
		printf(" %d\n", printf("%.*X", i, 1000001));
		printf(" %d\n", printf("%.*X", i, 10000001));
		printf(" %d\n", printf("%.*X", i, 100000001));
		printf(" %d\n", printf("%.*X", i, -1000000001));

		printf(" %d\n", printf("%-.*X", i, 0));
		printf(" %d\n", printf("%-.*X", i, 1));
		printf(" %d\n", printf("%-.*X", i, 10));
		printf(" %d\n", printf("%-.*X", i, 101));
		printf(" %d\n", printf("%-.*X", i, 1001));
		printf(" %d\n", printf("%-.*X", i, 10001));
		printf(" %d\n", printf("%-.*X", i, 100001));
		printf(" %d\n", printf("%-.*X", i, 1000001));
		printf(" %d\n", printf("%-.*X", i, 10000001));
		printf(" %d\n", printf("%-.*X", i, 100000001));
		printf(" %d\n", printf("%-.*X", i, -1000000001));

		printf(" %d\n", printf("%0.*X", i, 0));
		printf(" %d\n", printf("%0.*X", i, 1));
		printf(" %d\n", printf("%0.*X", i, 10));
		printf(" %d\n", printf("%0.*X", i, 101));
		printf(" %d\n", printf("%0.*X", i, 1001));
		printf(" %d\n", printf("%0.*X", i, 10001));
		printf(" %d\n", printf("%0.*X", i, 100001));
		printf(" %d\n", printf("%0.*X", i, 1000001));
		printf(" %d\n", printf("%0.*X", i, 10000001));
		printf(" %d\n", printf("%0.*X", i, 100000001));
		printf(" %d\n", printf("%0.*X", i, -1000000001));

		printf(" %d\n", printf("%0-.*X", i, 0));
		printf(" %d\n", printf("%0-.*X", i, 1));
		printf(" %d\n", printf("%0-.*X", i, 10));
		printf(" %d\n", printf("%0-.*X", i, 101));
		printf(" %d\n", printf("%0-.*X", i, 1001));
		printf(" %d\n", printf("%0-.*X", i, 10001));
		printf(" %d\n", printf("%0-.*X", i, 100001));
		printf(" %d\n", printf("%0-.*X", i, 1000001));
		printf(" %d\n", printf("%0-.*X", i, 10000001));
		printf(" %d\n", printf("%0-.*X", i, 100000001));
		printf(" %d\n", printf("%0-.*X", i, -1000000001));

		printf(" %d\n", printf("%-0.*X", i, 0));
		printf(" %d\n", printf("%-0.*X", i, 1));
		printf(" %d\n", printf("%-0.*X", i, 10));
		printf(" %d\n", printf("%-0.*X", i, 101));
		printf(" %d\n", printf("%-0.*X", i, 1001));
		printf(" %d\n", printf("%-0.*X", i, 10001));
		printf(" %d\n", printf("%-0.*X", i, 100001));
		printf(" %d\n", printf("%-0.*X", i, 1000001));
		printf(" %d\n", printf("%-0.*X", i, 10000001));
		printf(" %d\n", printf("%-0.*X", i, 100000001));
		printf(" %d\n", printf("%-0.*X", i, -1000000001));

		printf(" %d\n", printf("%--------.*X", i, 0));
		printf(" %d\n", printf("%--------.*X", i, 1));
		printf(" %d\n", printf("%--------.*X", i, 10));
		printf(" %d\n", printf("%--------.*X", i, 101));
		printf(" %d\n", printf("%--------.*X", i, 1001));
		printf(" %d\n", printf("%--------.*X", i, 10001));
		printf(" %d\n", printf("%--------.*X", i, 100001));
		printf(" %d\n", printf("%--------.*X", i, 1000001));
		printf(" %d\n", printf("%--------.*X", i, 10000001));
		printf(" %d\n", printf("%--------.*X", i, 100000001));
		printf(" %d\n", printf("%--------.*X", i, -1000000001));

		printf(" %d\n", printf("%0000000.*X", i, 0));
		printf(" %d\n", printf("%0000000.*X", i, 1));
		printf(" %d\n", printf("%0000000.*X", i, 10));
		printf(" %d\n", printf("%0000000.*X", i, 101));
		printf(" %d\n", printf("%0000000.*X", i, 1001));
		printf(" %d\n", printf("%0000000.*X", i, 10001));
		printf(" %d\n", printf("%0000000.*X", i, 100001));
		printf(" %d\n", printf("%0000000.*X", i, 1000001));
		printf(" %d\n", printf("%0000000.*X", i, 10000001));
		printf(" %d\n", printf("%0000000.*X", i, 100000001));
		printf(" %d\n", printf("%0000000.*X", i, -1000000001));

		printf(" %d\n", printf("%0000000------.*X", i, 0));
		printf(" %d\n", printf("%0000000------.*X", i, 1));
		printf(" %d\n", printf("%0000000------.*X", i, 10));
		printf(" %d\n", printf("%0000000------.*X", i, 101));
		printf(" %d\n", printf("%0000000------.*X", i, 1001));
		printf(" %d\n", printf("%0000000------.*X", i, 10001));
		printf(" %d\n", printf("%0000000------.*X", i, 100001));
		printf(" %d\n", printf("%0000000------.*X", i, 1000001));
		printf(" %d\n", printf("%0000000------.*X", i, 10000001));
		printf(" %d\n", printf("%0000000------.*X", i, 100000001));
		printf(" %d\n", printf("%0000000------.*X", i, -1000000001));

		printf(" %d\n", printf("%------0000000.*X", i, 0));
		printf(" %d\n", printf("%------0000000.*X", i, 1));
		printf(" %d\n", printf("%------0000000.*X", i, 10));
		printf(" %d\n", printf("%------0000000.*X", i, 101));
		printf(" %d\n", printf("%------0000000.*X", i, 1001));
		printf(" %d\n", printf("%------0000000.*X", i, 10001));
		printf(" %d\n", printf("%------0000000.*X", i, 100001));
		printf(" %d\n", printf("%------0000000.*X", i, 1000001));
		printf(" %d\n", printf("%------0000000.*X", i, 10000001));
		printf(" %d\n", printf("%------0000000.*X", i, 100000001));
		printf(" %d\n", printf("%------0000000.*X", i, -1000000001));


		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.X", i, 0));
		printf(" %d\n", printf("%*.X", i, 1));
		printf(" %d\n", printf("%*.X", i, 10));
		printf(" %d\n", printf("%*.X", i, 101));
		printf(" %d\n", printf("%*.X", i, 1001));
		printf(" %d\n", printf("%*.X", i, 10001));
		printf(" %d\n", printf("%*.X", i, 100001));
		printf(" %d\n", printf("%*.X", i, 1000001));
		printf(" %d\n", printf("%*.X", i, 10000001));
		printf(" %d\n", printf("%*.X", i, 100000001));
		printf(" %d\n", printf("%*.X", i, -1000000001));

		printf(" %d\n", printf("%-*.X", i, 0));
		printf(" %d\n", printf("%-*.X", i, 1));
		printf(" %d\n", printf("%-*.X", i, 10));
		printf(" %d\n", printf("%-*.X", i, 101));
		printf(" %d\n", printf("%-*.X", i, 1001));
		printf(" %d\n", printf("%-*.X", i, 10001));
		printf(" %d\n", printf("%-*.X", i, 100001));
		printf(" %d\n", printf("%-*.X", i, 1000001));
		printf(" %d\n", printf("%-*.X", i, 10000001));
		printf(" %d\n", printf("%-*.X", i, 100000001));
		printf(" %d\n", printf("%-*.X", i, -1000000001));

		printf(" %d\n", printf("%0*.X", i, 0));
		printf(" %d\n", printf("%0*.X", i, 1));
		printf(" %d\n", printf("%0*.X", i, 10));
		printf(" %d\n", printf("%0*.X", i, 101));
		printf(" %d\n", printf("%0*.X", i, 1001));
		printf(" %d\n", printf("%0*.X", i, 10001));
		printf(" %d\n", printf("%0*.X", i, 100001));
		printf(" %d\n", printf("%0*.X", i, 1000001));
		printf(" %d\n", printf("%0*.X", i, 10000001));
		printf(" %d\n", printf("%0*.X", i, 100000001));
		printf(" %d\n", printf("%0*.X", i, -1000000001));

		printf(" %d\n", printf("%0-*.X", i, 0));
		printf(" %d\n", printf("%0-*.X", i, 1));
		printf(" %d\n", printf("%0-*.X", i, 10));
		printf(" %d\n", printf("%0-*.X", i, 101));
		printf(" %d\n", printf("%0-*.X", i, 1001));
		printf(" %d\n", printf("%0-*.X", i, 10001));
		printf(" %d\n", printf("%0-*.X", i, 100001));
		printf(" %d\n", printf("%0-*.X", i, 1000001));
		printf(" %d\n", printf("%0-*.X", i, 10000001));
		printf(" %d\n", printf("%0-*.X", i, 100000001));
		printf(" %d\n", printf("%0-*.X", i, -1000000001));

		printf(" %d\n", printf("%-0*.X", i, 0));
		printf(" %d\n", printf("%-0*.X", i, 1));
		printf(" %d\n", printf("%-0*.X", i, 10));
		printf(" %d\n", printf("%-0*.X", i, 101));
		printf(" %d\n", printf("%-0*.X", i, 1001));
		printf(" %d\n", printf("%-0*.X", i, 10001));
		printf(" %d\n", printf("%-0*.X", i, 100001));
		printf(" %d\n", printf("%-0*.X", i, 1000001));
		printf(" %d\n", printf("%-0*.X", i, 10000001));
		printf(" %d\n", printf("%-0*.X", i, 100000001));
		printf(" %d\n", printf("%-0*.X", i, -1000000001));

		printf(" %d\n", printf("%--------*.X", i, 0));
		printf(" %d\n", printf("%--------*.X", i, 1));
		printf(" %d\n", printf("%--------*.X", i, 10));
		printf(" %d\n", printf("%--------*.X", i, 101));
		printf(" %d\n", printf("%--------*.X", i, 1001));
		printf(" %d\n", printf("%--------*.X", i, 10001));
		printf(" %d\n", printf("%--------*.X", i, 100001));
		printf(" %d\n", printf("%--------*.X", i, 1000001));
		printf(" %d\n", printf("%--------*.X", i, 10000001));
		printf(" %d\n", printf("%--------*.X", i, 100000001));
		printf(" %d\n", printf("%--------*.X", i, -1000000001));

		printf(" %d\n", printf("%0000000*.X", i, 0));
		printf(" %d\n", printf("%0000000*.X", i, 1));
		printf(" %d\n", printf("%0000000*.X", i, 10));
		printf(" %d\n", printf("%0000000*.X", i, 101));
		printf(" %d\n", printf("%0000000*.X", i, 1001));
		printf(" %d\n", printf("%0000000*.X", i, 10001));
		printf(" %d\n", printf("%0000000*.X", i, 100001));
		printf(" %d\n", printf("%0000000*.X", i, 1000001));
		printf(" %d\n", printf("%0000000*.X", i, 10000001));
		printf(" %d\n", printf("%0000000*.X", i, 100000001));
		printf(" %d\n", printf("%0000000*.X", i, -1000000001));

		printf(" %d\n", printf("%0000000------*.X", i, 0));
		printf(" %d\n", printf("%0000000------*.X", i, 1));
		printf(" %d\n", printf("%0000000------*.X", i, 10));
		printf(" %d\n", printf("%0000000------*.X", i, 101));
		printf(" %d\n", printf("%0000000------*.X", i, 1001));
		printf(" %d\n", printf("%0000000------*.X", i, 10001));
		printf(" %d\n", printf("%0000000------*.X", i, 100001));
		printf(" %d\n", printf("%0000000------*.X", i, 1000001));
		printf(" %d\n", printf("%0000000------*.X", i, 10000001));
		printf(" %d\n", printf("%0000000------*.X", i, 100000001));
		printf(" %d\n", printf("%0000000------*.X", i, -1000000001));

		printf(" %d\n", printf("%------0000000*.X", i, 0));
		printf(" %d\n", printf("%------0000000*.X", i, 1));
		printf(" %d\n", printf("%------0000000*.X", i, 10));
		printf(" %d\n", printf("%------0000000*.X", i, 101));
		printf(" %d\n", printf("%------0000000*.X", i, 1001));
		printf(" %d\n", printf("%------0000000*.X", i, 10001));
		printf(" %d\n", printf("%------0000000*.X", i, 100001));
		printf(" %d\n", printf("%------0000000*.X", i, 1000001));
		printf(" %d\n", printf("%------0000000*.X", i, 10000001));
		printf(" %d\n", printf("%------0000000*.X", i, 100000001));
		printf(" %d\n", printf("%------0000000*.X", i, -1000000001));

		printf("\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*X", i, 0));
		printf(" %d\n", printf("%*X", i, 1));
		printf(" %d\n", printf("%*X", i, 10));
		printf(" %d\n", printf("%*X", i, 101));
		printf(" %d\n", printf("%*X", i, 1001));
		printf(" %d\n", printf("%*X", i, 10001));
		printf(" %d\n", printf("%*X", i, 100001));
		printf(" %d\n", printf("%*X", i, 1000001));
		printf(" %d\n", printf("%*X", i, 10000001));
		printf(" %d\n", printf("%*X", i, 100000001));
		printf(" %d\n", printf("%*X", i, -1000000001));

		printf(" %d\n", printf("%-*X", i, 0));
		printf(" %d\n", printf("%-*X", i, 1));
		printf(" %d\n", printf("%-*X", i, 10));
		printf(" %d\n", printf("%-*X", i, 101));
		printf(" %d\n", printf("%-*X", i, 1001));
		printf(" %d\n", printf("%-*X", i, 10001));
		printf(" %d\n", printf("%-*X", i, 100001));
		printf(" %d\n", printf("%-*X", i, 1000001));
		printf(" %d\n", printf("%-*X", i, 10000001));
		printf(" %d\n", printf("%-*X", i, 100000001));
		printf(" %d\n", printf("%-*X", i, -1000000001));

		printf(" %d\n", printf("%0*X", i, 0));
		printf(" %d\n", printf("%0*X", i, 1));
		printf(" %d\n", printf("%0*X", i, 10));
		printf(" %d\n", printf("%0*X", i, 101));
		printf(" %d\n", printf("%0*X", i, 1001));
		printf(" %d\n", printf("%0*X", i, 10001));
		printf(" %d\n", printf("%0*X", i, 100001));
		printf(" %d\n", printf("%0*X", i, 1000001));
		printf(" %d\n", printf("%0*X", i, 10000001));
		printf(" %d\n", printf("%0*X", i, 100000001));
		printf(" %d\n", printf("%0*X", i, -1000000001));

		printf(" %d\n", printf("%0-*X", i, 0));
		printf(" %d\n", printf("%0-*X", i, 1));
		printf(" %d\n", printf("%0-*X", i, 10));
		printf(" %d\n", printf("%0-*X", i, 101));
		printf(" %d\n", printf("%0-*X", i, 1001));
		printf(" %d\n", printf("%0-*X", i, 10001));
		printf(" %d\n", printf("%0-*X", i, 100001));
		printf(" %d\n", printf("%0-*X", i, 1000001));
		printf(" %d\n", printf("%0-*X", i, 10000001));
		printf(" %d\n", printf("%0-*X", i, 100000001));
		printf(" %d\n", printf("%0-*X", i, -1000000001));

		printf(" %d\n", printf("%-0*X", i, 0));
		printf(" %d\n", printf("%-0*X", i, 1));
		printf(" %d\n", printf("%-0*X", i, 10));
		printf(" %d\n", printf("%-0*X", i, 101));
		printf(" %d\n", printf("%-0*X", i, 1001));
		printf(" %d\n", printf("%-0*X", i, 10001));
		printf(" %d\n", printf("%-0*X", i, 100001));
		printf(" %d\n", printf("%-0*X", i, 1000001));
		printf(" %d\n", printf("%-0*X", i, 10000001));
		printf(" %d\n", printf("%-0*X", i, 100000001));
		printf(" %d\n", printf("%-0*X", i, -1000000001));

		printf(" %d\n", printf("%--------*X", i, 0));
		printf(" %d\n", printf("%--------*X", i, 1));
		printf(" %d\n", printf("%--------*X", i, 10));
		printf(" %d\n", printf("%--------*X", i, 101));
		printf(" %d\n", printf("%--------*X", i, 1001));
		printf(" %d\n", printf("%--------*X", i, 10001));
		printf(" %d\n", printf("%--------*X", i, 100001));
		printf(" %d\n", printf("%--------*X", i, 1000001));
		printf(" %d\n", printf("%--------*X", i, 10000001));
		printf(" %d\n", printf("%--------*X", i, 100000001));
		printf(" %d\n", printf("%--------*X", i, -1000000001));

		printf(" %d\n", printf("%0000000*X", i, 0));
		printf(" %d\n", printf("%0000000*X", i, 1));
		printf(" %d\n", printf("%0000000*X", i, 10));
		printf(" %d\n", printf("%0000000*X", i, 101));
		printf(" %d\n", printf("%0000000*X", i, 1001));
		printf(" %d\n", printf("%0000000*X", i, 10001));
		printf(" %d\n", printf("%0000000*X", i, 100001));
		printf(" %d\n", printf("%0000000*X", i, 1000001));
		printf(" %d\n", printf("%0000000*X", i, 10000001));
		printf(" %d\n", printf("%0000000*X", i, 100000001));
		printf(" %d\n", printf("%0000000*X", i, -1000000001));

		printf(" %d\n", printf("%0000000------*X", i, 0));
		printf(" %d\n", printf("%0000000------*X", i, 1));
		printf(" %d\n", printf("%0000000------*X", i, 10));
		printf(" %d\n", printf("%0000000------*X", i, 101));
		printf(" %d\n", printf("%0000000------*X", i, 1001));
		printf(" %d\n", printf("%0000000------*X", i, 10001));
		printf(" %d\n", printf("%0000000------*X", i, 100001));
		printf(" %d\n", printf("%0000000------*X", i, 1000001));
		printf(" %d\n", printf("%0000000------*X", i, 10000001));
		printf(" %d\n", printf("%0000000------*X", i, 100000001));
		printf(" %d\n", printf("%0000000------*X", i, -1000000001));

		printf(" %d\n", printf("%------0000000*X", i, 0));
		printf(" %d\n", printf("%------0000000*X", i, 1));
		printf(" %d\n", printf("%------0000000*X", i, 10));
		printf(" %d\n", printf("%------0000000*X", i, 101));
		printf(" %d\n", printf("%------0000000*X", i, 1001));
		printf(" %d\n", printf("%------0000000*X", i, 10001));
		printf(" %d\n", printf("%------0000000*X", i, 100001));
		printf(" %d\n", printf("%------0000000*X", i, 1000001));
		printf(" %d\n", printf("%------0000000*X", i, 10000001));
		printf(" %d\n", printf("%------0000000*X", i, 100000001));
		printf(" %d\n", printf("%------0000000*X", i, -1000000001));

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n------------------------%%P----------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");

		printf("---------------TEST *.-------------\n\n");

		printf(" %d\n", printf("%*.p", i, NULL));
		printf(" %d\n", printf("%*.p", i, (void *)0));
		printf(" %d\n", printf("%*.p", i, (void *)1));
		printf(" %d\n", printf("%*.p", i, (void *)(0ll)));
		printf(" %d\n", printf("%*.p", i, (void *)101));
		printf(" %d\n", printf("%*.p", i, (void *)1001));
		printf(" %d\n", printf("%*.p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%*.p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%*.p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%*.p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%*.p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%*.p", i, (void *)(ULLONG_MAX)));

		printf(" %d\n", printf("%-*.p", i, NULL));
		printf(" %d\n", printf("%-*.p", i, (void *)0));
		printf(" %d\n", printf("%-*.p", i, (void *)1));
		printf(" %d\n", printf("%-*.p", i, (void *)(0ll)));
		printf(" %d\n", printf("%-*.p", i, (void *)101));
		printf(" %d\n", printf("%-*.p", i, (void *)1001));
		printf(" %d\n", printf("%-*.p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%-*.p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%-*.p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%-*.p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%-*.p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%-*.p", i, (void *)(ULLONG_MAX)));

		printf(" %d\n", printf("%--------*.p", i, NULL));
		printf(" %d\n", printf("%--------*.p", i, (void *)0));
		printf(" %d\n", printf("%--------*.p", i, (void *)1));
		printf(" %d\n", printf("%--------*.p", i, (void *)(0ll)));
		printf(" %d\n", printf("%--------*.p", i, (void *)101));
		printf(" %d\n", printf("%--------*.p", i, (void *)1001));
		printf(" %d\n", printf("%--------*.p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%--------*.p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%--------*.p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%--------*.p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%--------*.p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%--------*.p", i, (void *)(ULLONG_MAX)));

		printf("\n");

		printf("---------------TEST *-------------\n\n");

		printf(" %d\n", printf("%*p", i, NULL));
		printf(" %d\n", printf("%*p", i, (void *)0));
		printf(" %d\n", printf("%*p", i, (void *)1));
		printf(" %d\n", printf("%*p", i, (void *)(0ll)));
		printf(" %d\n", printf("%*p", i, (void *)101));
		printf(" %d\n", printf("%*p", i, (void *)1001));
		printf(" %d\n", printf("%*p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%*p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%*p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%*p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%*p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%*p", i, (void *)(ULLONG_MAX)));

		printf(" %d\n", printf("%-*p", i, NULL));
		printf(" %d\n", printf("%-*p", i, (void *)0));
		printf(" %d\n", printf("%-*p", i, (void *)1));
		printf(" %d\n", printf("%-*p", i, (void *)(0ll)));
		printf(" %d\n", printf("%-*p", i, (void *)101));
		printf(" %d\n", printf("%-*p", i, (void *)1001));
		printf(" %d\n", printf("%-*p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%-*p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%-*p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%-*p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%-*p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%-*p", i, (void *)(ULLONG_MAX)));

		printf(" %d\n", printf("%--------*p", i, NULL));
		printf(" %d\n", printf("%--------*p", i, (void *)0));
		printf(" %d\n", printf("%--------*p", i, (void *)1));
		printf(" %d\n", printf("%--------*p", i, (void *)(0ll)));
		printf(" %d\n", printf("%--------*p", i, (void *)101));
		printf(" %d\n", printf("%--------*p", i, (void *)1001));
		printf(" %d\n", printf("%--------*p", i, (void *)(INT_MIN)));
		printf(" %d\n", printf("%--------*p", i, (void *)(INT_MAX)));
		printf(" %d\n", printf("%--------*p", i, (void *)(UINT_MAX)));
		printf(" %d\n", printf("%--------*p", i, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%--------*p", i, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%--------*p", i, (void *)(ULLONG_MAX)));
	}

	if (argc == 4)
	{

		printf("\n\n-------------------------------------------------------\n\n");
		printf("\n\n----------------------%%Vrac---------------------------\n\n");
		printf("\n\n-------------------------------------------------------\n\n");

		printf(" %d\n", printf("%d\t%0d\t%1.0d", 0, 0, 0));
		printf(" %d\n", printf("%d\t%0d\t%0.0d", 1, 1, 1));
		printf(" %d\n", printf("%0.0d\t%*.0d\t%3.*d", 1234, 3, 1234, 2, 1234));
		printf(" %d\n", printf("|%-3.10d%-p7ZSvYroG|", 0, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("p%-8cGJF%-piyyH%XOR44j", '\0', (void *)(0ll), 2167572659u));
		printf(" %d\n", printf("qJT9k%%%0u4pwe%-c7%%%-9.1d", 3872844051u, 'l', 0));
		printf(" %d\n", printf("%-7pa", (void *)(0ll)));
		printf(" %d\n", printf("FEwdShzg4fH%0u%-pdiB4i4cyxT%-x", UINT_MAX, (void *)(LLONG_MAX), UINT_MAX));
		printf(" %d\n", printf("%0.*x%%%%3lKW%%u80", 2, 0u));
		printf(" %d\n", printf("4PFiM%-x%-16X8NO7UWrlGphBC", UINT_MAX, UINT_MAX));
		printf(" %d\n", printf("VHkQK%-19s NoxCY5%-.3utWuceE4%-5pqx0j", "", 4098252277u, (void *)(-7568113770060041566ll)));
		printf(" %d\n", printf("MLxwbSYEcQ%-10.3i%%ZNdV%-c%-13sINNYTx%-c", INT_MIN, '4', "P8tR3qAvg3ZrG44jMKP6oQP5Y69", '\0'));
		printf(" %d\n", printf("sBIuWCi%-3.4s1q0rDfisbXjM", ""));
		printf(" %d\n", printf("x8d0amtXvt%-*.4ua%.5uJxzl%013XAlDG", -9, 1373803686u, UINT_MAX, 2470511812u));
		printf(" %d\n", printf("mLW%-xylDkVZ%-*pAsCElKGup%4.*d%-4X", UINT_MAX, 0, (void *)(LLONG_MAX), -3, INT_MAX, UINT_MAX));
		printf(" %d\n", printf("cxCO2gWM9%-s%0d%-4c", "", 0, '\0'));
		printf(" %d\n", printf("%-8.0dJ7pPbMEC%18.*ivUiX", 1, -6, 0));
		printf(" %d\n", printf("%-8.0dJ7pPbMEC%18.*ivUiX", 1, 0, 1));
		printf(" %d\n", printf("%-8.0dJ7pPbMEC%18.*ivUiX", 1, 0, 0));
		printf(" %d\n", printf("%-19pkKjW", (void *)(LLONG_MIN)));
		printf(" %d\n", printf("w3LCo5r%018.0d960%-4.2X%-4.5X17p05v%-4.1s", INT_MIN, UINT_MAX, 0u, ""));
		printf(" %d\n", printf("%-*c%-.3i", -4, 'Y', 0));
		printf(" %d\n", printf("Qwqe%-*c%%W", -7, '\0'));
		printf(" %d\n", printf("%-.4sXytOVCCnIxrLPsJGU%-13d8F%017.2i", "", 0, -1218335366));
		printf(" %d\n", printf("7rUyvgWIIt%*.*dtRLNd", -3, 0, 0));
		printf(" %d\n", printf("%-*c", -9, 'h'));
		printf(" %d\n", printf("%-.2s M mFa9oX%.*u%-10ca2Hv37O%014uvPsgIP", "XxRklbWw2roXtrHvb1QOsAFddotz60t55PHq7RSktWpG261MdHc3kQa9uXWcOgEb6apOziu", 6, UINT_MAX, '\0', 553811384u));
		printf(" %d\n", printf("%016.3iUapIGpHiMO9", 0));
		printf(" %d\n", printf("%-1s%-*.5if", "", -7, 0u));
		printf(" %d\n", printf("|%*d|", -5, 1234));
		printf(" %d\n", printf("|%-5.5d|", 1234));
		printf(" %d\n", printf("|%*.5d|", -5, 1234));
		printf(" %d\n", printf("|%*d|", 5, 1234));
		printf(" %d\n", printf("|%5.*d|", 5, 1234));
		printf(" %d\n", printf("|%*.5d|", 5, 1234));
		printf(" %d\n", printf("|%*d|", 0, 1234));
		printf(" %d\n", printf("|%5.*d|", 0, 1234));
		printf(" %d\n", printf("|%*.5d|", 0, 1234));
		printf(" %d\n", printf("|%*s|", -5, "1234"));
		printf(" %d\n", printf("|%-5.5s|", "1234"));
		printf(" %d\n", printf("|%*.5s|", -5, "1234"));
		printf(" %d\n", printf("|%*s|", 5, "1234"));
		printf(" %d\n", printf("|%5.*s|", 5, "1234"));
		printf(" %d\n", printf("|%*.5s|", 5, "1234"));
		printf(" %d\n", printf("|%*s|", 0, "1234"));
		printf(" %d\n", printf("|%5.*s|", 0, "1234"));
		printf(" %d\n", printf("|%*.5s|", 0, "1234"));
		printf(" %d\n", printf("fcd1V%.*dxBeyk13TAlU%-20p", 0, 0u, (void *)(4264394925442242200ll)));
		printf(" %d\n", printf("%-13ca%20.2i", '\0', -832823536));
		printf(" %d\n", printf("%-.1s%011.*xR%020.4iATpKlOvZY0vV%-.0i%*ivdIUd", "Zg1SfdqDm9vIYn0MFvjsNU9oyk3kzkAw", -8, UINT_MAX, INT_MIN, 452362402, -6, INT_MAX));
		printf(" %d\n", printf("%-11xwi3%-c%0.*X9kgUG%0.*dUMT53qT3D1Ev", 0u, '\0', 9, 1781280822u, 10, INT_MIN));
		printf(" %d\n", printf("%.0d%015.2X%3X%-18p", 0, 1749277763u, 0u, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%-5.4s%iCLMW89%x%-i%-18.0X", "", 0, UINT_MAX, 0, 0u));
		printf(" %d\n", printf("%-5.4s%iCLMW89%x%-i%-18.0d", "", 0, UINT_MAX, 0, 0u));
		printf(" %d\n", printf("%017.*u", -2, 0u));
		printf(" %d\n", printf("%017u", 0u));
		printf(" %d\n", printf("%-5.4s%iCLMW89%x%-i%-18.0d", "", 0, UINT_MAX, 0, 0u));
		printf(" %d\n", printf(""));
		printf(" %d\n", printf("sFq%-16p%017dz%-clvk", (void *)(-2835950508545453576ll), INT_MIN, '\0'));
		printf(" %d\n", printf("%0*iO%-*pbh369xCm1g", -10, 0, 1, (void *)(LLONG_MIN)));
		printf(" %d\n", printf("%-p%0*iZNTygjlsXZ0OOb r", (void *)(0ll), -2, 0));
		printf(" %d\n", printf("(%-.*s)47M3e{%-.4x}RI63FIgpmLHsTaRxeu7dd", -8, "aFc 5cBEGzqUbVktlPtado9ftZ7UXgicw42q8NB", UINT_MAX));
		printf(" %d\n", printf("%-16.*s%0.3u53NGPEV%-.0x", -2, "C5gFMvtAZPISEvHqemDMqwk0", 0u, UINT_MAX));
		printf(" %d\n", printf("ia%-7.*stMHe%-.0xp3kt%%D", -2, " LZvZ0H FZOPBMJlzxsX6BaHE xBuu ZHm853U5sZ", UINT_MAX));
		printf(" %d\n", printf("czhyX%0ul0%%%0.5i%-2.*s%0u", UINT_MAX, 0, -10, "EOLUIFnCnZW", 0u));
		printf(" %d\n", printf("%%PF%-19.*s%-20s", -7, "K1DiBdb21founEIT3VwCXYPCh21OdUon0DAqeCF6zgVnyyImiRvqpKXTHaEVm", "M j TP"));
		printf(" %d\n", printf("%-7.3sUlB1CRKuVJV%-14p%-10.*s%3.*x%0.*Xid4", "", (void *)(LLONG_MAX), -5, "3Ry7hAaNpw7wqweRWNsh0WnuizF2xGU4Her9Dy9clNfr92r4a3xvTUBk RCusSkLxx6I6CzS7bc16", -6, 2648764396u, 6, UINT_MAX));
		printf(" %d\n", printf("y9haY%-19.*s%010.3i%-2.0s%-p%xpVRQ", -9, "OMzbWXUCzrTz9efI0NcJ4aM7tTw8k ZT5Qip2u4DXLsZqYA0LPIcwYD4o1WkoU", 0, "OA0", (void *)(0ll), UINT_MAX));
		printf(" %d\n", printf("AB x8ArunZqWDo d0QXEOt%-16.*sncQ%*.5d", -3, "XKlWqKLEocryb7CwQLWwa0oXeH0nkEf9eahG1hU1stkGA5 wZsOWOvZXQbEbM6kLRyKru2pkgzbMPu0ZqtR5C6cb4xM0", 10, INT_MAX));
		printf(" %d\n", printf("%-ppYTyI%-20p%-p%0*X", (void *)(LLONG_MAX), (void *)(-908102134227070640ll), (void *)(LLONG_MIN), -4, UINT_MAX));
		printf(" %d\n", printf("6Lyvkh9BEF31%.3i%-19p%19.*XCtP%%", INT_MAX, (void *)(-60344176304952066ll), -3, 0u));
		printf(" %d\n", printf("%-20pLNVMiR7%-3c%-8.2X8iMzjkUW%i", (void *)(-656125783142943081ll), 'd', 0u, 1676744323));
		printf(" %d\n", printf("%-3pHbJBT%.*d%%", (void *)(LLONG_MAX), 10, -49827506));
		printf(" %d\n", printf("%-3pHbJBT%0.*d%%", (void *)(LLONG_MAX), 10, -49827506));
		printf(" %d\n", printf("%0*.*i", 6, 10, -106046684));
		printf(" %d\n", printf("_%-.*s%%%%%xwCHwBdp%-.2i_", -10, "", 0u, INT_MIN));
		printf(" %d\n", printf("_pMmbXxTY5ltnSWRH%-.1sBXkU42m7z_", "PpJw67L22In8x N"));
		printf(" %d\n", printf("_%-*c%08xLF4Yb_", 10, 'Y', UINT_MAX));
		printf(" %d\n", printf("_5a%.*iH9FpmSIztn%0d2eXIsu_", 2, -1248562692, INT_MAX));
		printf(" %d\n", printf("%-p%-p%-.5X%-.1XgybKEQ%-7u[%-13.*i]", (void *)(LLONG_MAX), (void *)(0ll), 4163212423u, 0u, 1237169178u, 10, -268029106));
		printf(" %d\n", printf("g{%15.*d}%-9iyk QtYPM%-p6RIeGt4", 10, -888611046, INT_MAX, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("(%12.*d)%.1xo", 10, -226960057, 0u));
		printf(" %d\n", printf("%-.*s%%%%%xwCHwBdp%-.2u_", -10, "", 0u, INT_MIN));
		printf(" %d\n", printf("_5a%.*uH9FpmSIztn%0d2eXIsu_", 2, -1248562692, INT_MAX));
		printf(" %d\n", printf("%-p%-p%-.5X%-.1XgybKEQ%-7u%-13.*u", (void *)(LLONG_MAX), (void *)(0ll), 4163212423u, 0u, 1237169178u, 10, -268029106));
		printf(" %d\n", printf("g%15.*u%-9uyk QtYPM%-p6RIeGt4", 10, -888611046, INT_MAX, (void *)(LLONG_MAX)));
		printf(" %d\n", printf("%12.*u%.1xo", 10, -226960057, 0u));
		printf(" %d\n", printf("%2c", '1'));
		printf(" %d\n", printf("%10c", '1'));
		printf(" %d\n", printf("%0-10d", 42));
		printf(" %d\n", printf("%-010d", 42));
		printf(" %d\n", printf("%-10d", 42));
		printf(" %d\n", printf("%1.2s", ""));
		printf(" %d\n", printf("%1.10s", ""));
		printf(" %d\n", printf("%6.10s", "Hello"));
		printf(" %d\n", printf("%s", "Toto"));
		printf(" %d\n", printf("%d", ' '));
		printf(" %d\n", printf("%u", ' '));
	}


	return (0);
}
