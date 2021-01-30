int PalinArray(int a[], int n)
{  
int var,rem = 0,rev = 0;
for(int i =0; i < n; i++){
var = a[i];
while(var != 0){
rem = var % 10;
rev = rev * 10 + rem;
var /= 10;
}
if(rev != a[i])
return 0;
rev = 0;
}
return 1;
}