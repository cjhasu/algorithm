#include<iostream>

//Revers a string
string reverseWord(string str)
{
    int start = 0;
    int end = str.size()-1;
    
    while(start < end)swap(str[start++], str[end--]);
    
  //Your code here
    return str;
}
