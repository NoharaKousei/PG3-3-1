#include "Test.h"

Test* Test::GetInstance() {
	//�֐���static�ϐ��Ƃ��Đ錾����
	static Test instance;

	return &instance;
}