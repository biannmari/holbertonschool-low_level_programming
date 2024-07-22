#include "main.h"

void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int timer = 0;

while (hours < 24)
{
while (minutes < 60)

{
printf("%02d:%02d\n", hours, minutes);
minutes++;
timer++;
if (timer >= 60)

{
timer = 0;
hours++;
}

}
minutes = 0;
}
}
