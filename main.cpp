#include <iostream>
#include <string>

using namespace std;

int main() {
	int score = 0;
	string questions[5] = { "Jaki makaron jest najpopularniejszy we Wloszech?", "Jak nazywa sie makaron, ktory wyglada jak male uszy?", "Jak nazywa sie makaron, ktory wyglada jak muszka?", "Jak nazywa sie makaron, ktory wyglada jak spirala?", "Jak nazywa sie dluuugi makaron?" };
	string answers[5][3] = { {"Spaghetti", "Fusilli", "Penne"}, {"Orecchiette", "Farfalle", "Conchiglie"}, {"Farfalle", "Fettuccine", "Linguine"}, {"Fusilli", "Rotini", "Gemelli"}, {"Farfalle", "Pappardelle", "Spaghetti"} };
	int correctAnswers[5] = { 2, 0, 0, 1, 2 };

	int questionsSize = sizeof(questions) / sizeof(questions[0]);
	int answersSize = sizeof answers[0] / sizeof(string);

	printf("Witaj w quizie o makaronie!\n");
	for (int i = 0; i < questionsSize; i++) {
		printf("%s\n", questions[i].c_str());
		for (int j = 0; j < answersSize; j++) {
			printf("%d, %s\n", j + 1, answers[i][j].c_str());
		}
		int userAnswer;
		printf("Wprowadz swoja odpowiedz (1-3): ");
		cin >> userAnswer;
		if (userAnswer == correctAnswers[i] + 1) {
			printf("Poprawna odpowiedz!\n\n");
			score++;
		}
		else {
			printf("Bledna odpowiedz\n\n");
		}
	}

	printf("Zdobyles %d z 5 punktow", score);

	return 0;
}