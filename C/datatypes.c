#include <stdio.h>
#include <limits.h>
#include <float.h>
/**
 * main - Datatypes, variables and Format specifier
 * Return: 0
 */
int main(void)
{

	char a = 120;
	unsigned char b = 128;

	int c = 23040443;
	unsigned int d = 4294967295;

	short int e = 32768;
	unsigned short int f = 65535;

	long long int g;
	unsigned long long int h;

	float i = 2.873849009878;
	double j = 2.873849009878;
	long double k;

	/* size of Datatypes */
	printf("size of the Datatypes is listed below \n");
	printf("size of unsigned char :%zu \n", sizeof(unsigned char));

	printf("size of int :%zu \n", sizeof(int));
	printf("size of unsigned int :%zu \n", sizeof(unsigned int));

	printf("size of short int :%zu \n", sizeof(short));
	printf("size of unsigned short :%zu \n", sizeof(unsigned short));

	printf("size of long long int :%zu \n", sizeof(long long int));
	printf("size of float :%zu \n", sizeof(float));
	printf("size of double :%zu \n\n\n", sizeof(double));


	/* Format specifier of Datatypes */
	printf("Format specifiers for Datatypes \n");
	printf("format specifier of char is  :%c \n", a);
	printf("format of unsigned char is the same with char :%c \n", b);

	printf("format of int :%d \n", c);
	printf("format of unsigned int :%u \n", d);

	printf("format of short int :%d \n", e);
	printf("format of unsigned short :%d \n", f);

	printf("format of long long int :%lld \n", g);
	printf("format of float is :%f \n", i);
	printf("format of double is :%lf \n", j);


	/* maximum and minimum value each Datatypes can hold */
	printf("\n\nThe maximum and minimum value \n\n");
	printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("Range of unsigned char: 0 to %u\n", UCHAR_MAX);

	printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("Range of unsigned short int: 0 to %u\n", USHRT_MAX);

	printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
	printf("Range of unsigned int: 0 to %u\n", UINT_MAX);

	printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("Range of unsigned long int: 0 to %lu\n", ULONG_MAX);

	printf("Range of long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
	printf("Range of unsigned long long int: 0 to %llu\n", ULLONG_MAX);

	printf("Range of float: %E to %E\n", FLT_MIN, FLT_MAX);
	printf("Range of double: %E to %E\n", DBL_MIN, DBL_MAX);
	printf("Range of long double: %LE to %LE\n", LDBL_MIN, LDBL_MAX);

	return (0);


}
