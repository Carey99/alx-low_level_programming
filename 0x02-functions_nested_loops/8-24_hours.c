#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* jack_bauer - every minute of the day
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
	for (minutes = 0; minutes < 60; minutes++)
	{
	if ((hours == 0 && minutes >= 0) || (hours == 23 && minutes <= 59)
|| (hours >= 1 && hours <= 22))
	{
	putchar((hours / 10) + '0');
	putchar((hours % 10) + '0');
	putchar(':');
	putchar((minutes / 10) + '0');
	putchar((minutes % 10) + '0');
	putchar('\n');
	}
	}
	}
}
