#include <stdio.h>

/* print fahrenheit-Celsius table with:
 * Celsius= 5* (f-32)/9 */

int main(void)
{
	int F,C;
	int upper,lower;

	lower=0; /* lower limt of tempture scale*/
	upper=300; /* upper limt of tempture scale */
	
	F=lower;
	while(F<= upper){
		C=5* (F-32)/9;
		printf("%d\t%d\n",F,C);
		F+=20;
	};
	return 0;
}
