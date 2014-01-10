/***************************************************************************
 *Remove Duplicates from Sorted Array II 
 Follow up for "Remove Duplicates":
 What if duplicates are allowed at most twice?

 For example,
 Given sorted array A = [1,1,1,2,2,3],

 Your function should return length = 5, and A is now [1,1,2,2,3].
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
				int flag=0;
				while(j<n)
				{
					if(A[i]==A[j])
					{
						if(flag==0)
						{
							A[++i]=A[j++];
							//A[i++]=A[j++]; wrong 2!
							flag=1;
						}
						else
						{
							A[i]=A[j++];
						}
					}
					else
					{
						flag=0;
						A[++i]=A[j++];
					}
				}
				return i+1;
			}
};

int main()
{
    Solution so;
	int a[6]={1,1,1,1,3,3};
	int i, count;
	count = so.removeDuplicates(a,6);

	printf("count=%d\n",count);
	for(i=0;i<count;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


















/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
