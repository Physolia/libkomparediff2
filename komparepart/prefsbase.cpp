/***************************************************************************
				prefsbase.cpp  -  description
				-------------------
	begin			: Tue Mar 13 2001
	copyright			: (C) 2001 by Otto Bruggeman
	email			: otto.bruggeman@home.nl
****************************************************************************/

/***************************************************************************
**
**   This program is free software; you can redistribute it and/or modify
**   it under the terms of the GNU General Public License as published by
**   the Free Software Foundation; either version 2 of the License, or
**   (at your option) any later version.
**
****************************************************************************/

#include <qobjectlist.h>
#include <qlayout.h>

#include "prefsbase.h"

#include "prefsbase.moc"

PrefsBase::PrefsBase( QWidget* parent ) : KTabCtl( parent )
{

}

PrefsBase::~PrefsBase()
{

}

/** No descriptions */
QSize PrefsBase::sizeHintForWidget( QWidget* widget )
{
	//
	// The size is computed by adding the sizeHint().height() of all
	// widget children and taking the width of the widest child and adding
	// layout()->margin() and layout()->spacing()
	//

	QSize size;

	int numChild = 0;
	QObjectList *l = (QObjectList*)(widget->children());

	for( uint i=0; i < l->count(); i++ )
	{
		QObject *o = l->at(i);
		if( o->isWidgetType() )
		{
			numChild += 1;
			QWidget *w=((QWidget*)o);

			QSize s = w->sizeHint();
			if( s.isEmpty() == true )
			{
				s = QSize( 50, 100 ); // Default size
			}
			size.setHeight( size.height() + s.height() );
			if( s.width() > size.width() )
			{
				size.setWidth( s.width() );
			}
		}
	}

	if( numChild > 0 )
	{
		size.setHeight( size.height() + widget->layout()->spacing()*(numChild-1) );
		size += QSize( widget->layout()->margin()*2, widget->layout()->margin()*2 + 1 );
	}
	else
	{
		size = QSize( 1, 1 );
	}

	return( size );
};

/** No descriptions */
void PrefsBase::apply()
{

};

/** No descriptions */
void PrefsBase::restore()
{

};

/** No descriptions */
void PrefsBase::setDefaults()
{

};
