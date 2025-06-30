void swap(int *a, int *b) {
        int temp = *a;
            *a = *b;
                *b = temp;
                }

void sortColors(int* nums, int n) {
    int zeroIdx=0,twoIdx=n-1,itr=0;
    while(itr<=twoIdx)
    {
        if(nums[itr]==0)
         swap(&nums[itr++],&nums[zeroIdx++]);
        else if(nums[itr]==1)++itr;
        else swap(&nums[itr],&nums[twoIdx--]);
    }
    
}



