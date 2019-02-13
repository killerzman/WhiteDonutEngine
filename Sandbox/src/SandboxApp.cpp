#include <WDE.H>

class Sandbox : public WDE::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

WDE::Application* WDE::CreateApplication() {
	return new Sandbox();
}