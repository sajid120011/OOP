#include<iostream>
#include<string>
using namespace std;
class Engine
{
public:
  void render()
  {
    cout << "Rendering" << endl;
  }
};
class InputHandler
{
public:
  void handleInput()
  {
    cout << "Handling Input" << endl;
  }
};
class PhysicsEngine
{
public:
  void update()
  {
    cout << "Updating Physics" << endl;
  }
};
class GameEngine
{ 
private:
  Engine engine;
  InputHandler inputHandler;
  PhysicsEngine physicsEngine;
public:
  GameEngine(Engine engine, InputHandler inputHandler, PhysicsEngine physicsEngine)
  {
    this->engine=engine;
    this->inputHandler=inputHandler;
    this->physicsEngine=physicsEngine;
  }
  void start()
  {
    engine.render();
    inputHandler.handleInput();
    physicsEngine.update();
  }
};
int main()
{
  Engine engine;
  InputHandler inputHandler;
  PhysicsEngine physicsEngine;
  GameEngine gameEngine(engine, inputHandler, physicsEngine);
  gameEngine.start();
  return 0;
}
