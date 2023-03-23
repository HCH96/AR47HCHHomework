// 037._typedef.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <vector>

class Player
{
public:
    int Hp = 20;
    int Maxatt = 20;
    int Minatt = 20;
    int Mdef = 20;
    int Pdef = 20;
    int Crit = 20;

    void TextFunction()
    {

    }
};

int main()
{
    Player  NewPlayer = Player();
    std::vector<Player*> arr[10];
}
