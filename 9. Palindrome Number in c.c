
bool isPalindrome(int x){
    int  y=x,reminder=0;
    long long reversednum=0;
    while(y!=0){
        reminder=y%10;
        reversednum=(reversednum*10)+reminder;
        y/=10;
    }
    if(x<0){
        reversednum=-(reversednum);
    }
    if(x==reversednum)
    {
        return true;
    }else
    {
        return false;    
    } 

}
