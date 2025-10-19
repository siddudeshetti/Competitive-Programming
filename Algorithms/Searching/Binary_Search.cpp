int binarysearch(vector<int> v,int t){
    int n=v.size();

    //binarysearch algo
    int l=0;
    int h=n-1;
    while (l<=h){
        int m=l+(h-1)/2;
        if(v[m]==t){
            return m;
        }else if(t<v[m]){
            h=m-1;
        }else{
            l=m+1;
        }
    }

    return -1;
}
