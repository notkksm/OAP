#include"stdafx.h"
void read(Parm::PARM parm);



int wmain(int argc, wchar_t* argv[]) {
	setlocale(LC_ALL, "rus");

	std::cout << "-----тест ERROR::getin----" << std::endl << std::endl;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		std::cout << in.text << std::endl;
		std::cout << "Всего символов: " << in.size << std::endl;
		std::cout << "Всего строк: " << in.lines << std::endl;
		std::cout << "Пропущено: " << in.ignor << std::endl;

		read(parm);

	}
	catch (Error::ERROR e) {
		std::cout << "Ошибка" << e.id << ": " << e.message << std::endl << std::endl;
		std::cout << "Строка: " << e.inext.line << " позиция: " << e.inext.col << std::endl << std::endl;
	}
	system("pause");
	return 0;
}


