#include <iostream> 
using namespace std;

class Record {
private:
    int push_up;
    double run;
    int pull_up;
    double jump;
    int sit_up;
    string name;
public:
    Record();
    void print();//기록된 자료를 출력하는 기능
    void cin_record();
    string ret_name();
    Record operator+(Record& c);

};
void Record::print()
{
    cout << push_up << "   " << run << "   " << pull_up << "   " << jump << "   " << sit_up << endl;
}
Record::Record()
{
    name = "";
    push_up = 0;
    run = 0.0;
    pull_up = 0;
    jump = 0.0;
    sit_up = 0;
}
string Record::ret_name()
{
    return name;
}
void Record::cin_record()
{
    cout << "이름과 기록을 입력하세요: ";
    cin >> name >> push_up >> run >> pull_up >> jump >> sit_up;
}
Record Record::operator+(Record& c)
{
    Record temp;
    temp.push_up = this->push_up + c.push_up;
    temp.run = this->run + c.run;
    temp.pull_up = this->pull_up + c.pull_up;
    temp.jump = this->jump + c.jump;
    temp.sit_up = this->sit_up + c.sit_up;

}

int main() {
    Record* rec = new Record[100];
    int cnt = 0;
    string pnt_name;
    bool check = true;
    int num;
    while (check) {
        cin >> num;
        if (num == 1) {
            rec[cnt].cin_record();
            cnt++;
        }
        else if (num == 2) {
            cout << "이름" << "   " << "팔굽혀펴기" << "   " << "턱걸이" << "   " << "제자리멀리뛰기" << "   " << "윗몸일으키기";
            cout << endl;
            for (int i = 0; i < 100; i++)
            {
                if (rec[i].ret_name() == "")
                    break;
                else
                    rec[i].print();
            }
        }
        else if (num == 3) {
            cout << "페널티를 받을 참가자의 이름을 입력하세요: ";
            cin >> pnt_name;

        }
        else if (num == 4) {
            //종목별 평균을 내서 출력하는 기능  
        }
        else if (num == 5) {
            cout << "프로그램을 종료합니다" << endl;
            return 0;
        }
    }

}
