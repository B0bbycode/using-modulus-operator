#include <iostream>

using namespace std;

int main(void){
	
	int a,c;
	char b;
	
	
	
	cout<<"input first value \t";
	cin>>a;
	
	cout<<"input an operator \t";
	cin>>b;
	
	cout<<"input second value \t";
	cin>>c;
	
	
	
	if (b == '%'){
		cout<<"result of \t"<<a<<b<<c;
		cout<<"\t is \t"<<a%c;
	}
	
	else if (b == '*'){
		cout<<"result of \t"<<a<<b<<c;
		cout<<"\t is \t"<<a*c;
	}
	
	else if (b == '/'){
		cout<<"result of \t"<<a<<b<<c;
		cout<<"\t is \t"<<a/c;
	}
	
	else if  (b == '-'){
		cout<<"result of \t"<<a<<b<<c;
		cout<<"\t is \t"<<a-c;
	}
		else  
			cout<<"you have a wrong operator";
	

	return 0;
}
