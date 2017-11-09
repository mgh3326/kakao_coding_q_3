#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
vector<string> v;
void function(istream& ins)
{
	stack<string> st;
	int i=0;
	string str;
	char c;
	while (ins && ins.peek() != '\n')//ohohoh
	{//test
		cout << "test" << endl;//test2
		if(ins.peek()==',')
		{
			//ins >> c;
			cin.ignore();
		}
		if(isalpha(ins.peek())){
			cout << "test" << endl;
			ins >> c;
			str.push_back(c);
			cout << c << endl;
			cout << "test" << endl;
			st.push(str);
			cout << str << endl;
		}
		else {
			ins.ignore();

		}
	}
	for (int i = 0; i < st.size(); i++)
	{
		cout << st.top() << endl;
		st.pop();
	}
	
}
int main(void){
	//cout<<"test"<<endl;
	int cashsize=0;
	cin>>cashsize;
	function(cin);
	return 0;
}
