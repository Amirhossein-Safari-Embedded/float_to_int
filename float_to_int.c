#include <stdlib.h>
#include <stdio.h>


typedef union
{
	unsigned int i; // in ccs use uint32_t
	float f; // in ccs use float32_t
}uint32_float_union;


uint32_float_union temp;

float ff = 0.0;
unsigned int ii = 0;
int main()
{
	// To get float value of the 0x420E0000(hex value of the 35.5) for example
	temp.i = 0x420E0000;  
	// Another method
	ii = 0x420E0000;
	ff = *(float*)&ii;
	printf("%f %x %f\n", temp.f, temp.i, ff);

	// To get hex value of 1.5 for example
	temp.f = 1.5;
  // Another method
	ff = 1.5;
	ii = *(unsigned int*)&ff;
	printf("%f %x %x\n", temp.f, temp.i, ii);

	// 
	ff = *(float*)&ii;
	while (1)
	{

	}
	return 0;
}
