#include "Test.h"

Test* Test::GetInstance() {
	//関数内static変数として宣言する
	static Test instance;

	return &instance;
}