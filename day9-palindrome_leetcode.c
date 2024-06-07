bool isPalindrome(int x) {

    long long k,quotient,remainder;
    k=0;
    long long original;
    original=x;
    if(x<0)
    {
       return false;
    }
    else
    {
        while(x!=0)
        {
            remainder=x%10;
            k=k*10+remainder;
            quotient=x/10;
            x=quotient;
        }
        if(k==original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}   
