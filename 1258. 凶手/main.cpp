#include <iostream>

#define person_num 6

using namespace std;

int judge_testimony_A(int person_index);

int judge_testimony_B(int person_index);

int judge_testimony_C(int person_index);

int judge_testimony_D(int person_index);

int judge_testimony_E(int person_index);

int judge_testimony_F(int person_index);

int main() {
    string s;

    for (int i = 0; i < person_num; i++) {
        int t = 0;
        t += judge_testimony_A(i);
        t += judge_testimony_B(i);
        t += judge_testimony_C(i);
        t += judge_testimony_D(i);
        t += judge_testimony_E(i);
        t += judge_testimony_F(i);

        if (t == 3) {
            if (!s.empty()) {
                s += "\n";
            }
            s += char(i + 65);
        }
    }
    cout << s;
    return 0;
}

int judge_testimony_A(int person_index) {
    if (person_index == 0) {
        return 0;
    }
    return 1;

}

int judge_testimony_B(int person_index) {
    if (person_index == 0 || person_index == 2) {
        return 1;
    }
    return 0;
}

int judge_testimony_C(int person_index) {
    if (!judge_testimony_A(person_index) && !judge_testimony_B(person_index)) {
        return 1;
    }
    return 0;
}

int judge_testimony_D(int person_index) {
    if (!judge_testimony_C(person_index) && !judge_testimony_F(person_index)) {
        return 1;
    }
    return 0;
}

int judge_testimony_E(int person_index) {
    if (judge_testimony_A(person_index) && !judge_testimony_B(person_index) && !judge_testimony_C(person_index) &&
        judge_testimony_D(person_index) && !judge_testimony_F(person_index)) {
        return 1;
    }
    return 0;
}

int judge_testimony_F(int person_index) {
    if (person_index == 5) {
        return 1;
    }
    return 0;
}
