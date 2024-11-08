#include<stdio.h>
#include<stdbool.h>

void printSubset(bool flags[], int arr[], int size) {

    int i;
    printf("[");
	for ( i = 0; i < size; i++)
    {
		if (flags[i])
			printf(" %d,",arr[i]);
    }
	printf("]\n");
}

void subsetSum(int arr[], int n, bool flags[] , int sum, int curr, int target) {
	if (target == sum) {
		printSubset(flags, arr, n); // Solution found.
		return;
	}

   //  --> Incorrect v/s correct - && instead of ||
	// if (curr >= n && sum > target) {
	if (curr >= n || sum > target) {
		// constraint check
		// Backtracking.
		return;
	}

	// --> Incorrect v/s correct program - order of function calls reversed
	// Try to find solutions with current element included.
	flags[curr] = true;
	//subsetSum(arr, n, flags, sum, curr + 1, target);
	subsetSum(arr, n, flags, sum + arr[curr], curr + 1, target);
	// Try to find solutions with current element excluded.
	flags[curr] = false;
	subsetSum(arr, n, flags, sum, curr + 1, target);
	//subsetSum(arr, n, flags, sum + arr[curr], curr + 1, target);
}

int main()
{
    //Initialize all flags to false - no solution found yet
    bool flags[] = {false, false, false, false, false, false, false, false};
    int arr[] = {15, 22, 14, 26, 32, 9, 16, 8};
    int target = 59;
    subsetSum(arr, 8, flags, 0, 0, target);
}
