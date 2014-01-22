/***************************************************************************
 *Median of Two Sorted Arrays 
 Total Accepted: 5285 Total Submissions: 32415 

 *There are two sorted arrays A and B of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)). 
 
 **************************************************************************/
 
 
 
/**
 * @file MoTSortedArray.cpp
 * @date 2014/01/21 17:50:17
 *  
 **/
#include <stdio.h>
#include <stack>
class Solution {
	public:
		    double findMedianSortedArrays(int A[], int m, int B[], int n) {
				int mid;
				int flag=(m+n)%2;
				double median;
				int sum=0;
				mid = (m+n)/2 + flag;
				int aindex=0, bindex=0;
				std::stack<int> seq;
				for(int i=0; i<mid+1; i++)
				{
					if(A[aindex]<B[bindex])
					{
					    if(aindex<m)
						{
							seq.push(A[aindex]);
							aindex++;
						}
						else
						{
							seq.push(B[bindex]);
							bindex++;
						}
					}
					else
					{
						if(bindex<n)
						{
						    seq.push(B[bindex]);
						    bindex++;
						}
						else
						{
							seq.push(A[aindex]);
							aindex++;
						}
					}
				}
				if(flag == 1)
				{
					seq.pop();
					median = seq.top();
					
				}
				else
				{
					median = seq.top();
					seq.pop();
					median += seq.top();
					median/=2;
				}
				return median;

				    }
};

int main()
{
	int A[5]={1,3,5,7,9};
	int B[1]={2};
    Solution sol;
	double res;
	res = sol.findMedianSortedArrays(A,5,B,1);
    printf("%f",res);
}

















/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
