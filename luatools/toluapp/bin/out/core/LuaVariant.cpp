/*
** Lua binding: Variant
** Generated automatically by tolua++-1.0.93 on Wed Oct 31 11:38:30 2018.
*/

/****************************************************************************
//  (C) 2016 n.lee
****************************************************************************/
#include "stdafx.h"
#include <map>
#include <string>

extern "C" {
    #include "lua/tolua_fix.h"
}
#include "lua/tolua++.h"


/* Exported function */
TOLUA_API int  tolua_Variant_open (lua_State* tolua_S);

#include <stdint.h>
#include "UsingGodot.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_AABB (lua_State* tolua_S)
{
  godot::AABB* self = (godot::AABB*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Vector2 (lua_State* tolua_S)
{
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolColorArray (lua_State* tolua_S)
{
  godot::PoolColorArray* self = (godot::PoolColorArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Vector3 (lua_State* tolua_S)
{
  godot::Vector3* self = (godot::Vector3*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolVector3Array (lua_State* tolua_S)
{
  godot::PoolVector3Array* self = (godot::PoolVector3Array*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_String (lua_State* tolua_S)
{
  godot::String* self = (godot::String*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Variant (lua_State* tolua_S)
{
  godot::Variant* self = (godot::Variant*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolVector2Array (lua_State* tolua_S)
{
  godot::PoolVector2Array* self = (godot::PoolVector2Array*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Dictionary (lua_State* tolua_S)
{
  godot::Dictionary* self = (godot::Dictionary*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolStringArray (lua_State* tolua_S)
{
  godot::PoolStringArray* self = (godot::PoolStringArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolByteArray (lua_State* tolua_S)
{
  godot::PoolByteArray* self = (godot::PoolByteArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Rect2 (lua_State* tolua_S)
{
  godot::Rect2* self = (godot::Rect2*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolRealArray (lua_State* tolua_S)
{
  godot::PoolRealArray* self = (godot::PoolRealArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_RID (lua_State* tolua_S)
{
  godot::RID* self = (godot::RID*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Transform2D (lua_State* tolua_S)
{
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Plane (lua_State* tolua_S)
{
  godot::Plane* self = (godot::Plane*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Quat (lua_State* tolua_S)
{
  godot::Quat* self = (godot::Quat*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_PoolIntArray (lua_State* tolua_S)
{
  godot::PoolIntArray* self = (godot::PoolIntArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Color (lua_State* tolua_S)
{
  godot::Color* self = (godot::Color*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Array (lua_State* tolua_S)
{
  godot::Array* self = (godot::Array*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Transform (lua_State* tolua_S)
{
  godot::Transform* self = (godot::Transform*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_NodePath (lua_State* tolua_S)
{
  godot::NodePath* self = (godot::NodePath*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_Basis (lua_State* tolua_S)
{
  godot::Basis* self = (godot::Basis*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"godot_object");
 tolua_usertype(tolua_S,"AABB");
 tolua_usertype(tolua_S,"Vector2");
 tolua_usertype(tolua_S,"PoolColorArray");
 tolua_usertype(tolua_S,"Vector3");
 tolua_usertype(tolua_S,"PoolVector3Array");
 tolua_usertype(tolua_S,"String");
 tolua_usertype(tolua_S,"PoolVector2Array");
 tolua_usertype(tolua_S,"PoolStringArray");
 tolua_usertype(tolua_S,"Dictionary");
 tolua_usertype(tolua_S,"PoolByteArray");
 tolua_usertype(tolua_S,"Array");
 tolua_usertype(tolua_S,"Rect2");
 tolua_usertype(tolua_S,"PoolRealArray");
 tolua_usertype(tolua_S,"godot::Variant");
 tolua_usertype(tolua_S,"Transform2D");
 tolua_usertype(tolua_S,"Plane");
 tolua_usertype(tolua_S,"Quat");
 tolua_usertype(tolua_S,"PoolIntArray");
 tolua_usertype(tolua_S,"Color");
 tolua_usertype(tolua_S,"RID");
 tolua_usertype(tolua_S,"Transform");
 tolua_usertype(tolua_S,"NodePath");
 tolua_usertype(tolua_S,"Basis");
}

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new00
static int tolua_Variant_godot_Variant_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
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

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new00_local
static int tolua_Variant_godot_Variant_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
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

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new01
static int tolua_Variant_godot_Variant_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Variant* v = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new01_local
static int tolua_Variant_godot_Variant_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Variant* v = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new02
static int tolua_Variant_godot_Variant_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  bool p_bool = ((bool)  tolua_toboolean (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_bool);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new02_local
static int tolua_Variant_godot_Variant_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  bool p_bool = ((bool)  tolua_toboolean (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_bool);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new03
static int tolua_Variant_godot_Variant_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed int p_int = ((signed int)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_int);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new03_local
static int tolua_Variant_godot_Variant_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed int p_int = ((signed int)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_int);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new04
static int tolua_Variant_godot_Variant_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int p_int = ((unsigned int)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_int);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new04_local
static int tolua_Variant_godot_Variant_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int p_int = ((unsigned int)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_int);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new05
static int tolua_Variant_godot_Variant_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed short p_short = ((signed short)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_short);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new05_local
static int tolua_Variant_godot_Variant_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed short p_short = ((signed short)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_short);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new06
static int tolua_Variant_godot_Variant_new06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned short p_short = ((unsigned short)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_short);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new06_local
static int tolua_Variant_godot_Variant_new06_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned short p_short = ((unsigned short)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_short);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new05_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new07
static int tolua_Variant_godot_Variant_new07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed char p_char = ((signed char)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new07_local
static int tolua_Variant_godot_Variant_new07_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  signed char p_char = ((signed char)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new06_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new08
static int tolua_Variant_godot_Variant_new08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char p_char = ((unsigned char)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new08_local
static int tolua_Variant_godot_Variant_new08_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char p_char = ((unsigned char)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new07_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new09
static int tolua_Variant_godot_Variant_new09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int64_t p_char = ((int64_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new09_local
static int tolua_Variant_godot_Variant_new09_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int64_t p_char = ((int64_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new08_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new10
static int tolua_Variant_godot_Variant_new10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  uint64_t p_char = ((uint64_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new10_local
static int tolua_Variant_godot_Variant_new10_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  uint64_t p_char = ((uint64_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new09_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new11
static int tolua_Variant_godot_Variant_new11(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float p_float = ((float)  tolua_tonumber (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_float);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new10(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new11_local
static int tolua_Variant_godot_Variant_new11_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float p_float = ((float)  tolua_tonumber (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_float);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new10_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new12
static int tolua_Variant_godot_Variant_new12(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double p_double = ((double)  tolua_tonumber (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_double);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new11(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new12_local
static int tolua_Variant_godot_Variant_new12_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double p_double = ((double)  tolua_tonumber (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_double);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new11_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new13
static int tolua_Variant_godot_Variant_new13(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::String* p_string = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_string);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new12(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new13_local
static int tolua_Variant_godot_Variant_new13_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::String* p_string = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_string);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new12_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new14
static int tolua_Variant_godot_Variant_new14(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* p_cstring = ((const char*)  tolua_tostring (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_cstring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new13(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new14_local
static int tolua_Variant_godot_Variant_new14_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* p_cstring = ((const char*)  tolua_tostring (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_cstring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new13_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new15
static int tolua_Variant_godot_Variant_new15(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t* p_wstring = ((const wchar_t*)  tolua_tostring (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_wstring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new14(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new15_local
static int tolua_Variant_godot_Variant_new15_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t* p_wstring = ((const wchar_t*)  tolua_tostring (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_wstring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new14_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new16
static int tolua_Variant_godot_Variant_new16(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector2);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new15(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new16_local
static int tolua_Variant_godot_Variant_new16_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector2);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new15_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new17
static int tolua_Variant_godot_Variant_new17(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Rect2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Rect2* p_rect2 = ((const godot::Rect2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_rect2);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new16(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new17_local
static int tolua_Variant_godot_Variant_new17_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Rect2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Rect2* p_rect2 = ((const godot::Rect2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_rect2);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new16_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new18
static int tolua_Variant_godot_Variant_new18(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Vector3* p_vector3 = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector3);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new17(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new18_local
static int tolua_Variant_godot_Variant_new18_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Vector3* p_vector3 = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector3);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new17_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new19
static int tolua_Variant_godot_Variant_new19(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Plane* p_plane = ((const godot::Plane*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_plane);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new18(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new19_local
static int tolua_Variant_godot_Variant_new19_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Plane* p_plane = ((const godot::Plane*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_plane);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new18_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new20
static int tolua_Variant_godot_Variant_new20(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::AABB* p_aabb = ((const godot::AABB*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_aabb);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new19(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new20_local
static int tolua_Variant_godot_Variant_new20_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::AABB* p_aabb = ((const godot::AABB*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_aabb);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new19_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new21
static int tolua_Variant_godot_Variant_new21(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Quat",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Quat* p_quat = ((const godot::Quat*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_quat);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new20(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new21_local
static int tolua_Variant_godot_Variant_new21_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Quat",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Quat* p_quat = ((const godot::Quat*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_quat);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new20_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new22
static int tolua_Variant_godot_Variant_new22(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Basis",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Basis* p_transform = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new21(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new22_local
static int tolua_Variant_godot_Variant_new22_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Basis",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Basis* p_transform = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new21_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new23
static int tolua_Variant_godot_Variant_new23(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Transform2D",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Transform2D* p_transform = ((const godot::Transform2D*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new22(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new23_local
static int tolua_Variant_godot_Variant_new23_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Transform2D",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Transform2D* p_transform = ((const godot::Transform2D*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new22_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new24
static int tolua_Variant_godot_Variant_new24(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Transform* p_transform = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new23(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new24_local
static int tolua_Variant_godot_Variant_new24_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Transform* p_transform = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_transform);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new23_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new25
static int tolua_Variant_godot_Variant_new25(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Color* p_color = ((const godot::Color*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_color);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new24(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new25_local
static int tolua_Variant_godot_Variant_new25_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Color* p_color = ((const godot::Color*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_color);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new24_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new26
static int tolua_Variant_godot_Variant_new26(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const NodePath",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::NodePath* p_path = ((const godot::NodePath*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_path);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new25(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new26_local
static int tolua_Variant_godot_Variant_new26_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const NodePath",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::NodePath* p_path = ((const godot::NodePath*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_path);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new25_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new27
static int tolua_Variant_godot_Variant_new27(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const RID",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::RID* p_rid = ((const godot::RID*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_rid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new26(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new27_local
static int tolua_Variant_godot_Variant_new27_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const RID",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::RID* p_rid = ((const godot::RID*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_rid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new26_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new28
static int tolua_Variant_godot_Variant_new28(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const godot_object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot_object* p_object = ((const godot_object*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_object);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new27(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new28_local
static int tolua_Variant_godot_Variant_new28_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const godot_object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot_object* p_object = ((const godot_object*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(p_object);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new27_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new29
static int tolua_Variant_godot_Variant_new29(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Dictionary",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Dictionary* p_dictionary = ((const godot::Dictionary*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_dictionary);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new28(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new29_local
static int tolua_Variant_godot_Variant_new29_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Dictionary",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Dictionary* p_dictionary = ((const godot::Dictionary*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_dictionary);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new28_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new30
static int tolua_Variant_godot_Variant_new30(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Array* p_array = ((const godot::Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new29(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new30_local
static int tolua_Variant_godot_Variant_new30_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::Array* p_array = ((const godot::Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new29_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new31
static int tolua_Variant_godot_Variant_new31(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolByteArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolByteArray* p_raw_array = ((const godot::PoolByteArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_raw_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new30(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new31_local
static int tolua_Variant_godot_Variant_new31_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolByteArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolByteArray* p_raw_array = ((const godot::PoolByteArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_raw_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new30_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new32
static int tolua_Variant_godot_Variant_new32(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolIntArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolIntArray* p_int_array = ((const godot::PoolIntArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_int_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new31(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new32_local
static int tolua_Variant_godot_Variant_new32_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolIntArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolIntArray* p_int_array = ((const godot::PoolIntArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_int_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new31_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new33
static int tolua_Variant_godot_Variant_new33(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolRealArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolRealArray* p_real_array = ((const godot::PoolRealArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_real_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new32(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new33_local
static int tolua_Variant_godot_Variant_new33_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolRealArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolRealArray* p_real_array = ((const godot::PoolRealArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_real_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new32_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new34
static int tolua_Variant_godot_Variant_new34(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolStringArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolStringArray* p_string_array = ((const godot::PoolStringArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_string_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new33(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new34_local
static int tolua_Variant_godot_Variant_new34_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolStringArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolStringArray* p_string_array = ((const godot::PoolStringArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_string_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new33_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new35
static int tolua_Variant_godot_Variant_new35(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolVector2Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolVector2Array* p_vector2_array = ((const godot::PoolVector2Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector2_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new34(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new35_local
static int tolua_Variant_godot_Variant_new35_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolVector2Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolVector2Array* p_vector2_array = ((const godot::PoolVector2Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector2_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new34_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new36
static int tolua_Variant_godot_Variant_new36(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolVector3Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolVector3Array* p_vector3_array = ((const godot::PoolVector3Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector3_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new35(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new36_local
static int tolua_Variant_godot_Variant_new36_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolVector3Array",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolVector3Array* p_vector3_array = ((const godot::PoolVector3Array*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_vector3_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new35_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new37
static int tolua_Variant_godot_Variant_new37(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolColorArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolColorArray* p_color_array = ((const godot::PoolColorArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_color_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new36(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_new37_local
static int tolua_Variant_godot_Variant_new37_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const PoolColorArray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::PoolColorArray* p_color_array = ((const godot::PoolColorArray*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Variant* tolua_ret = (godot::Variant*)  Mtolua_new(godot::Variant)(*p_color_array);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Variant_godot_Variant_new36_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator bool of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__bool00
static int tolua_Variant_godot_Variant__bool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator bool'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator bool");
   }
   bool  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.bool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator signed int of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__signed_int00
static int tolua_Variant_godot_Variant__signed_int00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator signed int'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator signed int");
   }
   int  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.signed int'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator unsigned int of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__unsigned_int00
static int tolua_Variant_godot_Variant__unsigned_int00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator unsigned int'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator unsigned int");
   }
   int  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.unsigned int'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator signed short of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__signed_short00
static int tolua_Variant_godot_Variant__signed_short00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator signed short'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator signed short");
   }
   short  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.signed short'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator unsigned short of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__unsigned_short00
static int tolua_Variant_godot_Variant__unsigned_short00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator unsigned short'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator unsigned short");
   }
   short  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.unsigned short'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator signed char of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__signed_char00
static int tolua_Variant_godot_Variant__signed_char00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator signed char'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator signed char");
   }
   char  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.signed char'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator unsigned char of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__unsigned_char00
static int tolua_Variant_godot_Variant__unsigned_char00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator unsigned char'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator unsigned char");
   }
   char  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.unsigned char'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator int64_t of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__int64_t00
static int tolua_Variant_godot_Variant__int64_t00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator int64_t'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator int64_t");
   }
   int64_t  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.int64_t'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator uint64_t of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__uint64_t00
static int tolua_Variant_godot_Variant__uint64_t00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator uint64_t'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator uint64_t");
   }
   uint64_t  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.uint64_t'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator wchar_t of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__wchar_t00
static int tolua_Variant_godot_Variant__wchar_t00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator wchar_t'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator wchar_t");
   }
   wchar_t  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.wchar_t'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator float of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__float00
static int tolua_Variant_godot_Variant__float00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator float'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator float");
   }
   float  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.float'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator double of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__double00
static int tolua_Variant_godot_Variant__double00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator double'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator double");
   }
   double  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.double'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator String of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__String00
static int tolua_Variant_godot_Variant__String00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator String'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator String");
   }
   godot::String  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::String)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(String));
    tolua_pushusertype(tolua_S,tolua_obj,"String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.String'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Vector2 of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Vector200
static int tolua_Variant_godot_Variant__Vector200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Vector2'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Vector2");
   }
   godot::Vector2  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Vector2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Rect2 of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Rect200
static int tolua_Variant_godot_Variant__Rect200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Rect2'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Rect2");
   }
   godot::Rect2  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Rect2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Rect2));
    tolua_pushusertype(tolua_S,tolua_obj,"Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Rect2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Vector3 of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Vector300
static int tolua_Variant_godot_Variant__Vector300(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Vector3'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Vector3");
   }
   godot::Vector3  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector3)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Vector3));
    tolua_pushusertype(tolua_S,tolua_obj,"Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Vector3'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Plane of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Plane00
static int tolua_Variant_godot_Variant__Plane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Plane'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Plane");
   }
   godot::Plane  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Plane)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Plane));
    tolua_pushusertype(tolua_S,tolua_obj,"Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Plane'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator AABB of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__AABB00
static int tolua_Variant_godot_Variant__AABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator AABB'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator AABB");
   }
   godot::AABB  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::AABB)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AABB));
    tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.AABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Quat of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Quat00
static int tolua_Variant_godot_Variant__Quat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Quat'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Quat");
   }
   godot::Quat  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Quat)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Quat");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Quat));
    tolua_pushusertype(tolua_S,tolua_obj,"Quat");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Quat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Basis of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Basis00
static int tolua_Variant_godot_Variant__Basis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Basis'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Basis");
   }
   godot::Basis  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Basis)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Basis");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Basis));
    tolua_pushusertype(tolua_S,tolua_obj,"Basis");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Basis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Transform of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Transform00
static int tolua_Variant_godot_Variant__Transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Transform'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Transform");
   }
   godot::Transform  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Transform2D of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Transform2D00
static int tolua_Variant_godot_Variant__Transform2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Transform2D'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Transform2D");
   }
   godot::Transform2D  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Transform2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Color of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Color00
static int tolua_Variant_godot_Variant__Color00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Color'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Color");
   }
   godot::Color  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Color)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color));
    tolua_pushusertype(tolua_S,tolua_obj,"Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator NodePath of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__NodePath00
static int tolua_Variant_godot_Variant__NodePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator NodePath'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator NodePath");
   }
   godot::NodePath  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::NodePath)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"NodePath");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(NodePath));
    tolua_pushusertype(tolua_S,tolua_obj,"NodePath");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.NodePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator RID of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__RID00
static int tolua_Variant_godot_Variant__RID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator RID'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator RID");
   }
   godot::RID  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::RID)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"RID");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(RID));
    tolua_pushusertype(tolua_S,tolua_obj,"RID");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.RID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator godot_object* of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__godot_object_00
static int tolua_Variant_godot_Variant__godot_object_00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator godot_object*'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator godot_object*");
   }
   godot_object* tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot_object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.godot_object*'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Dictionary of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Dictionary00
static int tolua_Variant_godot_Variant__Dictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Dictionary'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Dictionary");
   }
   godot::Dictionary  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Dictionary)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Dictionary");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Dictionary));
    tolua_pushusertype(tolua_S,tolua_obj,"Dictionary");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Dictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator Array of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__Array00
static int tolua_Variant_godot_Variant__Array00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator Array'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator Array");
   }
   godot::Array  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Array)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Array));
    tolua_pushusertype(tolua_S,tolua_obj,"Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolByteArray of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolByteArray00
static int tolua_Variant_godot_Variant__PoolByteArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolByteArray'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolByteArray");
   }
   godot::PoolByteArray  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolByteArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolByteArray));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolByteArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolIntArray of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolIntArray00
static int tolua_Variant_godot_Variant__PoolIntArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolIntArray'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolIntArray");
   }
   godot::PoolIntArray  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolIntArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolIntArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolIntArray));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolIntArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolIntArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolRealArray of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolRealArray00
static int tolua_Variant_godot_Variant__PoolRealArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolRealArray'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolRealArray");
   }
   godot::PoolRealArray  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolRealArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolRealArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolRealArray));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolRealArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolRealArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolStringArray of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolStringArray00
static int tolua_Variant_godot_Variant__PoolStringArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolStringArray'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolStringArray");
   }
   godot::PoolStringArray  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolStringArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolStringArray));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolStringArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolVector2Array of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolVector2Array00
static int tolua_Variant_godot_Variant__PoolVector2Array00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolVector2Array'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolVector2Array");
   }
   godot::PoolVector2Array  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolVector2Array)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolVector2Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolVector2Array));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolVector2Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolVector2Array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolVector3Array of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolVector3Array00
static int tolua_Variant_godot_Variant__PoolVector3Array00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolVector3Array'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolVector3Array");
   }
   godot::PoolVector3Array  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolVector3Array)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolVector3Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolVector3Array));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolVector3Array");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolVector3Array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator PoolColorArray of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__PoolColorArray00
static int tolua_Variant_godot_Variant__PoolColorArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator PoolColorArray'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator PoolColorArray");
   }
   godot::PoolColorArray  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolColorArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"PoolColorArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(PoolColorArray));
    tolua_pushusertype(tolua_S,tolua_obj,"PoolColorArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.PoolColorArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_type of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_get_type00
static int tolua_Variant_godot_Variant_get_type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_type'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "get_type");
   }
   int tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: call of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_call00
static int tolua_Variant_godot_Variant_call00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const String",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"const godot::Variant",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'call'",NULL);
#endif
  const godot::String* method = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  const godot::Variant* args = ((const godot::Variant*)  tolua_tousertype (tolua_S,3,0));
  const int arg_count = ((const int)  tolua_tointeger (tolua_S,4,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "call");
   }
   godot::Variant  tolua_ret;
   const void *args[] = {
    (void *) &method,
    (void *) &args,
    (void *) &arg_count,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Variant)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Variant));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
    tolua_pushusertype(tolua_S,(void*)args,"const godot::Variant");
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'call'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: has_method of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_has_method00
static int tolua_Variant_godot_Variant_has_method00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'has_method'",NULL);
#endif
  const godot::String* method = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "has_method");
   }
   bool  tolua_ret;
   const void *args[] = {
    (void *) &method,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'has_method'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator == of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__eq00
static int tolua_Variant_godot_Variant__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator =='",NULL);
#endif
  const godot::Variant* b = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator ==");
   }
   bool  tolua_ret;
   const void *args[] = {
    (void *) &b,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator < of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__lt00
static int tolua_Variant_godot_Variant__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator <'",NULL);
#endif
  const godot::Variant* b = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator <");
   }
   bool  tolua_ret;
   const void *args[] = {
    (void *) &b,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator <= of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant__le00
static int tolua_Variant_godot_Variant__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator <='",NULL);
#endif
  const godot::Variant* b = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "operator <=");
   }
   bool  tolua_ret;
   const void *args[] = {
    (void *) &b,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hash_compare of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_hash_compare00
static int tolua_Variant_godot_Variant_hash_compare00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hash_compare'",NULL);
#endif
  const godot::Variant* b = ((const godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "hash_compare");
   }
   bool  tolua_ret;
   const void *args[] = {
    (void *) &b,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hash_compare'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: booleanize of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_booleanize00
static int tolua_Variant_godot_Variant_booleanize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'booleanize'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Variant", "booleanize");
   }
   bool  tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'booleanize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  godot::Variant */
#ifndef TOLUA_DISABLE_tolua_Variant_godot_Variant_delete00
static int tolua_Variant_godot_Variant_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Variant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Variant* self = (godot::Variant*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'delete'",NULL);
#endif
 godot::api->godot_object_destroy((godot_object *)self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Variant_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"godot",0);
  tolua_beginmodule(tolua_S,"godot");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Variant","godot::Variant","",tolua_collect_godot__Variant);
   #else
   tolua_cclass(tolua_S,"Variant","godot::Variant","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Variant");
    tolua_constant(tolua_S,"NIL", (lua_Integer)godot::Variant::NIL);
    tolua_constant(tolua_S,"BOOL", (lua_Integer)godot::Variant::BOOL);
    tolua_constant(tolua_S,"INT", (lua_Integer)godot::Variant::INT);
    tolua_constant(tolua_S,"REAL", (lua_Integer)godot::Variant::REAL);
    tolua_constant(tolua_S,"STRING", (lua_Integer)godot::Variant::STRING);
    tolua_constant(tolua_S,"VECTOR2", (lua_Integer)godot::Variant::VECTOR2);
    tolua_constant(tolua_S,"RECT2", (lua_Integer)godot::Variant::RECT2);
    tolua_constant(tolua_S,"VECTOR3", (lua_Integer)godot::Variant::VECTOR3);
    tolua_constant(tolua_S,"TRANSFORM2D", (lua_Integer)godot::Variant::TRANSFORM2D);
    tolua_constant(tolua_S,"PLANE", (lua_Integer)godot::Variant::PLANE);
    tolua_constant(tolua_S,"QUAT", (lua_Integer)godot::Variant::QUAT);
    tolua_constant(tolua_S,"_AABB", (lua_Integer)godot::Variant::_AABB);
    tolua_constant(tolua_S,"BASIS", (lua_Integer)godot::Variant::BASIS);
    tolua_constant(tolua_S,"TRANSFORM", (lua_Integer)godot::Variant::TRANSFORM);
    tolua_constant(tolua_S,"COLOR", (lua_Integer)godot::Variant::COLOR);
    tolua_constant(tolua_S,"NODE_PATH", (lua_Integer)godot::Variant::NODE_PATH);
    tolua_constant(tolua_S,"_RID", (lua_Integer)godot::Variant::_RID);
    tolua_constant(tolua_S,"OBJECT", (lua_Integer)godot::Variant::OBJECT);
    tolua_constant(tolua_S,"DICTIONARY", (lua_Integer)godot::Variant::DICTIONARY);
    tolua_constant(tolua_S,"ARRAY", (lua_Integer)godot::Variant::ARRAY);
    tolua_constant(tolua_S,"POOL_BYTE_ARRAY", (lua_Integer)godot::Variant::POOL_BYTE_ARRAY);
    tolua_constant(tolua_S,"POOL_INT_ARRAY", (lua_Integer)godot::Variant::POOL_INT_ARRAY);
    tolua_constant(tolua_S,"POOL_REAL_ARRAY", (lua_Integer)godot::Variant::POOL_REAL_ARRAY);
    tolua_constant(tolua_S,"POOL_STRING_ARRAY", (lua_Integer)godot::Variant::POOL_STRING_ARRAY);
    tolua_constant(tolua_S,"POOL_VECTOR2_ARRAY", (lua_Integer)godot::Variant::POOL_VECTOR2_ARRAY);
    tolua_constant(tolua_S,"POOL_VECTOR3_ARRAY", (lua_Integer)godot::Variant::POOL_VECTOR3_ARRAY);
    tolua_constant(tolua_S,"POOL_COLOR_ARRAY", (lua_Integer)godot::Variant::POOL_COLOR_ARRAY);
    tolua_constant(tolua_S,"VARIANT_MAX", (lua_Integer)godot::Variant::VARIANT_MAX);
    tolua_constant(tolua_S,"OP_EQUAL", (lua_Integer)godot::Variant::OP_EQUAL);
    tolua_constant(tolua_S,"OP_NOT_EQUAL", (lua_Integer)godot::Variant::OP_NOT_EQUAL);
    tolua_constant(tolua_S,"OP_LESS", (lua_Integer)godot::Variant::OP_LESS);
    tolua_constant(tolua_S,"OP_LESS_EQUAL", (lua_Integer)godot::Variant::OP_LESS_EQUAL);
    tolua_constant(tolua_S,"OP_GREATER", (lua_Integer)godot::Variant::OP_GREATER);
    tolua_constant(tolua_S,"OP_GREATER_EQUAL", (lua_Integer)godot::Variant::OP_GREATER_EQUAL);
    tolua_constant(tolua_S,"OP_ADD", (lua_Integer)godot::Variant::OP_ADD);
    tolua_constant(tolua_S,"OP_SUBTRACT", (lua_Integer)godot::Variant::OP_SUBTRACT);
    tolua_constant(tolua_S,"OP_MULTIPLY", (lua_Integer)godot::Variant::OP_MULTIPLY);
    tolua_constant(tolua_S,"OP_DIVIDE", (lua_Integer)godot::Variant::OP_DIVIDE);
    tolua_constant(tolua_S,"OP_NEGATE", (lua_Integer)godot::Variant::OP_NEGATE);
    tolua_constant(tolua_S,"OP_POSITIVE", (lua_Integer)godot::Variant::OP_POSITIVE);
    tolua_constant(tolua_S,"OP_MODULE", (lua_Integer)godot::Variant::OP_MODULE);
    tolua_constant(tolua_S,"OP_STRING_CONCAT", (lua_Integer)godot::Variant::OP_STRING_CONCAT);
    tolua_constant(tolua_S,"OP_SHIFT_LEFT", (lua_Integer)godot::Variant::OP_SHIFT_LEFT);
    tolua_constant(tolua_S,"OP_SHIFT_RIGHT", (lua_Integer)godot::Variant::OP_SHIFT_RIGHT);
    tolua_constant(tolua_S,"OP_BIT_AND", (lua_Integer)godot::Variant::OP_BIT_AND);
    tolua_constant(tolua_S,"OP_BIT_OR", (lua_Integer)godot::Variant::OP_BIT_OR);
    tolua_constant(tolua_S,"OP_BIT_XOR", (lua_Integer)godot::Variant::OP_BIT_XOR);
    tolua_constant(tolua_S,"OP_BIT_NEGATE", (lua_Integer)godot::Variant::OP_BIT_NEGATE);
    tolua_constant(tolua_S,"OP_AND", (lua_Integer)godot::Variant::OP_AND);
    tolua_constant(tolua_S,"OP_OR", (lua_Integer)godot::Variant::OP_OR);
    tolua_constant(tolua_S,"OP_XOR", (lua_Integer)godot::Variant::OP_XOR);
    tolua_constant(tolua_S,"OP_NOT", (lua_Integer)godot::Variant::OP_NOT);
    tolua_constant(tolua_S,"OP_IN", (lua_Integer)godot::Variant::OP_IN);
    tolua_constant(tolua_S,"OP_MAX", (lua_Integer)godot::Variant::OP_MAX);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new00);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new00_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new00_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new01);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new01_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new01_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new02);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new02_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new02_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new03);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new03_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new03_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new04);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new04_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new04_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new05);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new05_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new05_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new06);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new06_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new06_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new07);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new07_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new07_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new08);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new08_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new08_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new09);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new09_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new09_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new10);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new10_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new10_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new11);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new11_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new11_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new12);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new12_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new12_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new13);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new13_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new13_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new14);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new14_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new14_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new15);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new15_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new15_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new16);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new16_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new16_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new17);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new17_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new17_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new18);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new18_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new18_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new19);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new19_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new19_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new20);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new20_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new20_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new21);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new21_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new21_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new22);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new22_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new22_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new23);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new23_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new23_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new24);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new24_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new24_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new25);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new25_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new25_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new26);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new26_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new26_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new27);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new27_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new27_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new28);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new28_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new28_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new29);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new29_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new29_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new30);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new30_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new30_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new31);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new31_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new31_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new32);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new32_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new32_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new33);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new33_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new33_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new34);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new34_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new34_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new35);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new35_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new35_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new36);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new36_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new36_local);
    tolua_function(tolua_S,"new",tolua_Variant_godot_Variant_new37);
    tolua_function(tolua_S,"new_local",tolua_Variant_godot_Variant_new37_local);
    tolua_function(tolua_S,".call",tolua_Variant_godot_Variant_new37_local);
    tolua_function(tolua_S,".bool",tolua_Variant_godot_Variant__bool00);
    tolua_function(tolua_S,".signed int",tolua_Variant_godot_Variant__signed_int00);
    tolua_function(tolua_S,".unsigned int",tolua_Variant_godot_Variant__unsigned_int00);
    tolua_function(tolua_S,".signed short",tolua_Variant_godot_Variant__signed_short00);
    tolua_function(tolua_S,".unsigned short",tolua_Variant_godot_Variant__unsigned_short00);
    tolua_function(tolua_S,".signed char",tolua_Variant_godot_Variant__signed_char00);
    tolua_function(tolua_S,".unsigned char",tolua_Variant_godot_Variant__unsigned_char00);
    tolua_function(tolua_S,".int64_t",tolua_Variant_godot_Variant__int64_t00);
    tolua_function(tolua_S,".uint64_t",tolua_Variant_godot_Variant__uint64_t00);
    tolua_function(tolua_S,".wchar_t",tolua_Variant_godot_Variant__wchar_t00);
    tolua_function(tolua_S,".float",tolua_Variant_godot_Variant__float00);
    tolua_function(tolua_S,".double",tolua_Variant_godot_Variant__double00);
    tolua_function(tolua_S,".String",tolua_Variant_godot_Variant__String00);
    tolua_function(tolua_S,".Vector2",tolua_Variant_godot_Variant__Vector200);
    tolua_function(tolua_S,".Rect2",tolua_Variant_godot_Variant__Rect200);
    tolua_function(tolua_S,".Vector3",tolua_Variant_godot_Variant__Vector300);
    tolua_function(tolua_S,".Plane",tolua_Variant_godot_Variant__Plane00);
    tolua_function(tolua_S,".AABB",tolua_Variant_godot_Variant__AABB00);
    tolua_function(tolua_S,".Quat",tolua_Variant_godot_Variant__Quat00);
    tolua_function(tolua_S,".Basis",tolua_Variant_godot_Variant__Basis00);
    tolua_function(tolua_S,".Transform",tolua_Variant_godot_Variant__Transform00);
    tolua_function(tolua_S,".Transform2D",tolua_Variant_godot_Variant__Transform2D00);
    tolua_function(tolua_S,".Color",tolua_Variant_godot_Variant__Color00);
    tolua_function(tolua_S,".NodePath",tolua_Variant_godot_Variant__NodePath00);
    tolua_function(tolua_S,".RID",tolua_Variant_godot_Variant__RID00);
    tolua_function(tolua_S,".godot_object*",tolua_Variant_godot_Variant__godot_object_00);
    tolua_function(tolua_S,".Dictionary",tolua_Variant_godot_Variant__Dictionary00);
    tolua_function(tolua_S,".Array",tolua_Variant_godot_Variant__Array00);
    tolua_function(tolua_S,".PoolByteArray",tolua_Variant_godot_Variant__PoolByteArray00);
    tolua_function(tolua_S,".PoolIntArray",tolua_Variant_godot_Variant__PoolIntArray00);
    tolua_function(tolua_S,".PoolRealArray",tolua_Variant_godot_Variant__PoolRealArray00);
    tolua_function(tolua_S,".PoolStringArray",tolua_Variant_godot_Variant__PoolStringArray00);
    tolua_function(tolua_S,".PoolVector2Array",tolua_Variant_godot_Variant__PoolVector2Array00);
    tolua_function(tolua_S,".PoolVector3Array",tolua_Variant_godot_Variant__PoolVector3Array00);
    tolua_function(tolua_S,".PoolColorArray",tolua_Variant_godot_Variant__PoolColorArray00);
    tolua_function(tolua_S,"get_type",tolua_Variant_godot_Variant_get_type00);
    tolua_function(tolua_S,"call",tolua_Variant_godot_Variant_call00);
    tolua_function(tolua_S,"has_method",tolua_Variant_godot_Variant_has_method00);
    tolua_function(tolua_S,".eq",tolua_Variant_godot_Variant__eq00);
    tolua_function(tolua_S,".lt",tolua_Variant_godot_Variant__lt00);
    tolua_function(tolua_S,".le",tolua_Variant_godot_Variant__le00);
    tolua_function(tolua_S,"hash_compare",tolua_Variant_godot_Variant_hash_compare00);
    tolua_function(tolua_S,"booleanize",tolua_Variant_godot_Variant_booleanize00);
    tolua_function(tolua_S,"delete",tolua_Variant_godot_Variant_delete00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Variant (lua_State* tolua_S) {
 return tolua_Variant_open(tolua_S);
};
#endif

