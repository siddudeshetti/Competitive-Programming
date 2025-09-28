void bs(vector<int> &v,int find){
    int low=0;
    int high=v.size()-1;

    while(high-low>1){
        int mid=(low+high)/2;
        if(v[mid]<find){
            low=mid+1;
        }else{
            high=mid;
        }
    }
  
    if(v[low]==find){
        cout<<low;
    }else if(v[high]==find){
        cout<<high;
    }else{
        cout<<-1;
    }
}