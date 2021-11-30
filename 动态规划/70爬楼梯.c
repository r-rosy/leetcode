// 最终版本 动态规划+记忆化搜索解决递归的超时问题。
int func (int n,int* arr) 
{
    if(arr[n-1]==0)
    {
        arr[n-1]=func(n-1,arr)+func(n-2,arr);    
    }
    return arr[n-1];
}
int climbStairs(int n){
    int* arr=malloc(sizeof(int)*n);
    for(int i=0;i<=n-1;i++)
    {
        arr[i]=0;
    }
    arr[0]=1;
    if(n!=1)
    {
    arr[1]=2;
    }
    return func(n,arr);
}
//版本1 数学方法-排列组合，然而无用的计算机告诉我连最大的long long int都装不下阶乘的结果，仍然溢出。只得换方法。
/*int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int num =1;
    for(int i=n;i>=1;i--)
    {
        num=num*i;
    }
    return num;
}
int permute(int num,int key1,int key2) 
{
    int n1=Factorial(num);
    int n2=Factorial(key1);
    int n3=Factorial(key2);
    return n1/(n2*n3);
}
int exec(int n) 
{
    int res=0;
    int num=n/2;
    int extra;
    if(n%2==0)
    {
        extra=0;
    }else {
        extra=1;
    }
    int all=num+extra;
    for(int i=num;num>=0;i--)
    {
        int t=permute(all,num,extra);
        res=res+t;
        num--;
        extra=extra+2;
        all=num+extra;
    }
    return res;
}
int climbStairs(int n){
    if(n==1)
    {
        return 1;
    }
    return exec(n);

}*/
//版本2 动态规划 然而递归告诉我超时，整个人都给我整懵了。又得换。
/*int func (int n) 
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    return func(n-1)+func(n-2);
}
int climbStairs(int n){
    return func(n);
}*/

