//使用分治算法解决
int cout(int* num,int numsSize,int s,int e,int target)
{
    int n=0;
    for(int i=s;i<=e;i++)
    {
        if(num[i]==target)
        {
            n++;
        }
    }
    return n;
}
int divisionarray(int* num,int numsSize,int s,int e)
{
    if(s==e)
    {
        return num[s];
    }
    int mid=(s+e)/2;
    int res1=divisionarray(num,numsSize,s,mid);
    int res2=divisionarray(num,numsSize,mid+1,e);
    int n1=cout(num,numsSize,s,e,res1);
    int n2=cout(num,numsSize,s,e,res2);
    return n1>n2?res1:res2;

}
int majorityElement(int* nums, int numsSize){
    return divisionarray(nums,numsSize,0,numsSize-1);
}
