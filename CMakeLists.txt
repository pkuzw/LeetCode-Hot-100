cmake_minimum_required(VERSION 3.15)
project(LeetCode_Hot_100)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode_Hot_100 main.cpp
        TwoSum.cpp TwoSum.h
        AddTwoNumbers.cpp AddTwoNumbers.h
        LengthOfLongestSubstring.cpp LengthOfLongestSubstring.h
        FindMedianSortedArray.cpp FindMedianSortedArray.h
        LongestPalindrome.cpp LongestPalindrome.h)