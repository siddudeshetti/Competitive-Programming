#include<bits/stdc++.h>
using namespace std;
int main(){

	vector<int> v={10,20,30,40,50};
	vector<int> v1(5,9);//output={9,9,9,9,9}
	
	//insert
	v.push_back(88);//to insert at back
	v.insert(v.begin()+1,99);

	//delete
	v.pop_back();//to pop delete at back
	v.erase(find(v.begin(),v.end(),30));

	//traverse
	for(auto i:v){//iterator for each loop 
		cout<<i<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<v1.size();i++){//iterator for loop 
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	//other
	cout<<v.front()<<" "<<v.back()<<endl;//accessing front and back elements
	cout<<v.size()<<endl;//size of vector
	cout<<v.empty()<<endl;//checks is vector is empty or not

	return 0;
}