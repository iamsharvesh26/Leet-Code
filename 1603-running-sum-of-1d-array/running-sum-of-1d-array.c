/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* rs) {
    int*res =malloc(sizeof(int)*n);
    res[0]=nums[0];
    for(int i=1;i<n;i++)
    res[i]=res[i-1]+nums[i];
    *rs=n;
    return res;

    
}