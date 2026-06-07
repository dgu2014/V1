#include <V1.h>

class Sandbox : public V1::Application
{
public:
    Sandbox() {  }
    ~Sandbox() {  }
    
};


V1::Application* V1::CreateApplication()
{
    return new Sandbox();
}
