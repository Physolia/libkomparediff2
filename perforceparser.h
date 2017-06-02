/**************************************************************************
**                             perforceparser.h
**                             ----------------
**      begin                   : Sun Sep  8 20:58:59 2002
**      Copyright 2002-2004 Otto Bruggeman <otto.bruggeman@home.nl>
***************************************************************************/
/***************************************************************************
**
**   This program is free software; you can redistribute it and/or modify
**   it under the terms of the GNU General Public License as published by
**   the Free Software Foundation; either version 2 of the License, or
**   ( at your option ) any later version.
**
***************************************************************************/

#ifndef PERFORCE_PARSER_H
#define PERFORCE_PARSER_H

#include "parserbase.h"

namespace Diff2
{

class PerforceParser : public ParserBase
{
public:
	PerforceParser( const KompareModelList* list, const QStringList& diff );
	virtual ~PerforceParser();

protected:
	bool parseContextDiffHeader() Q_DECL_OVERRIDE;
	bool parseNormalDiffHeader() Q_DECL_OVERRIDE;
	bool parseRCSDiffHeader() Q_DECL_OVERRIDE;
	bool parseUnifiedDiffHeader() Q_DECL_OVERRIDE;

protected:
	enum Kompare::Format determineFormat() Q_DECL_OVERRIDE;
};

} // End of namespace Diff2

#endif
