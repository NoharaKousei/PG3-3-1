#include "Enemy.h"
　
bool Enemy::isAlive_ = true;

int main()
{
	std::array<Enemy, 5> enemy{};
	// 敵状態を表示
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n敵%d:", i);

		enemy[i].Print();
	}

	enemy[4].SetAlive(false);

	printf("\n敵4を倒しました\n");

	// 敵状態を再表示
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n敵%d:", i);

		enemy[i].Print();
	}

	return 0;
}