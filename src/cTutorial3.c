/* Third tutorial in c series
* Converts distance in miles 
******* to kilometers *****/

#include <stdio.h>

#define KMS_PER_MILE 1.609	

int main(void)
{
	double miles,		/* input- distance in miles */
			kms;		/* ouput- distance in kilometers */

	/* get the distance in miles */
	printf("Enter the diatance in miles> ");
	scanf("%lf", &miles);

	/* convert the distance to kilometers */
	kms = KMS_PER_MILE * miles;

	/* display the message in kilometers */
	printf("That equals %.2f in kilometers\n", kms);  // Two decimal points precision


	return 0;




}