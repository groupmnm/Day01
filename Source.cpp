#include <iostream>

int main() {
	std::cout << "\nMot tuan co may ngay?";
	std::cout << "\n A. 5 ngay";
	std::cout << "\n B. 6 ngay";
	std::cout << "\n C. 7 ngay";
	std::cout << "\n D. 8 ngay";
	
	char luaChon = 65;	// A
	std::cout << "\nNhap vao lua chon cua ban :";
	std::cin >> luaChon;

	switch (luaChon)
	{
		case 'a':
		case 'A':
			std::cout << "\nSai cmnr!";
			break;
		case 'b':
		case 'B':
			std::cout << "\nNgu vl!";
			break;
		case 'c':
		case 'C':
			std::cout << "\nBingo!";
			break;
		case 'd':
		case 'D':
			std::cout << "\nOc cho' !";
			break;
		default:
			std::cout << "\nKhong co dap an ban lua chon !";
			break;
	}
	std::cout<<std::endl;
	system("pause");
	return 0;
}