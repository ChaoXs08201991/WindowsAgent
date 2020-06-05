//====================================================================================
// Open Computer and Software Inventory Next Generation
// Copyleft 2007 OCS Inventory Team
// Web: http://www.ocsinventory-ng.org

// This code is open source and may be copied and modified as long as the source
// code is always made freely available.
// Please refer to the General Public Licence Version 2.0
// http://www.gnu.org/ or Licence.txt
//====================================================================================

// OCSPlugin_Example.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "OCSPlugin_Example.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CLog* m_pLogger = getOcsLogger();

OCSINVENTORY_API_EXPORTED int OCS_CALL_START_EXPORTED(){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => Start hook executed to initialize plugin"));
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_PROLOGWRITE_EXPORTED(CPrologRequest* pPrologReq){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => PrologWrite hook executed before sending prolog to server"));
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_PROLOGRESP_EXPORTED(CPrologResponse* pPrologResp){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => PrologResp hook executed to parse prolog response from server"));
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_INVENTORY_EXPORTED(CInventoryRequest* pInventory){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => Inventory hook executed before sending inventory to server"));
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_END_EXPORTED(CInventoryResponse* pInventoryResp){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => End hook executed to parse inventory response from server"));
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_CLEAN_EXPORTED(){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "SAMPLE DLL PLUGIN => Clean hook executed to free plugin resources"));
	return PLUGIN_OK;
}

