#include <iostream>;
#include <ctime>;
#include <random>;
using namespace std;

char getRandomChar() {
	return (char)(rand() % 26 + 65);
}

int getRandomInt(int limit) {
	return rand() % limit;
}

int main() {
	srand(time(NULL));

	cout << "This program generates 7 callsigns with different formats:\n"
		<< " - CLS 1111 (Random number up to 9999)\n"
		<< " - CLS 1A  \n"
		<< " - CLS 1AA \n"
		<< " - CLS 11A \n"
		<< " - CLS 111A\n"
		<< " - CLS 11AA\n\n";
		

	while (true) {
		cout << "<Press any key to generate>\n\n";
		getchar();

		cout << "CLS " << getRandomInt(10000) << endl
			<< "CLS " << getRandomInt(10) << getRandomChar() << endl
			<< "CLS " << getRandomInt(10) << getRandomChar() << getRandomChar() << endl
			<< "CLS " << getRandomInt(11) - 1 << getRandomInt(10) << getRandomChar() << endl
			<< "CLS " << getRandomInt(1000) << getRandomChar() << endl
			<< "CLS " << getRandomInt(100) << getRandomChar() << getRandomChar() << endl << endl;
	}
}