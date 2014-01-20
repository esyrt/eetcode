/***************************************************************************
 * Remove Duplicates from Sorted Array | Total Accepted: 5622 Total Submissions: 16948 
 *
 * Given a sorted array, remove the duplicates in place such that each element appear only once and
 * return the new length.
 *
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 *
 * For example,
 * Given input array A = [1,1,2],
 *
 * Your function should return length = 2, and A is now [1,2].
 * 
 * 
 **************************************************************************/
#include <stdio.h>
 
 class Solution {
	 public:
		 int removeDuplicates(int A[], int n) {
			 if(n==0)
		     {
                 return 0;
			 }
			 int i=0,j=1;
			 while(j<n)
			 {
				 if(A[i]==A[j])
				 {
					 j++;
				 }
				 else
				 {
					 A[++i] = A[j];
					 j++;
				 }
			 }
		    return i+1;
		 }
 };

int main()
{
	Solution sol;
	int count = 0;
	int A[13]={1,1,2,2,2,3,4,5,6,7,7,7,7};
	//int arrsize = sizeof(A);
	int i;
	count = sol.removeDuplicates(A,13);
	printf("%d\n",count);
	for(i=0; i<count; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
return 0;
}



















/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
