#include <iostream>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	int distance, distanceStart = 0, distanceEnd, temp = 0, tempTotal = 0, tempAverage, sec, minFloor;
	float min;
	std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? "; 
	std::cin >> distance;
	std::cout << "\n";
	distanceEnd = distance;
	if (distance <= 0) {
		return 1;
	}
	while (distance > 0) {
		distance = distance - 1;
		if (distanceEnd > distanceStart) {
			distanceStart = distanceStart + 1;
		}
		if (temp < 0) {
			return 2;
		}
		std::cout << "Какой у тебя был темп на километре " << distanceStart << "? ";
		std::cin >> temp;
		std::cout << "\n";
		tempTotal = tempTotal + temp;
	}
	if (tempTotal <= 0) {
		return 3;
	}
	tempAverage = tempTotal / distanceEnd;
	min = (float(tempAverage) / 60);
	minFloor = std::floor(min);
	sec = tempAverage - (minFloor * 60);
	std::cout << "Твой средний темп за тренировку: " << minFloor << " минут " << sec << " секунд.";
}
