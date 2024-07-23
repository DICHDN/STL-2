/*
Задача 1. Уникальный вектор
Описание
Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

Пример правильной работы программы
[IN]: 1 1 2 5 6 1 2 4
[OUT]: 1 2 4 5 6


*/
#include <iostream>
#include <vector>
#include <set>

std::vector<int> allUnic(std::vector<int> vec)
{
    std::set<int> vecSet;
    for (const auto& elem : vec) vecSet.insert(elem); // создаем отсортированный список уникальных значений
    vec.clear(); // очищаем исходный вектор
    for (const int& elem : vecSet) vec.push_back(elem); // заполняем исходный вектор нужными значениями
    return vec;
}

void prinVec(std::vector<int> A)
{
    std::cout << std::endl;
    for (auto& elem : A) std::cout << elem << " ";
}

int main()
{
    std::vector<int> userVec = { 1, 1, 2, 5, 6, 1, 2, 4 };
    prinVec(allUnic(userVec));
}

