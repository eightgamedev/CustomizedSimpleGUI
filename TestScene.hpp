#pragma once
# include "Button.hpp"
# include "Pulldown.hpp"

class TestScene : public App::Scene
{
public:
	TestScene(const InitData& init);
	void update() override;
	void draw() const override;
private:
	Font font{ 24 };
	Font fontEmoji{ 24, Typeface::ColorEmoji };
	bool test = false;
	ListBoxState state1{ {U"項目1", U"項目2", U"項目3", U"項目4", U"項目5", U"項目6", U"項目7", U"項目8", U"項目9", U"項目10"} };
	ListBoxState state2{ { U"🐈", U"🐕", U"🐇", U"🐦", U"🐟", U"🐍", U"🐎", U"🐄", U"🐖", U"🐏" } };
	
	CustomizedSimpleGUI::Button button{ U"ボタン", 24, Vec2{ 100, 100 } };
	CustomizedSimpleGUI::Pulldown pulldown1{ state1, font, Vec2{ 100, 200 }, 400, 4 };
	CustomizedSimpleGUI::Pulldown pulldown2{ state2, font, Vec2{ 100, 300 }, 400, 4 };
	CustomizedSimpleGUI::Pulldown pulldown3{ font, Vec2{ 100, 400 }, 400, 4 };
};
