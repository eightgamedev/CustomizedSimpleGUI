# include <Siv3D.hpp> // Siv3D v0.6.13

# include "scene/Common.hpp"
# include "scene/TestScene.hpp"

void Main()
{
	App manager;
	manager.add<TestScene>(State::TestScene);

	manager.init(State::TestScene);	

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
