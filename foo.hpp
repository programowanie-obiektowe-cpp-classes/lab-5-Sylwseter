#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result; // Wektor do przechowywania wyników

    for (auto& person : people) {
        person.birthday(); // Inkrementacja wieku przez wywo³anie metody `birthday`
    }

    // Przechodzimy przez listê w odwrotnej kolejnoœci i wype³niamy wektor
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        if (it->isMonster()) {
            result.push_back('n'); // Dodajemy 'n', jeœli osoba to "potwór"
        }
        else {
            result.push_back('y'); // Dodajemy 'y', jeœli osoba nie jest "potworem"
        }
    }

    return result; // Zwracamy wektor wyników
}
