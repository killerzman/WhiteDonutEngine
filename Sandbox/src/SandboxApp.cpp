#include <WhiteDonutEngine.h>

class Sandbox : public WhiteDonutEngine::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

WhiteDonutEngine::Application* WhiteDonutEngine::CreateApplication() {
	return new Sandbox();
}