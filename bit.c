#include <stdio.h>

void printBinary(unsigned short data) {
	    int num_bits = 0;
	        unsigned short temp = data;

		    while (temp != 0) {
			            temp >>= 1;
				            num_bits++;
					        }

		        printf("%d 비트", num_bits);
			    printf(": ");

			        for (int i = num_bits - 1; i >= 0; i--) {
					        unsigned short mask = 1 << i;
						        if (data & mask) {
								            printf("1");
									            } else {
											                printf("0");
													        }
							    }

				    printf("\n");
}

int main() {
	    unsigned short input;

	        printf("Enter a 16-bit hexadecimal number: ");
		    scanf("%hx", &input);

		        printBinary(input);

			    return 0;
}

