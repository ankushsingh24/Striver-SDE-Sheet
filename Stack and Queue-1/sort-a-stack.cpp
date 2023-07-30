#include <bits/stdc++.h> 

void insert_into_stack(stack<int> &stack, int val)
{
	if(stack.empty() || stack.top() < val)
	{
		stack.push(val);
		return;
	}

	int top = stack.top();
	stack.pop();

	insert_into_stack(stack, val);
	stack.push(top);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty() || stack.size() == 1)
		return;

	int top = stack.top();
	stack.pop();

	sortStack(stack);
	insert_into_stack(stack, top);
}
