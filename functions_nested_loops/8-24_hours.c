#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer.
*
* Description: print 24 hours in HH:MM format.
*/

void jack_bauer(void)
{
int hours;
int minutes;

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)

{
printf("%02d:%02d\n", hours, minutes);
}

}
}
