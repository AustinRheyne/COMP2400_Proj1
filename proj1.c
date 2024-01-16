#include <stdio.h>
#include <math.h>
#define ITERATIONS 50

int main()
{
	// Lazy Caterer
	printf("Lazy Caterer's Sequence:\n");
	for(int i = 0; i < ITERATIONS; i++) {
		int result = ((i*i) + i + 2)/2;
		printf("%d ", result);
	}
	
	printf("\n\n");
	
	// Print the prime numbers
	printf("Prime Numbers:\n");
	int count = 0;
	int currentNum = 2;
	while(count < ITERATIONS) {
		int success = 1;
		for(int i = 2; i < currentNum; i++) {
			if(currentNum % i == 0) {
				success = 0;
				break;
			}
		}
		if(success == 1) {
			printf("%d ", currentNum);
			count++;
		}
		currentNum++;
	
	}

	printf("\n\n");

	// Fib Sequence
	printf("Fibonacci Sequence:\n");
	count = 1;
	unsigned long first = 0;
	unsigned long second = 1;
	
	// Display the first number, then enter the loop
	printf("1 ");
	while (count < ITERATIONS)
	{
		unsigned long sum = first + second;
		printf("%lu ", sum);
		first = second;
		second = sum;
		count++;
	}
	
	printf("\n\n");
	
	// Collatz Stopping Times
	printf("Collatz Stopping Times:\n");
	count = 1;
	while (count <= ITERATIONS) {
		int currentNum = count;
		int totalOp = 0;
		while (currentNum != 1) {
			if (currentNum % 2 == 0){
				currentNum /= 2;
			} else {
				currentNum = (3 * currentNum) + 1;
			}
			totalOp++;
		}
		count++;
		printf("%d ", totalOp);
	}
	
	printf("\n\n");
	
	// Happy Numbers
	printf("Happy Numbers:\n");
	count = 0;
	currentNum = 1;
	while (count < ITERATIONS) {
		int num = currentNum;
		while(num != 1 && num != 4) {
			int sum = 0;
			while (num > 0) {
				sum += (num % 10) * (num % 10);
				num /= 10;
			}
			num = sum;
		}
		
		if (num == 1) {
			printf("%d ", currentNum);
			count++;
		}
		currentNum++;
	}
	
	printf("\n\n");
	
	
	return 0;
	
}
