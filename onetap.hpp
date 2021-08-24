/////////////////////////////////////////////////////
//                                                   
//    Generated with QuarcStudio. (ex. ImGui Editor) 
//    QuarcStudio is designed with love by pers0na2. 
//    All rights to QuarcStudio belong to pers0na2.  
//                                                   
/////////////////////////////////////////////////////


#ifndef QGUIHEADERGUARD
#define QGUIHEADERGUARD

#include <imgui.h>
#define IMGUI_DEFINE_MATH_OPERATORS
#define IM_USE using namespace ImGui; 
#include <imgui_internal.h>

#include "sffont.hpp"
#include "hashes.h"
#include "faprolight.hpp"

namespace qgui
{
	ImVec2 p;
	ImDrawList* draw;

	void init_styles(ImGuiStyle& style)
	{
 		style.WindowPadding = ImVec2(0.000000f,0.000000f);
 		style.FramePadding = ImVec2(4.000000f,3.000000f);
 		style.ItemSpacing = ImVec2(8.000000f,4.000000f);
 		style.ItemInnerSpacing = ImVec2(4.000000f,4.000000f);
 		style.IndentSpacing = 21.000000f;
 		style.ScrollbarSize = 1.000000f;
 		style.GrabMinSize = 1.000000f;
 		style.WindowBorderSize = 0.000000f;
 		style.ChildBorderSize = 1.000000f;
 		style.PopupBorderSize = 1.000000f;
 		style.FrameBorderSize = 1.000000f;
 		style.WindowRounding = 0.000000f;
 		style.ChildRounding = 0.000000f;
 		style.FrameRounding = 0.000000f;
 		style.PopupRounding = 0.000000f;
 		style.ScrollbarRounding = 0.000000f;
 		style.GrabRounding = 0.000000f;
 		style.WindowTitleAlign = ImVec2(0.000000f,0.500000f);
 		style.ButtonTextAlign = ImVec2(0.500000f,0.500000f);
 		style.SelectableTextAlign = ImVec2(0.500000f,0.500000f);

 		style.Colors[ImGuiCol_Text] = ImVec4(0.900000f,0.900000f,0.900000f,1.000000f);
 		style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.600000f,0.600000f,0.600000f,1.000000f);
 		style.Colors[ImGuiCol_WindowBg] = ImVec4(0.000000f,0.000000f,0.000000f,0.000000f);
 		style.Colors[ImGuiCol_ChildBg] = ImVec4(0.000000f,0.000000f,0.000000f,0.000000f);
 		style.Colors[ImGuiCol_PopupBg] = ImVec4(0.110000f,0.110000f,0.140000f,0.920000f);
 		style.Colors[ImGuiCol_Border] = ImVec4(0.500000f,0.500000f,0.500000f,0.500000f);
		style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.000000f,0.000000f,0.000000f,0.000000f);
 		style.Colors[ImGuiCol_FrameBg] = ImVec4(0.430000f,0.430000f,0.430000f,0.390000f);
		style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.470000f,0.470000f,0.690000f,0.400000f);
		style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.420000f,0.410000f,0.640000f,0.690000f);
 		style.Colors[ImGuiCol_TitleBg] = ImVec4(0.270000f,0.270000f,0.540000f,0.830000f);
 		style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.320000f,0.320000f,0.630000f,0.870000f);
 		style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.400000f,0.400000f,0.800000f,0.200000f);
 		style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.400000f,0.400000f,0.550000f,0.800000f);
 		style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.200000f,0.250000f,0.300000f,0.600000f);
 		style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.400000f,0.400000f,0.800000f,0.300000f);
 		style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.400000f,0.400000f,0.800000f,0.400000f);
 		style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.410000f,0.390000f,0.800000f,0.600000f);
 		style.Colors[ImGuiCol_CheckMark] = ImVec4(0.900000f,0.900000f,0.900000f,0.500000f);
 		style.Colors[ImGuiCol_SliderGrab] = ImVec4(1.000000f,1.000000f,1.000000f,0.300000f);
 		style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.410000f,0.390000f,0.800000f,0.600000f);
 		style.Colors[ImGuiCol_Button] = ImVec4(0.350000f,0.400000f,0.610000f,0.620000f);
 		style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.400000f,0.480000f,0.710000f,0.790000f);
 		style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.460000f,0.540000f,0.800000f,1.000000f);
 		style.Colors[ImGuiCol_Header] = ImVec4(0.400000f,0.400000f,0.900000f,0.450000f);
 		style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.450000f,0.450000f,0.900000f,0.800000f);
 		style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.530000f,0.530000f,0.870000f,0.800000f);
 		style.Colors[ImGuiCol_Separator] = ImVec4(0.500000f,0.500000f,0.500000f,0.600000f);
 		style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.600000f,0.600000f,0.700000f,1.000000f);
 		style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.700000f,0.700000f,0.900000f,1.000000f);
 		style.Colors[ImGuiCol_ResizeGrip] = ImVec4(1.000000f,1.000000f,1.000000f,0.160000f);
 		style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.780000f,0.820000f,1.000000f,0.600000f);
 		style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.780000f,0.820000f,1.000000f,0.900000f);
 		style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.000000f,0.000000f,1.000000f,0.350000f);
 		style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.000000f,1.000000f,0.000000f,0.900000f);

		static const ImWchar ranges[] =
		{
			0x0020, 0x00FF, // Basic Latin + Latin Supplement
			0x2000, 0x206F, // General Punctuation
			0x3000, 0x30FF, // CJK Symbols and Punctuations, Hiragana, Katakana
			0x31F0, 0x31FF, // Katakana Phonetic Extensions
			0xFF00, 0xFFEF, // Half-width characters
			0x4e00, 0x9FAF, // CJK Ideograms
			0x0400, 0x052F, // Cyrillic + Cyrillic Supplement
			0x2DE0, 0x2DFF, // Cyrillic Extended-A
			0xA640, 0xA69F, // Cyrillic Extended-B
			0,
		};

		ImFontConfig font_cfg{};
		font_cfg.FontDataOwnedByAtlas = false;
		ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(sfpro_compressed_data, sfpro_compressed_size, 14, &font_cfg, ranges);

		static const ImWchar icon_ranges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };
		ImFontConfig icons_config; icons_config.MergeMode = true; icons_config.PixelSnapH = true;
		ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&faprolight, sizeof faprolight, 14, &icons_config, icon_ranges);
	}

	void shadow(ImDrawList * drawlist, ImVec2 pos, ImVec2 size, ImVec4 color, int rounding)
	{
		while (true)
		{
			if (color.w <= 0.019f)
				break;
			drawlist->AddRect(pos, pos + size, ImGui::GetColorU32(color), rounding);
			color.w -= color.w / 8;
			pos -= ImVec2(1.f, 1.f);
			size += ImVec2(2.f, 2.f);
		}
	}

	bool checkbox(const char* label, bool* v)
	{
		IM_USE;
		ImGuiWindow* window = GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
		const float square_sz = ImGui::GetFrameHeight();
		const ImVec2 pos = window->DC.CursorPos;
		const ImRect total_bb(pos, pos + ImVec2(square_sz + (style.ItemInnerSpacing.x + label_size.x+0),10+label_size.y +style.FramePadding.y * 2));
		ItemSize(total_bb, style.FramePadding.y);
		ItemAdd(total_bb, id);

		bool hovered, held;
		bool pressed = ButtonBehavior(total_bb, id, &hovered, &held);

		if (hovered || held)
			ImGui::SetMouseCursor(0);

		if (pressed)
			*v = !(*v);

			window->DrawList->AddRectFilled(ImVec2(total_bb.Min.x + 0, total_bb.Min.y + 9), ImVec2(total_bb.Min.x + 13, total_bb.Min.y + 22), ImColor(175,175,179,255),3, 15); 

		if (*v)
		{
			ImGui::RenderCheckMark(window->DrawList, ImVec2(total_bb.Min.x + 2, total_bb.Min.y + 11), ImColor(60,60,60), 9.f);
		}

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255/ 255.f , 254/ 255.f ,254/ 255.f ,255/ 255.f ));
		ImGui::RenderText(ImVec2(total_bb.Min.x + style.ItemInnerSpacing.x +  15, total_bb.Min.y + style.FramePadding.y + 5), label);
		ImGui::PopStyleColor();
		return pressed;
	}

	bool button(const char* label, const ImVec2& size_arg)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);

		ImVec2 pos = window->DC.CursorPos;
		ImVec2 size = ImGui::CalcItemSize(size_arg, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

		const ImRect bb(pos, pos + size);
		ImGui::ItemSize(size, style.FramePadding.y);
		if (!ImGui::ItemAdd(bb, id))
			return false;

		bool hovered, held;
		bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held, NULL);

		if (hovered || held)
			ImGui::SetMouseCursor(0);

		window->DrawList->AddRectFilled(ImVec2(bb.Min.x + 0, bb.Min.y + 0), ImVec2(bb.Max.x + 0, bb.Max.y + 0), ImColor(29,28,32,244),4, 15); 
		window->DrawList->AddRect(ImVec2(bb.Min.x + 0, bb.Min.y + 0), ImVec2(bb.Max.x + 0, bb.Max.y + 0), ImColor(56,54,59,255),4, 15, 1.000000); 
 		window->DrawList->AddRect(ImVec2(bb.Min.x + -1, bb.Min.y + -1), ImVec2(bb.Max.x + 1, bb.Max.y + 1), ImColor(17,17,22,255),4, 15, 1.000000); 
 		window->DrawList->AddRect(ImVec2(bb.Min.x + 1, bb.Min.y + 1), ImVec2(bb.Max.x + -1, bb.Max.y + -1), ImColor(17,17,22,255),4, 15, 1.000000); 
 
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(229/ 255.f , 229/ 255.f ,229/ 255.f ,255/ 255.f ));
		ImGui::RenderTextClipped(bb.Min + style.FramePadding, bb.Max - style.FramePadding, label, NULL, &label_size, style.ButtonTextAlign, &bb);
		ImGui::PopStyleColor();

		return pressed;
	}

	static float CalcMaxPopupHeightFromItemCount(int items_count)
	{
		ImGuiContext & g = *GImGui; 
		if (items_count <= 0)
			return FLT_MAX; 
		return (g.FontSize + g.Style.ItemSpacing.y) * items_count - g.Style.ItemSpacing.y + (g.Style.WindowPadding.y * 2); 
	}

	bool combo(const char* label, int* current_item, const char* const items[], int items_count, int popup_max_height_in_items = -1);
	bool combo(const char* label, int* current_item, const char* items_separated_by_zeros, int popup_max_height_in_items = -1);
	bool combo(const char* label, int* current_item, bool(*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int popup_max_height_in_items = -1);

	bool begincombo(const char* label, const char* preview_value, ImGuiComboFlags flags)
	{
		IM_USE;
		ImGuiContext& g = *GImGui;
		bool has_window_size_constraint = (g.NextWindowData.Flags & ImGuiNextWindowDataFlags_HasSizeConstraint) != 0;
		g.NextWindowData.Flags &= ~ImGuiNextWindowDataFlags_HasSizeConstraint;

		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);

		const float arrow_size = (flags & ImGuiComboFlags_NoArrowButton) ? 0.0f : ImGui::GetFrameHeight();
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
		const float expected_w =299;
		const float w = (flags & ImGuiComboFlags_NoPreview) ? arrow_size : expected_w;

		const ImRect frame_bb(window->DC.CursorPos, window->DC.CursorPos + ImVec2(w +0, 0 + style.FramePadding.y * 2.0f + 47));
		const ImRect total_bb(frame_bb.Min, frame_bb.Max + ImVec2(label_size.x > 0.0f ? style.ItemInnerSpacing.x + 0 : 0.0f, 0.0f));

		ImGui::ItemSize(total_bb, style.FramePadding.y);
		if (!ImGui::ItemAdd(total_bb, id, &frame_bb))
			return false;

		bool hovered, held;
		bool pressed = ImGui::ButtonBehavior(frame_bb, id, &hovered, &held);
		bool popup_open = ImGui::IsPopupOpen(id, ImGuiPopupFlags_None);

		if (hovered || held)
			ImGui::SetMouseCursor(7);

		const float value_x2 = ImMax(frame_bb.Min.x, frame_bb.Max.x - arrow_size);

			window->DrawList->AddRectFilled(ImVec2(frame_bb.Min.x + 1, frame_bb.Min.y + 26), ImVec2(frame_bb.Max.x + 4, frame_bb.Max.y + -1), ImColor(0.115454f,0.112457f,0.127451f,0.956863f),4, 15); 
		window->DrawList->AddRect(ImVec2(frame_bb.Min.x + 0, frame_bb.Min.y + 25), ImVec2(frame_bb.Max.x + 5, frame_bb.Max.y + 0), ImColor(0.219608f,0.215686f,0.235294f,1.000000f),4, 15, 1.000000); 
 		window->DrawList->AddRect(ImVec2(frame_bb.Min.x + -1, frame_bb.Min.y + 24), ImVec2(frame_bb.Max.x + 6, frame_bb.Max.y + 1), ImColor(0.070588f,0.070588f,0.090196f,1.000000f),4, 15, 1.000000); 
 		window->DrawList->AddRect(ImVec2(frame_bb.Min.x + 1, frame_bb.Min.y + 26), ImVec2(frame_bb.Max.x + 4, frame_bb.Max.y + -1), ImColor(0.070588f,0.070588f,0.090196f,1.000000f),4, 15, 1.000000); 
 		if (!(flags & ImGuiComboFlags_NoArrowButton))
		{
			ImU32 text_col = ImGui::GetColorU32(ImGuiCol_Text);
				if (value_x2 + arrow_size - style.FramePadding.x <= frame_bb.Max.x)
					ImGui::RenderArrow(window->DrawList, ImVec2(value_x2 + style.FramePadding.y + -2,frame_bb.Min.y + style.FramePadding.y +30), text_col, ImGuiDir_Down,1);
		}

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255/ 255.f , 254/ 255.f ,254/ 255.f ,255/ 255.f ));
		if (preview_value != NULL && !(flags & ImGuiComboFlags_NoPreview))
			ImGui::RenderText(frame_bb.Min + style.FramePadding + ImVec2(5,29), preview_value);
		ImGui::PopStyleColor();

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255/ 255.f , 254/ 255.f ,254/ 255.f ,255/ 255.f ));
		if (label_size.x > 0)
			ImGui::RenderText(ImVec2(frame_bb.Min.x+ style.ItemInnerSpacing.x +-4, frame_bb.Min.y + style.FramePadding.y +0), label);
		ImGui::PopStyleColor();

		if ((pressed || g.NavActivateId == id) && !popup_open)
		{
			if (window->DC.NavLayerCurrent == 0)
				window->NavLastIds[0] = id;
			ImGui::OpenPopupEx(id, ImGuiPopupFlags_None);
			popup_open = true;
		}

		if (!popup_open)
			return false;

		if ((flags & ImGuiComboFlags_HeightMask_) == 0)
			flags |= ImGuiComboFlags_HeightRegular;
		IM_ASSERT(ImIsPowerOfTwo(flags & ImGuiComboFlags_HeightMask_));
		int popup_max_height_in_items = -1;
		if (flags & ImGuiComboFlags_HeightRegular)     popup_max_height_in_items = 8;
		else if (flags & ImGuiComboFlags_HeightSmall)  popup_max_height_in_items = 4;
		else if (flags & ImGuiComboFlags_HeightLarge)  popup_max_height_in_items = 20;
		ImGui::SetNextWindowSizeConstraints(ImVec2(w, 0.0f), ImVec2(FLT_MAX, CalcMaxPopupHeightFromItemCount(popup_max_height_in_items)));

		char name[16];
		ImFormatString(name, IM_ARRAYSIZE(name), "##Combo_%02d", g.BeginPopupStack.Size);

		if (ImGuiWindow * popup_window = ImGui::FindWindowByName(name))
			if (popup_window->WasActive)
			{
				ImVec2 size_expected = ImGui::CalcWindowExpectedSize(popup_window);
				if (flags & ImGuiComboFlags_PopupAlignLeft)
					popup_window->AutoPosLastDirection = ImGuiDir_Left;
				ImRect r_outer = ImGui::GetWindowAllowedExtentRect(popup_window);
				ImVec2 pos = ImGui::FindBestWindowPosForPopupEx(frame_bb.GetBL(), size_expected, &popup_window->AutoPosLastDirection, r_outer, frame_bb, ImGuiPopupPositionPolicy_ComboBox);
				ImGui::SetNextWindowPos(pos);
			}

		ImGuiWindowFlags window_flags = ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_Popup | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoMove;

		ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(style.FramePadding.x, style.WindowPadding.y));
		bool ret = ImGui::Begin(name, NULL, window_flags);
		ImGui::PopStyleVar();

		if (!ret)
		{
			ImGui::EndPopup();
			return false;
		}
		return true;
	}

	static bool Items_ArrayGetter(void* data, int idx, const char** out_text)
	{
		const char* const* items = (const char* const*)data;
		if (out_text)
			*out_text = items[idx];
		return true;
	}

	static bool Items_SingleStringGetter(void* data, int idx, const char** out_text)
	{
		// FIXME-OPT: we could pre-compute the indices to fasten this. But only 1 active combo means the waste is limited.
		const char* items_separated_by_zeros = (const char*)data;
		int items_count = 0;
			const char* p = items_separated_by_zeros;
			while (*p)
			{
			if (idx == items_count)
				break;
			p += strlen(p) + 1;
			items_count++;
		}
		if (!*p)
			return false;
		if (out_text)
			*out_text = p;
		return true;
	}

	bool combo(const char* label, int* current_item, bool (*items_getter)(void*, int, const char**), void* data, int items_count, int popup_max_height_in_items)
	{
		IM_USE;
		ImGuiContext& g = *GImGui;
			const char* preview_value = NULL;
		if (*current_item >= 0 && *current_item < items_count)
			items_getter(data, *current_item, &preview_value);
		if (popup_max_height_in_items != -1 && !(g.NextWindowData.Flags & ImGuiNextWindowDataFlags_HasSizeConstraint))
			SetNextWindowSizeConstraints(ImVec2(0, 0), ImVec2(FLT_MAX, CalcMaxPopupHeightFromItemCount(popup_max_height_in_items)));
		if (!begincombo(label, preview_value, ImGuiComboFlags_None))
			return false;
		bool value_changed = false;

		for (int i = 0; i < items_count; i++)
		{
			PushID((void*)(intptr_t)i);
			const bool item_selected = (i == *current_item);
			const char* item_text;

			if (!items_getter(data, i, &item_text))
				item_text = " * Unknown item * ";

			if (Selectable(item_text, item_selected))
			{
			value_changed = true;
				*current_item = i;
			}
			if (item_selected)
				SetItemDefaultFocus(); 
			PopID();
		}

		EndCombo();
		return value_changed;
	}

	bool combo(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items)
	{
		const bool value_changed = combo(label, current_item, Items_ArrayGetter, (void*)items, items_count, height_in_items);
		return value_changed;
	}

	bool combo(const char* label, int* current_item, const char* items_separated_by_zeros, int height_in_items)
	{
		int items_count = 0;
		const char* p = items_separated_by_zeros;

		while (*p)
		{
			p += strlen(p) + 1;
			items_count++;
		}

		bool value_changed = combo(label, current_item, Items_SingleStringGetter, (void*)items_separated_by_zeros, items_count, height_in_items);
		return value_changed;
	}

	bool tab(const char* label, const char* icon,  bool selected)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);

		ImVec2 pos = window->DC.CursorPos;
		ImVec2 size = ImGui::CalcItemSize({ label_size.x + style.FramePadding.x * 2.0f + 16,25 }, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

		const ImRect bb(pos, pos + size);
		ImGui::ItemSize(size, style.FramePadding.y);
		if (!ImGui::ItemAdd(bb, id))
			return false;

		bool hovered, held;
		bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held, NULL);

		if (hovered || held)
			ImGui::SetMouseCursor(7);

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 1.f, selected ? 1.f : 0.8f));
		ImGui::RenderText(ImVec2(bb.Min.x + style.FramePadding.x, bb.Min.y + 7), icon);
		ImGui::RenderText(ImVec2(bb.Min.x + style.FramePadding.x + 20, bb.Min.y + 5), label);
		ImGui::PopStyleColor();

		return pressed;
	}

	bool subtab(const char* label, bool selected)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);

		ImVec2 pos = window->DC.CursorPos;
		ImVec2 size = ImGui::CalcItemSize({ label_size.x, 25}, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

		const ImRect bb(pos, pos + size);
		ImGui::ItemSize(size, style.FramePadding.y);
		if (!ImGui::ItemAdd(bb, id))
			return false;

		bool hovered, held;
		bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held, NULL);

		if (hovered || held)
			ImGui::SetMouseCursor(7);

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 1.f, selected ? 1.f : 0.8f));
		ImGui::RenderText(ImVec2(bb.Min.x + 2, bb.Min.y + (15 / 2 - label_size.y / 2)), label);
		ImGui::PopStyleColor();

		return pressed;
	}

	bool category(const char* label, bool selected)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);

		ImVec2 pos = window->DC.CursorPos;
		ImVec2 size = ImGui::CalcItemSize({ 51, 50 }, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

		const ImRect bb(pos, pos + size);
		ImGui::ItemSize(size, style.FramePadding.y);
		if (!ImGui::ItemAdd(bb, id))
			return false;

		bool hovered, held;
		bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held, NULL);

		if (hovered || held)
			ImGui::SetMouseCursor(7);

		if (selected)
			window->DrawList->AddRectFilled(bb.Min,bb.Max, ImColor(15, 15, 20,250));

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 1.f, selected ? 1.f : 0.8f));
		ImGui::RenderTextClipped(bb.Min + style.FramePadding, bb.Max - style.FramePadding, label, NULL, &label_size, style.ButtonTextAlign, &bb);
		ImGui::PopStyleColor();

		return pressed;
	}

	static const char* PatchFormatStringFloatToInt(const char* fmt)
	{
		if (fmt[0] == '%' && fmt[1] == '.' && fmt[2] == '0' && fmt[3] == 'f' && fmt[4] == 0)
			return "%d";

		const char* fmt_start = ImParseFormatFindStart(fmt); 
		const char* fmt_end = ImParseFormatFindEnd(fmt_start);  
		if (fmt_end > fmt_start && fmt_end[-1] == 'f')
		{
			if (fmt_start == fmt && fmt_end[0] == 0)
				return "%d";
			ImGuiContext& g = *GImGui;
			ImFormatString(g.TempBuffer, IM_ARRAYSIZE(g.TempBuffer),"%.*s%%d%s", (int)(fmt_start - fmt), fmt, fmt_end); 
			return g.TempBuffer;
		}
		return fmt;
	}

	bool SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		if (window->SkipItems)
			return false;

		ImGuiContext& g = *GImGui;
		const ImGuiStyle& style = g.Style;
		const ImGuiID id = window->GetID(label);
		const float w = 300;

		const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
		const ImRect frame_bb(window->DC.CursorPos + ImVec2(0,18), window->DC.CursorPos + ImVec2(w+3,label_size.y + 11 + (style.FramePadding.y * 2)));
		const ImRect total_bb(frame_bb.Min + ImVec2(0,-20), frame_bb.Max + ImVec2(0,5) + ImVec2(style.ItemInnerSpacing.x + label_size.x, 0.0f));

		ImGui::ItemSize(total_bb, style.FramePadding.y);
		if (!ImGui::ItemAdd(total_bb, id, &frame_bb))
			return false;

		if (format == NULL)
			format = ImGui::DataTypeGetInfo(data_type)->PrintFmt;
		else if (data_type == ImGuiDataType_S32 && strcmp(format, "%d") != 0)
			format = PatchFormatStringFloatToInt(format);
		const bool hovered = ImGui::ItemHoverable(frame_bb, id);
		const bool temp_input_allowed = (flags & ImGuiSliderFlags_NoInput) == 0;
		bool temp_input_is_active = temp_input_allowed && ImGui::TempInputIsActive(id);
		if (!temp_input_is_active)
		{
			const bool focus_requested = temp_input_allowed && ImGui::FocusableItemRegister(window, id);
			const bool clicked = (hovered && g.IO.MouseClicked[0]);
			if (focus_requested || clicked || g.NavActivateId == id || g.NavInputId == id)
			{
				ImGui::SetActiveID(id, window);
				ImGui::SetFocusID(id, window);
				ImGui::FocusWindow(window);
				g.ActiveIdUsingNavDirMask |= (1 << ImGuiDir_Left) | (1 << ImGuiDir_Right);
			}
		}

		window->DrawList->AddRectFilled(ImVec2(frame_bb.Min.x + 0, frame_bb.Min.y + 0), ImVec2(frame_bb.Max.x + 0, frame_bb.Max.y + 0), ImColor(43,42,47,255),6, 15); 
		window->DrawList->AddRect(ImVec2(frame_bb.Min.x + 0, frame_bb.Min.y + 0), ImVec2(frame_bb.Max.x + 0, frame_bb.Max.y + 0), ImColor(73,73,77,160),6, 15, 1.000000); 
 		

		ImRect grab_bb;
		const bool value_changed = ImGui::SliderBehavior(frame_bb, id, data_type, p_data, p_min, p_max, format, flags, &grab_bb);

		grab_bb.Min = frame_bb.Min;
		grab_bb.Min += ImVec2(0,0);
		grab_bb.Max += ImVec2(2,2);

		window->DrawList->AddRectFilled(ImVec2(grab_bb.Min.x + 0, grab_bb.Min.y + 0), ImVec2(grab_bb.Max.x + 0, grab_bb.Max.y + 0), ImColor(249, 165, 22, 255),6, 15);

		window->DrawList->AddRect(ImVec2(grab_bb.Max.x + -14, grab_bb.Max.y + -16), ImVec2(grab_bb.Max.x + 0, grab_bb.Max.y + 4), ImColor(94,94,94,28),6, 15, 1.000000); 
 		window->DrawList->AddRectFilled(ImVec2(grab_bb.Max.x + -14, grab_bb.Max.y + -16), ImVec2(grab_bb.Max.x + 0, grab_bb.Max.y + 4), ImColor(255,254,254,28),6, 15); 
		window->DrawList->AddRectFilled(ImVec2(grab_bb.Max.x + -14, grab_bb.Max.y + -16), ImVec2(grab_bb.Max.x + 0, grab_bb.Max.y + 4), ImColor(255,255,255,255),6, 15); 

		char value_buf[64];
		const char* value_buf_end = value_buf + ImGui::DataTypeFormatString(value_buf, IM_ARRAYSIZE(value_buf), data_type, p_data, format);

		if (hovered)
			ImGui::SetMouseCursor(7);

		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(229/255.f,229/255.f,229/255.f,255/255.f));
		ImGui::RenderText(ImVec2(frame_bb.Max.x +-303, frame_bb.Min.y + style.FramePadding.y +-22), label);
		ImGui::PopStyleColor();

		return value_changed;
	}

	bool slider_float(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
	{
		return SliderScalar(label, ImGuiDataType_Float, v, &v_min, &v_max, format, flags);
	}

	bool slider_int(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
	{
		return SliderScalar(label, ImGuiDataType_S32, v, &v_min, &v_max, format, flags);
	}

	void render_menu()
	{
		auto flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize;

		ImGui::SetNextWindowSize({545.000000f,470.000000f});

		ImGui::Begin("Edited", nullptr, flags);
 		{
			p = ImGui::GetWindowPos();
			draw = ImGui::GetWindowDrawList();

			draw->AddRectFilled(ImVec2(p.x + 0, p.y + 0), ImVec2(p.x + 545, p.y + 12), ImColor(249,165,22,255),6, 15); 
			draw->AddRectFilled(ImVec2(p.x + 0, p.y + 460), ImVec2(p.x + 545, p.y + 470), ImColor(33,33,38,255),12, 15); 
			draw->AddRectFilled(ImVec2(p.x + 0, p.y + 7), ImVec2(p.x + 545, p.y + 464), ImColor(33,33,38,255),0, 15); 
			draw->AddLine(ImVec2(p.x + 0, p.y + 72), ImVec2(p.x + 545, p.y + 72), ImColor(89,87,93,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 0, p.y + 71), ImVec2(p.x + 545, p.y + 71), ImColor(22,21,26,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 0, p.y + 73), ImVec2(p.x + 545, p.y + 73), ImColor(22,21,26,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 140, p.y + 72), ImVec2(p.x + 140, p.y + 470), ImColor(79,77,82,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 192, p.y + 72), ImVec2(p.x + 192, p.y + 470), ImColor(79,77,82,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 191, p.y + 73), ImVec2(p.x + 191, p.y + 470), ImColor(22,21,26,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 193, p.y + 73), ImVec2(p.x + 193, p.y + 470), ImColor(22,21,26,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 139, p.y + 73), ImVec2(p.x + 139, p.y + 470), ImColor(22,21,26,255),1.000000); 
			draw->AddLine(ImVec2(p.x + 141, p.y + 73), ImVec2(p.x + 141, p.y + 470), ImColor(22,21,26,255),1.000000); 
			draw->AddRectFilled(ImVec2(p.x + 142, p.y + 73), ImVec2(p.x + 191, p.y + 470), ImColor(22,21,26,255),0, 15); 

			static bool bools[128];
			static int ints[128];
			static float floats[128];
			static int selectedtab = 0;
			static int selectedsubtab = 0;
			static int selectedcategory = 0;

			ImGui::SetCursorPos({ (float)140, (float)26 });
			ImGui::BeginGroup();
			{
				if (tab("Rage", ICON_FA_HEAD_SIDE_BRAIN, selectedtab == 0))
					selectedtab = 0;
				ImGui::SameLine();
				if (tab("Legit", ICON_FA_CROSS, selectedtab == 1))
					selectedtab = 1;
				ImGui::SameLine();
				if (tab("Visuals", ICON_FA_USER, selectedtab == 2))
					selectedtab = 2;
				ImGui::SameLine();
				if (tab("Misc", ICON_FA_COGS, selectedtab == 3))
					selectedtab = 3;
			}
			ImGui::EndGroup();

			ImGui::SetCursorPos({ (float)141, (float)73 });
			ImGui::BeginGroup();
			{
				if (category(ICON_FA_HEAD_SIDE_BRAIN, selectedcategory == 0))
					selectedcategory = 0;
				if (category(ICON_FA_CROSS, selectedcategory == 1))
					selectedcategory = 1;
			}
			ImGui::EndGroup();

			ImGui::SetCursorPos({ (float)27, (float)93 });
			ImGui::BeginGroup();
			{
				if (subtab("Category 1", selectedsubtab == 0))
					selectedsubtab = 0;
				if (subtab("Category 2", selectedsubtab == 1))
					selectedsubtab = 1;
				if (subtab("Category 3", selectedsubtab == 2))
					selectedsubtab = 2;
			}
			ImGui::EndGroup();

			ImGui::SetCursorPos({ (float)217, (float)96});
			ImGui::BeginGroup();
			{
				if (begincombo("Combo", "Preview", NULL))
					ImGui::Selectable("Preview", true),
					ImGui::EndCombo();
				checkbox("Checkbox", &bools[3]);
				slider_int("Slider", &ints[4], 0, 100, NULL, NULL);
				button("Button", { (float)303, (float)25 });
			}
			ImGui::EndGroup();
		}
		ImGui::End();
	}
}

#endif // !QGUIHEADERGUARD