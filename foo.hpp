#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result; // Wektor do przechowywania wynik�w

    for (auto& person : people) {
        person.birthday(); // Inkrementacja wieku przez wywo�anie metody `birthday`
    }

    // Przechodzimy przez list� w odwrotnej kolejno�ci i wype�niamy wektor
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        if (it->isMonster()) {
            result.push_back('n'); // Dodajemy 'n', je�li osoba to "potw�r"
        }
        else {
            result.push_back('y'); // Dodajemy 'y', je�li osoba nie jest "potworem"
        }
    }

    return result; // Zwracamy wektor wynik�w
}
