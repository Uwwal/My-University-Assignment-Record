#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    int year_run_num = (t - 2020) / 4;
    bool year_run = (t - 2020) % 4 == 0;

    t -= 2021;

    int day_num = 365 * (t - 1) + year_run_num + (year_run ? -1 : 0) + (30 - 13) + 31 + 30 + 31;
    // t-1 -> 如2022肯定过了0个完整的年


    int week_index = (day_num % 7 + 1 + 1) == 8 ? 1 : day_num % 7 + 1 + 1;
    // +1 指9月13是周一
    // +1 指%7之后是0~6

    string s = "01";

    for (int i = 1; i < week_index; i++) {
        s = s.append("\t");
    }

    int month_day_num[] = {31, year_run ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int month = 1; month <= 12; month++) {
        for (int day = 1; day <= month_day_num[month - 1]; day++, week_index++) {
            if (week_index == 8) {
                week_index -= 7;
                s.append("\n");
            }
            if (day + 8 > (month_day_num[month - 1] + 1) && week_index == 1 && month != 12) {
                s = s.append((month + 1) < 10 ? "0" + to_string(month + 1) : to_string(month + 1));
            } else {
                s = s.append("\t");
            }
            s = s.append(day < 10 ? "\t0" + to_string(day) : "\t" + to_string(day));
        }
    }
    cout << s;
    return 0;
}
/*
任务1、制作任意年份指定月份的日历如下是某个年份1月到5月的日历样例。请参照其排版格式（每行从左向右对应的是周一至周日），编写一个程序，
能输出2022~
2050任意指定年份12个月的日历。提示：“2021.09.13是周一”这个信息可以用于推算后续各天所属的星期。程序运行结果要截图。
*/

/*
事实证明制表符\t真的很弱智 不过空格更弱智就是了
*/
