/***************************************************************************
 * leetcode
 *
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they add up to the target,
 * where index1 must be less than index2. Please note that your returned answers (both index1 and
 * index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 **************************************************************************/
 
/**
 * @file twosum.cpp
 * @author Hongzhe Zhu(zhuhongzhe@izptec.com)
 * @date 2013/12/18 17:38:25
 * @version 1.0 
 * @brief 
 *  
 **/
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
struct numindex{
int num;
int index;
};
class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
	    vector<int> numt;
		for(int i=0;i<numbers.size(); i++)
		{
			numt.push_back(numbers[i]);
		}
		sort(numt.begin(), numt.end());
		int left = 0, right = numt.size()-1;
		int lt=right, mid;
		int start=0;
		/*
	    while(left<=right)
		{
			mid = (right-left)/2+left;
			if(target == numt[mid])
			{
				lt = mid-1;
			}
			if(target>numt[mid])
			{
				left = mid+1;
			}
			else
			if(target<numt[mid])
			{
				right = mid-1;
			}

		}
		if(lt==0)
		{
			lt = mid;
		}*/
		while(start<lt)
		{
			if(target>numt[lt]+numt[start])
			{
				start++;
			}
			else
			if(target<numt[lt]+numt[start])
			{
				lt--;
				start=0;
			}
			else
			{
				cout<<"index1="<<start<<", index2="<<lt<<endl;
				break;
			}
		}


	}
};


int main(int argc, char **argv)
{
	Solution sol;
	int in[4]={2, 7, 11, 15};
	vector<int> input(in,in+4);
	int tar = 18;
	sol.twoSum(input, tar);

	return 0;

}

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
