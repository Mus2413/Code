string reverseWord(string str){
    int n=str.length();
    for(int i=0;i<=(n-1)/2;i++)
    {
        swap(str[i],str[n-1-i]);
    }
    return str;
}