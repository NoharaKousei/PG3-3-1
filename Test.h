#pragma once

class Test {
private:
	//�R���X�g���N�^��private�ɂ���
	Test();
	//�f�X�g���N�^��private�ɂ���
	~Test();
public:
	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	Test(const Test& obj) = delete;
	//������Z�q�𖳌��ɂ���
	Test& operator=(const Test& obj) = delete;

	static Test* GetInstance();
};