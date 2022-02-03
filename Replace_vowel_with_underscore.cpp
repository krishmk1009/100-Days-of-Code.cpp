#include <iostream>
#include <string>
using namespace std;

string replace(string s){
	
	string ans;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			
			if(i>=5){
				ans=ans+"_____";
			}
			else{
				for(int j=0;j<=i;j++){
				
					ans = ans + "_";
			}
			}
			
		
		}
		else{
			ans = ans + s[i];
		}
	}
	return ans;
}
int main(){
	
	string s;
	cin>>s;
	cout<<"input: "<<s<<endl;
	cout<<replace(s);
	return 0;
}
