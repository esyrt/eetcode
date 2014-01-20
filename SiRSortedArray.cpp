/***************************************************************************
 *Search in Rotated Sorted Array 
 Total Accepted: 5531 Total Submissions: 19840
 Suppose a sorted array is rotated at some pivot unknown to you beforehand.

 (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

 You are given a target value to search. If found in the array return its index, otherwise return -1.

 You may assume no duplicate exists in the array.
 * 
 **************************************************************************/
 
 
 /*
 * @date 2014/01/10 17:26:16
 *  
 **/
#include <stdio.h>
class Solution {
	public:
		    int search(int A[], int n, int target) {
				int left=0;
				int right=n-1;
				int mid;
				while(left<=right)
				{
					mid=(right-left)/2+left;
					if(A[mid]==target)
					{
						return mid;
					}
					if(A[left]<A[mid])
					{
						if(target<A[mid]&&target>=A[left])
						{
							right = mid-1;
						}
						else
						{
							left = mid+1;
						}
					}
					else
					{
						if(target>A[mid]&&target<=A[right])
						{
							left = mid+1;
						}
						else
						{
							right = mid-1;
						}
					}
				}
				return -1;

				        /*
						 * accepted
						int prev=0;
						int end=n-1;
						int mid;
						while(prev<=end)
						{
							mid=(end-prev)/2+prev;
							if(A[prev]>A[mid])
							{
							    if(A[mid]<target && A[end]>target)
								{
									prev = mid+1;
								}
								else if((A[mid]>target && A[end]>target)||(A[mid]<target&&A[end]<target))
								{
									end = mid-1;
								}
								else if(A[mid] == target)
								{
									return mid;
								}
								else if(A[prev] == target)
								{
									return prev;
								}
								else if(A[end]==target)
								{
									return end;
								}
								else
								{return -1;}
							}
							else
							{
								if(A[mid]>target && A[prev]<target)
								{
									end=mid-1;
								}
								else if((A[mid]>target && A[prev]>target)||(A[mid]<target && A[prev]<target))
								{
									prev = mid+1;
								}
								else if(A[mid]==target)
								{
									return mid;
								}
								else if(A[prev]==target)
								{
									return prev;
								}
								else if(A[end]==target)
								{
									return end;
								}
								else
								{return -1;}
							}
						}
                             return -1;
							 */
				    }
};
int main()
{
	    Solution sol;
		    int res;
			    int A[2]={1,3};
				    int arrsize = sizeof(A);
					        res = sol.search(A,2,3);
					            printf("%d\n",res);
					            printf("\n");
			                                    return 0;
					                                    }           

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
