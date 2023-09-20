#include <iostream>
#include <memory>

using namespace std;


#pragma region RAII ����

// �ڿ��� ������ ����� ���� ��ü�� ���̴� ������ ����� �Ǹ�
// �ڿ��� �������ִ� ���.

class File
{
public : 
	File()
	{
		cout << "Create File" << endl;
	}

	~File()
	{
		cout << "Delete File" << endl;
	}
};

#pragma endregion

class Player
{
private :
	int health;

#pragma region weak ������

	// �ڽ��� �����ϰ� �ִ� ���� �������� ���� ���� ī��Ʈ�� 0�� �Ǹ�
	// expired ��� ���°� �Ǵµ�, �̴� ���� �������� ���� ī��Ʈ��
	// 0�� �Ǿ� �޸𸮰� �����Ǿ����Ƿ�, �� ���� �����͸� ������
	// weak �����͸� ��ȿ���� �ʴٰ� �Ǵ��Ͽ� �����ϴ� ������.

#pragma endregion

	weak_ptr<Player> partner1;

public :
	Player()
	{
		cout << "Create Player" << endl;
	}

	~Player()
	{
		cout << "Delete Player" << endl;
	}

	void SetPartner(weak_ptr<Player> partner)
	{
		this->partner1 = partner;
	}
};

int main()
{
#pragma region unique ������

	// ��, �ϳ��� ��ü�� ����ų �� �ִ� ����Ʈ ������.

	//unique_ptr<File> uptr1(new File);

	//cout << "uptr1�� �� : " << uptr1 << endl;

	//unique_ptr<File> uptr2 = make_unique<File>();

	//cout << "uptr2�� �� : " << uptr2 << endl;

	//// �ϳ��� unique �����ʹ� �ϳ��� ��ü�� ���� �� �ֽ��ϴ�.
	//// ������ ��ü�� ���� �������� �����ϴ� ���� �����մϴ�.
	//unique_ptr<File> uptr3 = move(uptr2);

	//cout << "uptr3�� �� : " << uptr3 << endl;
	//cout << "uptr2�� �� : " << uptr2 << endl;

#pragma endregion

#pragma region shared ������

	// �ϳ��� ��ü�� ���� ���� �����Ͱ� ������ �� ������, 
	// ������ ������ ���� ī��Ʈ�� �̿��ؼ� �޸𸮸� �����ϴ�
	// ����Ʈ ������.

	//shared_ptr<File> sptr1(new File());
	//cout << sptr1.use_count() << endl;

	//shared_ptr<File> sptr2 = sptr1;
	//cout << sptr1.use_count() << endl;

	shared_ptr<Player> player1 = make_shared<Player>();
	shared_ptr<Player> player2 = make_shared<Player>();

	player1->SetPartner(player2);
	player2->SetPartner(player1);



#pragma endregion




	return 0;
}
