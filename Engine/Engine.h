#pragma once

namespace openSim 
{

    class Engine
    {
    private:
        /* data */
    public:
        Engine();
        virtual ~Engine();

        void Run();
    };

    Engine* CreateApplication();
}

