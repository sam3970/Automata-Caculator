#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

#define STACK_SIZE 20

//토큰 종류
enum TknKind {
	print, Lparen, Rparen, Plus, Minus, Multi, Divi, Pow
	,Assign, VarName, IntNum, EofTkn, Others 
};

struct Token
{
	TknKind kind; //열거형 변수를 구조체에 선언
	int intVal; //상수값이나 변수 번호를 지정하는 변수
	
	Token() //기본 생성자
	{
		kind = Others;
		intVal = 0;
	}

	Token(TknKind k, int d = 0) //매개변수가 있는 생성자
	{
		kind = k;
		int val = d;
	}
};

void input();

int errF;
int stack[STACK_SIZE+1]; //배열값이 0이 아닌 1부터 시작하기 위함
int stack_mm; //스택 관리
Token token; //토큰값을 저장하기 위한 변수

int main(void)
{
	while (1)
	{
		input();
	}

	return 0;
}

void input()
{
	errF = 0;
	stack_mm = 0;

}