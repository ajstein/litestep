//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// This is a part of the Litestep Shell source code.
//
// Copyright (C) 1997-2012  LiteStep Development Team
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#if !defined(EXPLORERSERVICE_H)
#define EXPLORERSERVICE_H

#include "ExplorerService.h"
#include "../utility/common.h"
#include "../utility/IService.h"


class ExplorerService : public IService
{
public:
    ~ExplorerService();
    ExplorerService();
    
    //
    // IService methods
    //
    virtual HRESULT Start();
    virtual HRESULT Stop();

private:
    DWORD m_dwThreadID;
    HANDLE m_hExplorerThread;
};


#endif // EXPLORERSERVICE_H
