#ifndef PUBLIC__ICUASW_PUS_SERVICE9_H
#define PUBLIC__ICUASW_PUS_SERVICE9_H
#include "public/basic_types.h"
#include "public/icuasw_pus_services_iface_v1.h"
#include "public/cdtchandler.h"
#include "public/cdtmlist.h"

class PUSService9{
 friend class PUSPrioTCExecutor;
protected:
  static void ExecTC(CDTCHandler &tc_handler, CDTMList &tm_list);
};
#endif

