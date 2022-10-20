/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
   *returnSize=numsSize;
    int *runningSum;
    int sum=0;
    runningSum=(int *)malloc(*returnSize * sizeof(int));
   
    for(int i=0;i<*returnSize;i++)
    {
        sum+=nums[i];
        runningSum[i]= sum; 
    }
    return runningSum;

}
