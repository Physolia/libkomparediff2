/***************************************************************************
                          kdiffprefdlg.h  -  description
                             -------------------
    begin                : Sun Mar 4 2001
    copyright            : (C) 2001 by Otto Bruggeman
    email                : otto.bruggeman@home.nl
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KDIFFPREFDLG_H
#define KDIFFPREFDLG_H

#include "generalprefs.h"
#include "diffprefs.h"
#include "miscprefs.h"

#include <kdialogbase.h>

class KDiffPrefDlg : public KDialogBase
{
Q_OBJECT
public:
	KDiffPrefDlg( GeneralSettings*, DiffSettings*, MiscSettings* );
	~KDiffPrefDlg();

public:
	GeneralPrefs*	m_generalPage;
	DiffPrefs*	m_diffPage;
	MiscPrefs*	m_miscPage;

protected slots:
	/** No descriptions */
	virtual void slotOk();
	/** No descriptions */
	virtual void slotApply();
	/** No descriptions */
	virtual void slotHelp();
	/** No descriptions */
	virtual void slotDefault();
	/** No descriptions */
	virtual void slotCancel();
};

#endif
