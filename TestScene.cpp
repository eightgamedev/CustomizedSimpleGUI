# include "Common.hpp"
# include "TestScene.hpp"
# include "Button.hpp"
# include "Pulldown.hpp"

TestScene::TestScene(const InitData& init)
	: IScene(init)
{
	// 背景の色を設定する | Set the background color
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	font.addFallback(fontEmoji);
}

void TestScene::update()
{
	button.update();
	pulldown.update();

	if (button.isPushed())
	{
		test = !test;
	}
	font(test).draw(200, 100);
}

void TestScene::draw() const
{
	RectF { 0, 0, 800, 600 }.draw(Palette::Skyblue);

	button.draw();
	pulldown.draw();
}
