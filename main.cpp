#include <iostream>
#include <vector>

#define person_num 4

using namespace std;

class Person {
private:
    vector<int> get_reverse_witness() {
        vector<int> tem;
        tem.reserve(this->witness.size());
        for (int i = 0; i < this->witness.size(); i++) {
            tem.push_back(this->witness[i]==0?1:0);
        }
        return tem;
    }

public:
    vector<int> witness;
    bool honesty;
    char name;

    vector<int> get_witness() {
        if (this->honesty) {
            return witness;
        } else {
            return get_reverse_witness();
        }
    }

    explicit Person(vector<int> witness, char name) {
        this->witness = witness;
        this->name = name;
        this->honesty = false;
    }
};

void initial_honesty(vector<Person> person_array);

int main() {
    /*
    Person A = Person({0, 1, 1, 1}, 'A');
    Person B = Person({0, 0, 0, 1}, 'B');
    Person C = Person({0, 1, 0, 0}, 'C');
    Person D = Person({1, 1, 1, 0}, 'D');
     */
    vector<int> _a;
    vector<int> _b;
    vector<int> _c;
    vector<int> _d;

    _a.push_back(0);
    _a.push_back(1);
    _a.push_back(1);
    _a.push_back(1);

    _b.push_back(0);
    _b.push_back(0);
    _b.push_back(0);
    _b.push_back(1);

    _c.push_back(0);
    _c.push_back(1);
    _c.push_back(0);
    _c.push_back(0);

    _d.push_back(1);
    _d.push_back(1);
    _d.push_back(1);
    _d.push_back(0);

    Person A = Person(_a, 'A');
    Person B = Person(_b, 'B');
    Person C = Person(_c, 'C');
    Person D = Person(_d, 'D');

    //vector<Person> person_array = {A, B, C, D};

    vector<Person> person_array;

    person_array.push_back(A);
    person_array.push_back(B);
    person_array.push_back(C);
    person_array.push_back(D);

    for (int i = 0; i < person_num; i++) {
        // 说真话的人
        person_array[i].honesty = true;
        if (i != 0) {
            person_array[i - 1].honesty = false;
        }

        for (int j = 0; j < person_num; j++) {
            Person person_tem = person_array[j];

            for (int k = 0; k < person_num; k++) {
                if(person_array[k].get_witness()[j]==0){
                    break;
                }else if(k == person_num-1){
                    cout << person_tem.name;
                    return 0;
                }
            }
        }
    }

    return 0;
}