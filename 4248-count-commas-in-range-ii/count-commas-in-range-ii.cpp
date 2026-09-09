class Solution {
public:
    long long countCommas(long long n) {
        long long a=0;
        long long b=0;
        long long d=0;
        long long e=0;
        long long f=0;
       long long c = to_string(n).length();
       
        if (n<1000){
    return 0;}
        if (n>=1000 && n<1000000)
    {
        a=n-999;
        return a;
    }
    if (c>=7 && c<10)
    {
       b= n*2 -1001000+2;
       return b;
    }
    if (c>9 && c<=12)
    {
       d= (n*3)-1001001000 + 3;
       return d;
    }
    if (c>12 && c<=15)
    {
       e= (n*4)-1001001001000 + 4;
       return e;
    }
    if (c>15)
    {
       f= (n*5)-1001001001001000 + 5;
       return f;
    }
    
    return -1;
    }
};