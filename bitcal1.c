// C program for the above approach
#include <stdio.h>

// Function to count the number of 0s
// and 1s in binary representation of N
void count1s0s(int N)
{
	// Initialise count variables
	int count0 = 0, count1 = 0;

	// Iterate through all the bits
	while (N > 0) {

		// If current bit is 1
		if (N & 1) {
			count1++;
			printf("1");
		}

		// If current bit is 0
		else {
			count0++;
			printf("0");
		}

		N = N >> 1;
	}
	printf("\n");

	// Print the count
	printf("Count of 0s in N is %d\n", count0);
	printf("Count of 1s in N is %d\n", count1);
}

// Driver Code
int main()
{
	// Given Number
	int N = 12345;

	// Function Call
	count1s0s(N);
	return 0;
}

