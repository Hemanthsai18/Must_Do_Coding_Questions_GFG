
long long int floorSqrt(long long int x) 
{
    if(x==2)
    return 1;
    long long int low=1,high=x;
    long long int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==x)
        return mid;
        if(mid*mid>x)
        high=mid-1;
        else low=mid+1;
    }
    if(mid*mid>x){
        if((mid-1)*(mid-1)<x)
        return mid-1;
    }
    return mid;
    // Your code goes here   
}
