#pragma once


/*
Actor 클래스
-맴버 변수
private:MoveType mtype - 초기값: MoveType::Right
private:int x - 초기값 : 0
private:int z - 초기값 : 0

funtion(함수)
public:void Tick(); // main() 함수에 while문안에서 호출할 예정
public:void PrintLocation();// (x=x, z=z)<---이렇게 출력

*/
enum class MoveType {
	Right,
	Up,
	Left,
	Down
};

class Actor
{
	MoveType mType;
	int x;
	int z;

public:
	Actor();//우클릭 빠른작업으로 cpp에 바디 생성1
	void Tick();
	void PrintLocation();
};

