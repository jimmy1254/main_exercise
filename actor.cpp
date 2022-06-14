#include "actor.h"
#include <iostream>

using namespace std;

Actor::Actor() :x{ 0 }, z{ 0 }, mType{ MoveType::Right }//�ʱⰪ ���� 
{

}

void Actor::Tick()
{
	switch (mType)//MoveType::Right ���ͽ���
	{
	case MoveType::Right:
		x++;

		if (x >= 20)
		{
			mType = MoveType::Up;//������ �޼��ϸ� �̵��Ѵ�
		}
		break;
	case MoveType::Up:
		z++;

		if (z >= 20)
		{
			mType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		x--;

		if (x <= 0)
		{
			mType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		z--;

		if (z <= 0)
		{
			mType = MoveType::Right;
		}

		break;
	default:
		break;
	}
}


// (x=x, z=z)<---�̷��� ���
void Actor::PrintLocation()
{
	cout << "(x = " << x << ", z = " << z << ")" << endl;
}
