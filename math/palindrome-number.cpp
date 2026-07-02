class Solution {
private:
int reverse(int n)
{
    int ans=0;
    while(n!=0){
        int digit=n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans=(ans*10)+digit;
        n=n/10;
    }
    return ans;
}
public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
        int rev=reverse(n);
        return n==rev;
    }
};