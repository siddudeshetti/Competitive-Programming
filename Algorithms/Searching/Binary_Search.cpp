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

int recursive_binarysearch(vector<int> v, int t, int l, int h)
{
    if (l > h){
        return -1;
    }

    int m = l + (h - 1) / 2;
    if (v[m] == t){
        return m;
    }else if (t < v[m]){
        return rbs(v, t, l, m-1);
    }else{
        return rbs(v, t, m+1, h);
    }
}
