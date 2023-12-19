#include <iostream>
#include <string>

using namespace std;

class Competitor {
public:
    string country;
    string team;
    string name;
    int number;
    int age;
    int height;
    int weight;

public:
    void fillData();
    void showData();
};

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");

    const int N = 2;
    Competitor obj[N];

    cout << "Внесите данные об участниках спортивных соревнований:" << endl;
    for (int i = 0; i < N; i++) {
        obj[i].fillData();
    }

    int minAge = obj[0].age;
    int minAgeIndex = 0;
    for (int i = 1; i < N; i++) {
        if (obj[i].age < minAge) {
            minAge = obj[i].age;
            minAgeIndex = i;
        }
    }

    cout << "Информация о самом молодом участнике:" << endl;
    obj[minAgeIndex].showData();

    system("pause");
    return 0;
}

void Competitor::fillData() {
    cout << "Страна: ";
    cin >> country;
    cout << "Название команды: ";
    cin >> team;
    cout << "Ф.И. игрока: ";
    cin >> name;
    cout << "Игровой номер: ";
    cin >> number;
    cout << "Возраст игрока: ";
    cin >> age;
    cout << "Рост игрока: ";
    cin >> height;
    cout << "Вес игрока: ";
    cin >> weight;
    cout << endl;
}

void Competitor::showData() {
    cout << "Страна: " << country << " | Название команды: " << team
        << " | Ф.И. игрока: " << name << " | Игровой номер: " << number
        << " | Возраст: " << age << " | Рост: " << height << " | Вес: " << weight << endl;
}
