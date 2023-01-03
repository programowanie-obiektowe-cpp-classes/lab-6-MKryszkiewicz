#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    using namespace std;

    vector<char>zwierz(people.size());

    transform(
        begin(people), end(people), zwierz.begin(), [](Human&  human)
        {
            human.birthday();
            if (human.isMonster())
                return 'n';
            else
                return 'y'; 
        });

    reverse(zwierz.begin(), zwierz.end());
    return zwierz;
}
