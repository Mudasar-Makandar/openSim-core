#pragma once

extern openSim::Engine* openSim::CreateApplication();

int main(int argc, char** argv)
{
    std::cout << "Hello World!" << std::endl;
    auto App = openSim::CreateApplication();
    App->Run();
    delete App;

}