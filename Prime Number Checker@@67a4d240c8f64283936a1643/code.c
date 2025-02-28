int isPrime(int num)
{
    int i,count=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        count++;
    }
if(count==1)
    return 0;
else
    return 1;
}