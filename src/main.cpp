// https://leetcode.com/problems/bitwise-and-of-numbers-range/

#include<iostream>
#include<climits>
#include"../inc/solution.hpp"

int main()
{
	std::cout << Solution().rangeBitwiseAnd(5,7);  // 4
	std::cout << Solution().rangeBitwiseAnd(0,0);  // 0
	std::cout << Solution().rangeBitwiseAnd(1,INT_MAX);  // 0
	return 0;
}

