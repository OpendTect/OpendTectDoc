#pragma once
/*+
________________________________________________________________________

 (C) dGB Beheer B.V.; (LICENSE) http://opendtect.org/OpendTect_license.txt
 Author:	A. Huck
 Date:		September 2020
 RCS:		$Id: admin_helpids.h 10742 2014-10-29 07:49:20Z arnaud.huck@dgbes.com $
________________________________________________________________________


-*/
#define mAdminHelpKey( arg )	  HelpKey( "admin", ::toString(arg) )
#define mAdminVideoKey( arg )	  HelpKey( "adminvideo", ::toString(arg) )

// Installation manager
// General Installation 01
#define		mODInstMgrHelpID				0x20001001
#define		mODInstPkgMgrHelpID				0x20001002
#define		mODInstMgrcheckInstDirHelpID			0x20001003
#define		mODInstMgrgetPackageChoiceHelpID		0x20001004

#define mODInstMgrHandleDLSiteFailHelpID 0x20001005
