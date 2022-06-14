#pragma once


/*
Actor Ŭ����
-�ɹ� ����
private:MoveType mtype - �ʱⰪ: MoveType::Right
private:int x - �ʱⰪ : 0
private:int z - �ʱⰪ : 0

funtion(�Լ�)
public:void Tick(); // main() �Լ��� while���ȿ��� ȣ���� ����
public:void PrintLocation();// (x=x, z=z)<---�̷��� ���

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
	Actor();//��Ŭ�� �����۾����� cpp�� �ٵ� ����1
	void Tick();
	void PrintLocation();
};

