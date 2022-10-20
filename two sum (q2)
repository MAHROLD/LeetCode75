/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* resarra = (int*)malloc(*returnSize * sizeof(int));
    for(int i=0; i<numsSize; i++)
        for(int j=i+1; j<numsSize; j++)
            if(target == nums[i] + nums[j])
            {
            resarra[0] = i;
            resarra[1] = j;
            return resarra;                
            }
    resarra[0] = -1;
    resarra[1] = -1;
    return resarra;

}
