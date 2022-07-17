class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0,j=0,n1=num1.length(),n2=num2.length();
        string num3;
        int rem=0;
        while(i<n1 && j<n2){
            int y= num1[i]-'0';
            int z=num2[j]-'0';
            int a=(y+z+rem)%10;
            num3+=(a+'0');
            rem=(y+z+rem)/10;
            i++;
            j++;
        }
        while(i<n1){
            int y= num1[i]-'0';
            int a=(y+rem)%10;
            num3+=(a+'0');
            rem=(y+rem)/10;
            i++;
        }
        while(j<n2){
            int z=num2[j]-'0';
            int a=(z+rem)%10;
            num3+=(a+'0');
            rem=(z+rem)/10;
            j++;
        }
        while(rem>0){
            int a=rem%10;
            num3+=(a+'0');
            rem=rem/10;
        }
        
        reverse(num3.begin(),num3.end());
        return num3;
    }
};