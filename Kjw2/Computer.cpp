#include "Computer.h"

Computer::Computer()
{
	std::cout << "Create Computer" << std::endl;
}

void Computer::Use()
{
	// ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ� �Ӽ��� ������ �� �ֱ�
	// ������ ���� ���� �����ڸ� ���� ���� Ŭ������ �̸��� �����ϰ� �Ӽ���
	// ����ؾ���.

	Mouse::Input();

	OnDrag();
	OnButton();
}
