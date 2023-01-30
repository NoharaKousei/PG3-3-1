#pragma once

class Test {
private:
	//コンストラクタをprivateにする
	Test();
	//デストラクタをprivateにする
	~Test();
public:
	//コピーコンストラクタを無効にする
	Test(const Test& obj) = delete;
	//代入演算子を無効にする
	Test& operator=(const Test& obj) = delete;

	static Test* GetInstance();
};