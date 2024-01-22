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

	pulldown3.setItems({ U"項目1", U"項目2", U"項目3", U"項目4", U"項目5", U"項目6", U"項目7", U"項目8", U"項目9", U"項目10" });
}

void TestScene::update()
{
	button.update();
	pulldown3.update();
	pulldown2.update();
	pulldown1.update();

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
	pulldown3.draw();
	pulldown2.draw();
	pulldown1.draw();
}
