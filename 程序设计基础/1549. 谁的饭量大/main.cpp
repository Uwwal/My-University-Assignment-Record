#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> food_size_array;
    food_size_array.push_back(1);
    food_size_array.push_back(2);
    food_size_array.push_back(3);

    for (int i = 0; i < food_size_array.size(); i++) {
        vector<int> tem = food_size_array;

        int a_food_size = tem[i];

        tem.erase(tem.begin() + i);

        for (int j = 0; j < food_size_array.size() - 1; j++) {
            int b_food_size = tem[j % tem.size()];
            int c_food_size = tem[(j + 1) % tem.size()];

            int a_content =
                    (b_food_size > a_food_size ? 1 : 0) +
                    (c_food_size == a_food_size ? 1 : 0);
            int b_content =
                    (a_food_size > b_food_size ? 1 : 0) +
                    (a_food_size > c_food_size ? 1 : 0);
            int c_content =
                    (c_food_size > b_food_size ? 1 : 0) +
                    (b_food_size > a_food_size ? 1 : 0);

            if ((a_food_size > b_food_size && a_content >= b_content) ||
                (a_food_size < b_food_size && a_content <= b_content))
                continue;

            if ((c_food_size > b_food_size && c_content >= b_content) ||
                (c_food_size < b_food_size && c_content <= b_content))
                continue;

            if ((a_food_size > c_food_size && a_content >= c_content) ||
                (a_food_size < c_food_size && a_content <= c_content))
                continue;

            map<int, char> food_to_person;
            food_to_person.insert(pair<int, char>(a_food_size, 'A'));
            food_to_person.insert(pair<int, char>(b_food_size, 'B'));
            food_to_person.insert(pair<int, char>(c_food_size, 'C'));

            int person_food_size_array[] = {a_food_size, b_food_size, c_food_size};
            sort(person_food_size_array,
                 person_food_size_array + sizeof(person_food_size_array) / sizeof(person_food_size_array[0]));

            cout << food_to_person[person_food_size_array[0]] << ' ' << food_to_person[person_food_size_array[1]] << ' '
                 << food_to_person[person_food_size_array[2]];

            return 0;
        }
    }


    return 0;
}
