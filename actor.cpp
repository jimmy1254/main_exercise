#include "actor.h"
#include <iostream>

using namespace std;

Actor::Actor() :x{ 0 }, z{ 0 }, mType{ MoveType::Right }//초기값 설정 
{

}

void Actor::Tick()
{
	switch (mType)//MoveType::Right 부터시작
	{
	case MoveType::Right:
		x++;

		if (x >= 20)
		{
			mType = MoveType::Up;//조건을 달성하면 이동한다
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


// (x=x, z=z)<---이렇게 출력
void Actor::PrintLocation()
{
	cout << "(x = " << x << ", z = " << z << ")" << endl;
}
