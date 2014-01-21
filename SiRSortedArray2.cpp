/***************************************************************************
 *Search in Rotated Sorted Array II 
 Total Accepted: 3950 Total Submissions: 13561 
 *Follow up for "Search in Rotated Sorted Array":
 What if duplicates are allowed?

 Would this affect the run-time complexity? How and why?
 ans: if the array seems like 11112111, the run-time complexity will from o(logn) down to o(n),
       because it can not apply binery search to these case. 


 Write a function to determine if a given target is in the array.
 **************************************************************************/
 
 
 
/**
 * @file SiRSortedArray2.cpp
 * @date 2014/01/20 17:46:32
  accepted @ 2014/01/21 17:05
 **/

class Solution {
	public:
		    bool search(int A[], int n, int target) {
		    					int left=0;
				int right=n-1;
				int mid;
				while(left<=right)
				{
					mid=(right-left)/2+left;
					if(A[mid]==target)
					{
						return true;
					}
					if(A[left]<A[mid])
					{//如果前半段有序，升序
						if(target<A[mid]&&target>=A[left])
						{//target落在前半段
							right = mid-1;
						}
						else
						{//target落在后半段
							left = mid+1;
						}
					}
					else
					if(A[left]>A[mid])
					{//后半段升序
						if(target>A[mid]&&target<=A[right])
						{
							left = mid+1;
						}
						else
						{
							right = mid-1;
						}
					}
					else
					{
						for(int i=0;i<n;i++)
						{
							if(A[i]==target)
								{
									return true;
								}
						}
						break;
					}
				}
				return false;

				        
				    }
};



















/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
