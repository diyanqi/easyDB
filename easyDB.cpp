#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
string s;
int main(){
	getline(cin,s,'\n');
	freopen("msg.txt","a",stdout);
	if(s[0]=='w'){
		cout<<s.substr(1,s.length()-1)<<"\n";
	}
	fclose(stdin);
	return 0;
} 
