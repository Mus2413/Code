int value(char val)
{
if(val=='I')
return 1;
if(val=='V')
return 5;
if(val=='X')
return 10;
if(val=='L')
return 50;
if(val=='C')
return 100;
if(val=='D')
return 500;
if(val=='M')
return 1000;
}
int romanToDecimal(string &str) {
    int total=0,n=str.length();
    for(int i=0;i<n-1;i++) {
        if( value(str[i])>= value(str[i+1]) )
        total+=value(str[i]);
    else
        total-=value(str[i]);
    }
    total+=value(str[n-1]);
    return total;
    // code here
}