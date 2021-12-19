vector<int> rotateLeft(int d, vector<int> arr) 
{
  
    int g_c_d = gcd(arr.size(),d);
    
    for(int i = 0 ; i < g_c_d; i++)
    {
        int temp = arr[i];
        int j  = i;
        while(1)
        {
            int k = (j+d)%arr.size();    
            if(k == i) break;
            swap(arr[j] , arr[k]);
            j = k;
        }
        
        arr[j] = temp;
    }
    
    return arr;
}
