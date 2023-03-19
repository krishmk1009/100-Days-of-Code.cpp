#include <bits/stdc++.h> 

void solve(stack<int> &stack , int num){

	if(stack.empty() || stack.top() < num){
		stack.push(num);
		return;
	}

	int value = stack.top();
	stack.pop();


	solve(stack , num);

	stack.push(value);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	// recursive call 
	sortStack(stack);

	// call sorted function
	solve(stack , num);
}
