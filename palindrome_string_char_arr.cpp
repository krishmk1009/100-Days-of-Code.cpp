#include <iostream>
using namespace std;
}

int getLen(char name[]){
	int count = 0;
	int i = 0;

	while(name[i] != '\0'){
	count++;
	i++;
}	
	return count;
}


char toLower(char c){
	if(c>='a'&& c<='z'){
		return c;
	}
	else{
		char temp = c - 'A' + 'a';
		return temp;
	}
}
bool isPalindrome(char name[],char n){
	int s = 0;
	int e= n-1;
	
	while(s<e){
		if(toLower(name[s]) != toLower(name[e])){
			return false;
			
		}
		else{
			return true;
		}
	}
}
		
			
int main(){
	
	char name[10] ;
	cin>>name;

int len = getLen(name);


cout<<isPalindrome(name,len);


return 0;
}
