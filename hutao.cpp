#include <iostream>
#include <string>

// ������û���������
const std::string CORRECT_USERNAME = "admin";
const std::string CORRECT_PASSWORD = "password123";

// ��֤�û�ƾ�ݵĺ���
bool verifyCredentials(const std::string& username, const std::string& password) {
	return username == CORRECT_USERNAME && password == CORRECT_PASSWORD;
}

int main() {
	std::string username;
	std::string password;

	// ����ѭ����ֱ���û�������ȷ��ƾ��
	while (true) {
		std::cout << "\n��ӭ���������֤ϵͳ�������������û���: ";
		std::cin >> username;

		std::cout << "����������: ";
		std::cin >> password;

		// ��֤ƾ��
		if (verifyCredentials(username, password)) {
			std::cout << "\n��ϲ����ƾ����֤�ɹ������ѻ�÷���Ȩ�ޡ�\n";
			break; // �˳�ѭ��
		}
		else {
			std::cout << "\n������Ч���û��������롣�����ԡ�\n";
		}

		// ������뻺����
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return 10;
}