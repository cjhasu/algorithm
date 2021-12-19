//Check if a string is palandrome or not

int isPalindrome(char S[])
{
    // Your code goes here
    int left = 0;
    int right = strlen(S)-1;
    
    while(left < right)
    {
        if(S[left++] != S[right--]) return false;
    }
    
    return true;
}
