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
#if !defined(SHELLDESKTOPTRAY_H)
#define SHELLDESKTOPTRAY_H

#include <Unknwn.h>


const IID IID_IShellDesktopTray = {0x213E2DF9,0x9A14,0x4328,{0x99,0xB1,0x69,0x61,0xF9,0x14,0x3C,0xE9}};


class IShellDesktopTray : public IUnknown
{
public:
    virtual __declspec(nothrow) ULONG GetState(void) = 0;
    virtual __declspec(nothrow) HRESULT GetTrayWindow(HWND *phWnd) = 0;
    virtual __declspec(nothrow) HRESULT RegisterDesktopWindow(HWND hDesktopWindow) = 0;
    virtual __declspec(nothrow) HRESULT SetVar(int, ULONG) = 0;
};


class TShellDesktopTray : public IShellDesktopTray
{
public:
    TShellDesktopTray();
    ~TShellDesktopTray();

    // IUnknown
    HRESULT __stdcall QueryInterface(REFIID riid, LPVOID *ppvObj);
    ULONG __stdcall AddRef();
    ULONG __stdcall Release();

    // IShellDesktopTray
    ULONG __stdcall GetState();
    HRESULT __stdcall GetTrayWindow(HWND *phWnd);
    HRESULT __stdcall RegisterDesktopWindow(HWND hDesktopWindow);
    HRESULT __stdcall SetVar(int p1, ULONG p2);

private:
    ULONG m_uRefCount;
    HWND m_hDesktopWnd;
};

#endif // SHELLDESKTOPTRAY_H
