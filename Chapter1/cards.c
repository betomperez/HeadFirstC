/*
 * Program to evaluate face values.
 * Released under Vegas Public License.
 * (c)2014 The College BlackJack Team.
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
 	char card_name[3];
 	puts("Enter the card name: ");
 	scanf("%2s", card_name);
 	int val = 0;
 	if (card_name == 'K') {
 		val = 10;
	} else if (card_name == 'Q') {
		val = 10;
	} else if (card_name == 'J') {
		val = 10;
	} else if (card_name =='A') {
		val = 11;
	} else {
		val = atoi(card_name);
	}
	/* Check if the value is 3 to 6 */
	if ((val >= 3) && (val <= 6 ))
		puts("Count has gone up");
	/* Otherwise check if the card was 10, J, Q or K */
	else if (val == 10)
		puts("Count has gone down")
	return 0;
 }
