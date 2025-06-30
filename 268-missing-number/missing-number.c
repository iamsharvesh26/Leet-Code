int missingNumber(int* nums, int n) {
    int res=0;
    for(int i=0; i<n; i++)
    res = res^nums[i]^i;
    return res^n;
}