#include <iostream>
#include <string>

using namespace std;

int get_year();

int get_month();

int get_language();

int sum_day(int *, int);

void put_day(int, int, int);

int main() {
    int year, month, language;

    year = get_year();
    month = get_month();
    language = get_language();

    bool run_year = (year - 2020) % 4 == 0;
    int run_year_num = (year - 2020) / 4 - (run_year ? 1 : 0);
    // 注意今年为闰年且输出月份为1月或2月

    int day_num = (year - 2021 - 1) * 365 + run_year_num;
    // 指经过天数
    int month_day_num[] = {31, run_year ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int *p = month_day_num;

    day_num += sum_day(p, month);

    int week_anchor_index = 5;
    // 21/12/31 周五

    int week_index = (week_anchor_index + day_num) % 7 + 1;
    // 肯定过了一天

    switch (language) {
        case 0:
            cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun" << endl;
            put_day(3, week_index, *++p);
            break;
        case 1:
            cout << "一  二  三  四  五  六  日" << endl;
            put_day(2, week_index, *++p);
            break;
        case 2:
            cout << "月  火  水  木  金  土  日" << endl;
            put_day(2, week_index, *++p);
            break;
        default:
            break;
    }

    return 0;
}

// 取[min,max]范围内输入值
int get_s(int max = 0, int min = 0, const string &hint = "") {
    cout << hint << endl;
    int t;
    while (cin >> t) {
        if (t <= max && t >= min) {
            break;
        }
    }
    return t;
}

int get_year() {
    return get_s(2050, 2022, "年份: 范围为[2022,2050]");
}

int get_month() {
    return get_s(12, 1, "月份: 范围为[1,12]");
}

int get_language() {
    return get_s(2, 0, "语言: 0为英文, 1为中文, 2为日文");
}

// 获取目标年数已经过天数总数
int sum_day(int *p, int month) {
    int t = 0;
    for (int i = 0; i < month - 1; ++i, p++) {
        t += *p;
    }
    return t;
}

// 给string添加空格
string extension_space(int length) {
    string t;
    for (int i = 0; i < length; i++) {
        t.append(" ");
    }
    return t;
}

// 输出日期
void put_day(int week_text_space_length, int week_index, int month_day) {
    string align_week_space = extension_space(week_text_space_length - 2);
    string space = extension_space(2);
    for (int i = 1; i < week_index; i++) {
        cout << align_week_space << space << space;
    }
    for (int i = 1; i <= month_day; i++, week_index++) {
        cout << align_week_space;
        if (i < 10) {
            cout << "0";
        }
        cout << i << space;

        if (week_index == 7) {
            week_index = 0;
            cout << "\n";
        }
    }
}
