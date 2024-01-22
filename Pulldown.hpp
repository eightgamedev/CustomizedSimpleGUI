#pragma once

namespace CustomizedSimpleGUI
{

	class Pulldown
	{
	public:
		Pulldown(const Font font, const Vec2& displayPos, const double width, const int32 listCount);
		Pulldown(ListBoxState state, const Font font, const Vec2& displayPos, const double width, const int32 listCount);
		mutable ListBoxState m_state;
		void emplace_back(String item);
		void setItems(const Array<String>& items);
		void setIndex(const size_t index);
		void setIndexFromItem(const String& item);
		size_t getSelectedIndex() const;
		String getSelectedItem() const;
		bool getIsOpen() const;
		void update();
		void draw() const;
		RectF getDisplayRegion() const;
		static void closeCurrentOpeningListBox();
	private:
		static Pulldown* currentOpeningListBox;
		Vec2 m_displayPos;
		Font m_font;
		int32 m_fontHeight;
		RectF m_displayRegion;
		bool m_isOpen;
		int32 m_listCount;

		int32 m_maxLines;
		int32 m_lines;
		RectF m_listRegion;
		Optional<size_t> oldState;
		bool hasScrollBar;
		Vec2 m_listPos;
		int32 itemWidth;
	};

}
