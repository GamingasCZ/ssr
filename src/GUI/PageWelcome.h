/*
Copyright (c) 2012-2017 Maarten Baert <maarten-baert@hotmail.com>

This file is part of SimpleScreenRecorder.

SimpleScreenRecorder is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SimpleScreenRecorder is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SimpleScreenRecorder.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "Global.h"

class MainWindow;

class PageWelcome : public QWidget {
	Q_OBJECT

private:
	MainWindow *m_main_window;

	QCheckBox *m_checkbox_skip_page;

public:
	PageWelcome(MainWindow* main_window);

	void LoadSettings(QSettings* settings);
	void SaveSettings(QSettings* settings);

private slots:
	void AboutDialog();

public:
	inline bool GetSkipPage() { return m_checkbox_skip_page->isChecked(); }
	inline void SetSkipPage(bool enable) { m_checkbox_skip_page->setChecked(enable); }

};

class DialogAbout : public QDialog {
	Q_OBJECT

private:

public:
	DialogAbout(PageWelcome* parent);

};
