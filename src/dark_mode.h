/*
	Brief:
	Author: Edgar Araújo <edgararaj@gmail.com>
	Copyright 2020
*/

#pragma once

typedef int WINAPI fnAllowDarkModeForWindow(HWND hWnd, int allow); // ordinal 133
typedef int WINAPI fnShouldAppsUseDarkMode(); // ordinal 132

void InitDarkMode();
int IsHighContrast();
extern int g_darkModeSupported;
extern int g_darkModeEnabled;
extern fnAllowDarkModeForWindow* _AllowDarkModeForWindow;
extern fnShouldAppsUseDarkMode* _ShouldAppsUseDarkMode;
void RefreshTitleBarThemeColor(HWND hWnd);
int IsColorSchemeChangeMessage(LPARAM lParam);
