int max(int i,int j)
{
    return i>j?i:j;
}
int func(int i,int* nums,int* arr)
{
    if(i==0)
    {
        arr[0]=nums[0];
        return arr[0];
    }
    arr[i]=max(nums[i],func(i-1,nums,arr)+nums[i]);
    return arr[i];
}
int com(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}
int maxSubArray(int* nums, int numsSize){
    int* arr=malloc(sizeof(int)*numsSize);
    func(numsSize-1,nums,arr);
    qsort(arr,numsSize,sizeof(int),com);
    return arr[numsSize-1];


}
