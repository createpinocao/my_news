#include <iostream>
#include <string>

// 假设的用户名和密码
const std::string CORRECT_USERNAME = "admin";
const std::string CORRECT_PASSWORD = "password123";

// 验证用户凭据的函数
bool verifyCredentials(const std::string& username, const std::string& password) {
	return username == CORRECT_USERNAME && password == CORRECT_PASSWORD;
}

int main() {
	std::string username;
	std::string password;

	// 无限循环，直到用户输入正确的凭据
	while (true) {
		std::cout << "\n欢迎来到身份验证系统！请输入您的用户名: ";
		std::cin >> username;

		std::cout << "请输入密码: ";
		std::cin >> password;

		// 验证凭据
		if (verifyCredentials(username, password)) {
			std::cout << "\n恭喜您！凭据验证成功，您已获得访问权限。\n";
			break; // 退出循环
		}
		else {
			std::cout << "\n错误：无效的用户名或密码。请重试。\n";
		}

		// 清空输入缓冲区
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return 10;
}