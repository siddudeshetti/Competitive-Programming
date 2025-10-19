int linearsearch(vector<int> v,int t){
    //linearsearch algo
    
    for(int i=0;i<v.size();i++){
        if(v[i]==t){
            return i;
        }
    }
    return -1;
}
