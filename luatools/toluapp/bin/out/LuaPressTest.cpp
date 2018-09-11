/*
** Lua binding: press_test
** Generated automatically by tolua++-1.0.93 on Tue Sep 11 17:22:56 2018.
*/

/****************************************************************************
//  (C) 2016 n.lee
****************************************************************************/

 #include <map>
 #include <string>

 extern "C" {
 #include "lua/tolua_fix.h"
 }
 #include "lua/tolua++.h"


/* Exported function */
TOLUA_API int  tolua_press_test_open (lua_State* tolua_S);

#include "../src/DataHandler/PressTestUnit.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CPressTestUnit (lua_State* tolua_S)
{
 CPressTestUnit* self = (CPressTestUnit*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"LUA_FUNCTION");
 tolua_usertype(tolua_S,"CPressTestUnit");
 tolua_usertype(tolua_S,"uint64_t");
}

/* method: new of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_new00
static int tolua_press_test_CPressTestUnit_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPressTestUnit* tolua_ret = (CPressTestUnit*)  Mtolua_new((CPressTestUnit)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPressTestUnit");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_new00_local
static int tolua_press_test_CPressTestUnit_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPressTestUnit* tolua_ret = (CPressTestUnit*)  Mtolua_new((CPressTestUnit)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPressTestUnit");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_delete00
static int tolua_press_test_CPressTestUnit_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCreate of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_OnCreate00
static int tolua_press_test_CPressTestUnit_OnCreate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCreate'", NULL);
#endif
  {
   self->OnCreate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnCreate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnDestroy of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_OnDestroy00
static int tolua_press_test_CPressTestUnit_OnDestroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnDestroy'", NULL);
#endif
  {
   self->OnDestroy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnDestroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCallback of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_press_test_CPressTestUnit_SetCallback00
static int tolua_press_test_CPressTestUnit_SetCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION cb = *((LUA_FUNCTION*)  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCallback'", NULL);
#endif
  {
   self->SetCallback(cb);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit_id
static int tolua_get_CPressTestUnit_id(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit_id
static int tolua_set_CPressTestUnit_id(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: userid of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit_userid
static int tolua_get_CPressTestUnit_userid(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userid'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->userid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: userid of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit_userid
static int tolua_set_CPressTestUnit_userid(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userid'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->userid = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pwd of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit_pwd
static int tolua_get_CPressTestUnit_pwd(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pwd'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->pwd);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pwd of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit_pwd
static int tolua_set_CPressTestUnit_pwd(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pwd'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pwd = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nick of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit_nick
static int tolua_get_CPressTestUnit_nick(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nick'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->nick);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nick of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit_nick
static int tolua_set_CPressTestUnit_nick(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nick'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nick = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit_state
static int tolua_get_CPressTestUnit_state(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit_state
static int tolua_set_CPressTestUnit_state(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _start_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit__start_in_ms
static int tolua_get_CPressTestUnit__start_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_start_in_ms'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->_start_in_ms,"uint64_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _start_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit__start_in_ms
static int tolua_set_CPressTestUnit__start_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_start_in_ms'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint64_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_start_in_ms = *((uint64_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _connected_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit__connected_in_ms
static int tolua_get_CPressTestUnit__connected_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_connected_in_ms'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->_connected_in_ms,"uint64_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _connected_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit__connected_in_ms
static int tolua_set_CPressTestUnit__connected_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_connected_in_ms'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint64_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_connected_in_ms = *((uint64_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _full_login_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_get_CPressTestUnit__full_login_in_ms
static int tolua_get_CPressTestUnit__full_login_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_full_login_in_ms'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->_full_login_in_ms,"uint64_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _full_login_in_ms of class  CPressTestUnit */
#ifndef TOLUA_DISABLE_tolua_set_CPressTestUnit__full_login_in_ms
static int tolua_set_CPressTestUnit__full_login_in_ms(lua_State* tolua_S)
{
  CPressTestUnit* self = (CPressTestUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_full_login_in_ms'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint64_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_full_login_in_ms = *((uint64_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: create_press_test_unit */
#ifndef TOLUA_DISABLE_tolua_press_test_create_press_test_unit00
static int tolua_press_test_create_press_test_unit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string sUserId = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  std::string sPwd = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string sNick = ((std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   CPressTestUnit* tolua_ret = (CPressTestUnit*)  create_press_test_unit(sUserId,sPwd,sNick);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPressTestUnit");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_press_test_unit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: press_test_unit_open */
#ifndef TOLUA_DISABLE_tolua_press_test_press_test_unit_open00
static int tolua_press_test_press_test_unit_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* pUnit = ((CPressTestUnit*)  tolua_tousertype(tolua_S,1,0));
  {
   press_test_unit_open(pUnit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'press_test_unit_open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: press_test_unit_reopen */
#ifndef TOLUA_DISABLE_tolua_press_test_press_test_unit_reopen00
static int tolua_press_test_press_test_unit_reopen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* pUnit = ((CPressTestUnit*)  tolua_tousertype(tolua_S,1,0));
  int nDelayInMs = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   press_test_unit_reopen(pUnit,nDelayInMs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'press_test_unit_reopen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: press_test_unit_destroy */
#ifndef TOLUA_DISABLE_tolua_press_test_press_test_unit_destroy00
static int tolua_press_test_press_test_unit_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* pUnit = ((CPressTestUnit*)  tolua_tousertype(tolua_S,1,0));
  {
   press_test_unit_destroy(pUnit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'press_test_unit_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: press_test_unit_send_packet */
#ifndef TOLUA_DISABLE_tolua_press_test_press_test_unit_send_packet00
static int tolua_press_test_press_test_unit_send_packet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPressTestUnit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPressTestUnit* pUnit = ((CPressTestUnit*)  tolua_tousertype(tolua_S,1,0));
  uint8_t nMsgSn = ((uint8_t)  tolua_tonumber(tolua_S,2,0));
  std::string sTypeName = ((std::string)  tolua_tocppstring(tolua_S,3,0));
  std::string sBody = ((std::string)  tolua_tocppstring(tolua_S,4,0));
  {
   press_test_unit_send_packet(pUnit,nMsgSn,sTypeName,sBody);
   tolua_pushcppstring(tolua_S,(const char*)sTypeName);
   tolua_pushcppstring(tolua_S,(const char*)sBody);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'press_test_unit_send_packet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: press_test_set_network_callback */
#ifndef TOLUA_DISABLE_tolua_press_test_press_test_set_network_callback00
static int tolua_press_test_press_test_set_network_callback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !toluafix_isfunction(tolua_S,1,"LUA_FUNCTION",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !toluafix_isfunction(tolua_S,4,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LUA_FUNCTION connected_cb = *((LUA_FUNCTION*)  toluafix_ref_function(tolua_S,1,0));
  LUA_FUNCTION disconnected_cb = *((LUA_FUNCTION*)  toluafix_ref_function(tolua_S,2,0));
  LUA_FUNCTION got_message_cb = *((LUA_FUNCTION*)  toluafix_ref_function(tolua_S,3,0));
  LUA_FUNCTION stats_cb = *((LUA_FUNCTION*)  toluafix_ref_function(tolua_S,4,0));
  {
   press_test_set_network_callback(connected_cb,disconnected_cb,got_message_cb,stats_cb);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'press_test_set_network_callback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_press_test_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPressTestUnit","CPressTestUnit","",tolua_collect_CPressTestUnit);
  #else
  tolua_cclass(tolua_S,"CPressTestUnit","CPressTestUnit","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPressTestUnit");
   tolua_function(tolua_S,"new",tolua_press_test_CPressTestUnit_new00);
   tolua_function(tolua_S,"new_local",tolua_press_test_CPressTestUnit_new00_local);
   tolua_function(tolua_S,".call",tolua_press_test_CPressTestUnit_new00_local);
   tolua_function(tolua_S,"delete",tolua_press_test_CPressTestUnit_delete00);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_IDLE",CPressTestUnit::PRESS_TEST_UNIT_STATE_IDLE);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_CONNECTING",CPressTestUnit::PRESS_TEST_UNIT_STATE_CONNECTING);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_CONNECTED",CPressTestUnit::PRESS_TEST_UNIT_STATE_CONNECTED);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_ACCOUNT_LOGIN",CPressTestUnit::PRESS_TEST_UNIT_STATE_ACCOUNT_LOGIN);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_JOIN_GAME",CPressTestUnit::PRESS_TEST_UNIT_STATE_JOIN_GAME);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_LINGER",CPressTestUnit::PRESS_TEST_UNIT_STATE_LINGER);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_REOPEN",CPressTestUnit::PRESS_TEST_UNIT_STATE_REOPEN);
   tolua_constant(tolua_S,"PRESS_TEST_UNIT_STATE_DISCONNECTED",CPressTestUnit::PRESS_TEST_UNIT_STATE_DISCONNECTED);
   tolua_function(tolua_S,"OnCreate",tolua_press_test_CPressTestUnit_OnCreate00);
   tolua_function(tolua_S,"OnDestroy",tolua_press_test_CPressTestUnit_OnDestroy00);
   tolua_function(tolua_S,"SetCallback",tolua_press_test_CPressTestUnit_SetCallback00);
   tolua_variable(tolua_S,"id",tolua_get_CPressTestUnit_id,tolua_set_CPressTestUnit_id);
   tolua_variable(tolua_S,"userid",tolua_get_CPressTestUnit_userid,tolua_set_CPressTestUnit_userid);
   tolua_variable(tolua_S,"pwd",tolua_get_CPressTestUnit_pwd,tolua_set_CPressTestUnit_pwd);
   tolua_variable(tolua_S,"nick",tolua_get_CPressTestUnit_nick,tolua_set_CPressTestUnit_nick);
   tolua_variable(tolua_S,"state",tolua_get_CPressTestUnit_state,tolua_set_CPressTestUnit_state);
   tolua_variable(tolua_S,"_start_in_ms",tolua_get_CPressTestUnit__start_in_ms,tolua_set_CPressTestUnit__start_in_ms);
   tolua_variable(tolua_S,"_connected_in_ms",tolua_get_CPressTestUnit__connected_in_ms,tolua_set_CPressTestUnit__connected_in_ms);
   tolua_variable(tolua_S,"_full_login_in_ms",tolua_get_CPressTestUnit__full_login_in_ms,tolua_set_CPressTestUnit__full_login_in_ms);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"create_press_test_unit",tolua_press_test_create_press_test_unit00);
  tolua_function(tolua_S,"press_test_unit_open",tolua_press_test_press_test_unit_open00);
  tolua_function(tolua_S,"press_test_unit_reopen",tolua_press_test_press_test_unit_reopen00);
  tolua_function(tolua_S,"press_test_unit_destroy",tolua_press_test_press_test_unit_destroy00);
  tolua_function(tolua_S,"press_test_unit_send_packet",tolua_press_test_press_test_unit_send_packet00);
  tolua_function(tolua_S,"press_test_set_network_callback",tolua_press_test_press_test_set_network_callback00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_press_test (lua_State* tolua_S) {
 return tolua_press_test_open(tolua_S);
};
#endif

