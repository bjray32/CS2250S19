#include <stdio.h>

int main()
{
	// 1) Ask for distance in meters

	// 2) Ask for time in seconds

	// 3) Calculate and display the velocity in km/hr
	
	int d = 10;
	int s = 1;

	printf("Provide distance in meters:\n");
	scanf("%d", &d);
	printf("Provide time in seconds:\n");
	scanf("%d", &s);

	printf("Calculated Velocity m/s: %d\n", d/s);

	//velocity = (d/1000)/(s/3600);
	//printf("Velocity in km/hr: %d\n", velocity);

	return 0;

}	
