 bool cmp(const val&a,const val&b){
return(b.second>a.second);
}
int maxChainLen(struct val p[],int n)
{

sort(p,p+n,cmp);
int endd=0,tsum=1;
for(int i=0;i<n-1;i++){
    if(p[i+1].first>p[endd].second){
      tsum++;
      endd=i+1;
      }
}
return tsum;
}
