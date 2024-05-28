#include <iostream> 
using namespace std;

class Record {
private:
    int push_up;
    double run;
    int pull_up;
    double jump;
    int sit_up;
public:
    void print();


};

int main() {
    bool check = true;
    int num;
    while (check) {
        cin >> num;
        if (num == 1) {
            // 이름과 기록 입력 받기 
        }
        else if (num == 2) {
            //기록된 자료 출력 
        }
        else if (num == 3) {
            //참가자 이름을 입력 받아 그 참가자에게 패널티 주기 
        }
        else if (num == 4) {
            //종목별 평균을 내서 출력하는 기능  
        }
        else if (num == 5) {
            //프로그램 종료 구현 
        }
    }

}