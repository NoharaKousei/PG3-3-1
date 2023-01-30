#include "Test.h"

Test* Test::GetInstance() {
	//ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é
	static Test instance;

	return &instance;
}