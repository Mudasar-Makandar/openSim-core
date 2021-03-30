#include <iostream>
#include "Engine.h"
#include "EntryPoint.h"

class Application : public openSim::Engine
{
    public:
    Application()
    {

    }
    ~Application()
    {

    }
};

openSim::Engine* openSim::CreateApplication()
{
    return new Application();
}

