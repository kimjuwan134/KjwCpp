#include <iostream>
#include <stack>
#include <queue>

using namespace std;


#pragma region �����̳� �����

// ���� �����̳��� �������̽��� �����Ͽ� ���� ����� ���ѵǰų� ������ �����̳�.

#pragma endregion


int main()
{
#pragma region �����̳� ����� (stack)

	//stack<int> stack;

	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);

	//cout << "stack�� Top : " << stack.top() << endl;

	//int a = stack.size();

	//for (int i = 0; i < a; i++)
	//{
	//	cout << stack.top() << endl;
	//	stack.pop();
	//}

#pragma endregion

#pragma region �����̳� ����� (Queue)

	queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);

	while (queue.size())
	{
		cout << queue.front() << endl;
		queue.pop();
	}

#pragma endregion




	return 0;
}
