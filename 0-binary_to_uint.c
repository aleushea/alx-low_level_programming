#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Bi_Num;
	int Length, Binary;
	if (!b)
		return (0);
	Bi_Num = 0;
	for (Length = 0; b[Length] != '\0'; Length++)
		;
	for (Length--, Binary = 1; Length >= 0; Length--, Binary *= 2)
	{
		if (b[Length] != '0' && b[Length] != '1')
		{
			return (0);
		}

		if (b[Length] & 1)
		{
			Bi_Num += Binary;
		}
	}

	return (Bi_Num);
}
