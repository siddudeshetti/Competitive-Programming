#include <bits/stdc++.h>
using namespace std;

void vector1(vector<int> &v){
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(1)\n";


	//1.inserting an element
		//a.inserting at position O(n)
	int position=3;
	int val=20;
	v.insert(v.begin()+position,val);
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(2)\n";

		//b.insert at last O(1)
	v.push_back(10); //add to last index,pop_back removes last index value
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(3)\n";


	//2.removing an element
		//a.by position O(n)
	int posi=3;
	v.erase(v.begin()+posi);
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(4)\n";
		//b.by value O(n)
	int value = 2;
	v.erase(remove(v.begin(),v.end(),value),v.end());
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(5)\n";


	//3.sort O(n)
	sort(v.begin(),v.end()); //for reverse we use sort(v.rbegin(),v.rend())
	for(auto x : v){
		cout<<x<<" ";
	}
	cout<<"(6)\n";


}

int main(){
	vector<int> v;
	int x;
	while(cin>>x){
		v.push_back(x);
		if(cin.peek()=='\n') break;
	}
	vector1(v);
	return 0;
}
