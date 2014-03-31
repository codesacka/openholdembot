#include "stdafx.h"

#include "CLogSymbols.h"
#include "CSymbols.h"

CLogSymbols::CLogSymbols()
{
}

CLogSymbols::~CLogSymbols()
{
}

double CLogSymbols::ProcessQuery(const char * pquery, int *e)
{
	if (strlen(pquery) > 4)
	{
		bool exists = false;

		for (int i=0; i<p_symbols->logsymbols_collection()->GetCount(); i++)
		{
			if (p_symbols->logsymbols_collection()->GetAt(i) == pquery+4)
			{
				exists = true;
				break;
			}
		}

		if (!exists)
		{
			p_symbols->logsymbols_collection_add(pquery+4);
		}

		return 1.0;
	}

	*e = ERR_INVALID_SYM;
	return 0.0;
}