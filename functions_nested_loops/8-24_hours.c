#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer.
*
* For each minute, it prints the time in the format HH:MM.
*/


void jack_bauer(void)

{
int hours = 0;
int minutes = 0;

while (hours < 24)
{
while (minutes < 60)

{
printf("%02d:%02d\n", hours, minutes);
minutes++;
}

minutes = 0;
hours++;

}
}
