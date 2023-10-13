

#include <iostream>
#include <map>
using namespace std;

int main()
{
    setlocale(0, "");
    map<string, string> dictionary;
    while (1)
    {
        int choice;
        cout << "1 - Обзор\n";
        cout << "2 - Добавить\n";
        cout << "3 - Удалить\n";
        cout << "4 - Найти\n";
        cout << "Выберите опцию: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Все слова\n";
            for (auto it = dictionary.begin(); it != dictionary.end(); it++)
            {
                cout << it->first << " - " << it->second;
                cout << endl;
            }
            cout << endl;
        }
        if (choice == 2)
        {
            string word;
            string key;
            cout << "Введите слово которое хотите добавить(англ): ";
            cin >> word;
            cout << "Введите ключ к слову(рус): ";
            cin >> key;
            dictionary.insert(pair<string, string>(key, word));
            cout << "Слово добавлено\n";
        }
        if (choice == 3)
        {
            string key;
            cout << "Введите ключ для удаления(рус): ";
            cin >> key;
            dictionary.erase(key);
        }
        if (choice == 4)
        {
            string key;
            cout << "Введите ключ для посика(рус): ";
            cin >> key;
            auto it=dictionary.find(key);
            cout << it->first << " - " << it->second;
            cout << endl;
        }
    }
}

