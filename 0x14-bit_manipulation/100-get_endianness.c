#include <stdint.h>
#include "main.h"

/**
  * get_endiannness - determine the endiannes  of a system
  *
  * Return: 0 if big endian or 1 if small endian
  */

int get_endianness(void)
{
	uint16_t no = 0x0001;
	uint8_t *p = (uint8_t*)&no;

	if (*p == 0x01)
	{
		return (1);
	}
	
	return (0);
}
