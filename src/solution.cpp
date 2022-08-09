#include"../inc/solution.hpp"


int Solution::rangeBitwiseAnd(int left, int right)
{
    if(!left || !right){ return 0; }
    
    int comp{1}, result{0};  // 'comp' will act as the comparator for bitwise and operation
    for(int bit{0}; bit<32; ++bit)
    {
        int num{left}; bool bitIsOne{true};  // 'num' represents in turn each value within the range
        while(num <= right)
        {
            // as soon as a number is found which sets the current bit to zero,
            // negate the bool and break as we don't need to check any more numbers for this bit.
            if( !(num & comp) ){ bitIsOne = false; break; }
            ++num;
        }
        if(bitIsOne){ result+=comp; }  // comp is added to result only if all nums in range have current bit == 1
        comp<<=1;  // bitshift left the comparator value before next loop iteration
    }
    return result;
}