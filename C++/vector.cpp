// Vector

#include<iostream>
#include<vector>
using namespace std;
void explainVector()
{
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);
	cout<<v[0]<<" "<<v[1]<<endl;
	
	vector<pair<int,int>> w;
	w.push_back({1,2});
	w.emplace_back(3,4);
	cout<<w[0].first<<" "<<w[0].second<<endl;
	
	vector<int> v(5,100); // {100,100,100,100,100}
	vector<int> v0(5);   //  {0,0,0,0,0}
	vector<int> v1(5,20);//  {20,20,20,20,20}
	vector<int> v2(v1);  //  {20,20,20,20,20}
	
	//vector iterator v{10,20,30,40,50}
	vector<int>::iterator it=v.begin();
	it++;
	cout<<*(it)<<" "<<; // {20}
	
	it=it+2
	cout<<*(it)<<endl; //{30}
	
	vector<int>::iterator it=v.end(); // points after 50
	vector<int>::iterator it=v.rend(); // points before 10
	vector<int>::iterator it=v.rbegin(); // points before 50
	
	cout<<v[0]<<" "<<v.at(0)<<endl; //10
	cout<<v.back()<<endl; // 50
	
	//ways to print the vector
	for(int i=0;i<v.size().i++)
	{
		cout<<v[i]<<endl;
	}
	for(vector<int>::iterator it=v.begin();it!=v.end();i++)
	{
		cout<<*(it)<<" "<<endl; 
	}
	for(auto it=v.begin();it!=v.end();i++)
	{
		cout<<*(it)<<" "<<endl;
	}
	for(auto it:v)
	{
		cout<<it<<" "<<endl;
	}
	
	// {10,20,12,23,35,50}
	v.erase(v.begin()); // {20,12,23,35,50}
	v.erase(v.begin()+2,v.begin()+4); // {20,12,50}
	
	//insert function
	vector<int> v(2,100); // {100,100}
	v.insert(v.begin(),30); // {30,100,100}
	v.insert(v.begin()+1,2,10); // {30,10,10,100,100}
	
	vector<int> copy(2,50); //{50,50}
	v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,30,10,10,100,100}
	
	//{10,20}
	cout<< v.size()<<endl; // 2
	
	//{10,20}
	cout<< v.pop_back() <<endl; //10 20is removed
	
	// v1->{10,20}
	// v2->{30,40}
	v1.swap(v2); // v1->{30,40} and v2->{10,20}
	
	v.clear(); // erase the entire vector
	
	cout<<v.empty();
	
}
int main()
{
	explainVector();
	return 0;
}
