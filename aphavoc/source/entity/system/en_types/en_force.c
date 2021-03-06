// 
// 	 Enemy Engaged RAH-66 Comanche Versus KA-52 Hokum
// 	 Copyright (C) 2000 Empire Interactive (Europe) Ltd,
// 	 677 High Road, North Finchley, London N12 0DA
// 
// 	 Please see the document LICENSE.TXT for the full licence agreement
// 
// 2. LICENCE
//  2.1 	
//  	Subject to the provisions of this Agreement we now grant to you the 
//  	following rights in respect of the Source Code:
//   2.1.1 
//   	the non-exclusive right to Exploit  the Source Code and Executable 
//   	Code on any medium; and 
//   2.1.2 
//   	the non-exclusive right to create and distribute Derivative Works.
//  2.2 	
//  	Subject to the provisions of this Agreement we now grant you the
// 	following rights in respect of the Object Code:
//   2.2.1 
// 	the non-exclusive right to Exploit the Object Code on the same
// 	terms and conditions set out in clause 3, provided that any
// 	distribution is done so on the terms of this Agreement and is
// 	accompanied by the Source Code and Executable Code (as
// 	applicable).
// 
// 3. GENERAL OBLIGATIONS
//  3.1 
//  	In consideration of the licence granted in clause 2.1 you now agree:
//   3.1.1 
// 	that when you distribute the Source Code or Executable Code or
// 	any Derivative Works to Recipients you will also include the
// 	terms of this Agreement;
//   3.1.2 
// 	that when you make the Source Code, Executable Code or any
// 	Derivative Works ("Materials") available to download, you will
// 	ensure that Recipients must accept the terms of this Agreement
// 	before being allowed to download such Materials;
//   3.1.3 
// 	that by Exploiting the Source Code or Executable Code you may
// 	not impose any further restrictions on a Recipient's subsequent
// 	Exploitation of the Source Code or Executable Code other than
// 	those contained in the terms and conditions of this Agreement;
//   3.1.4 
// 	not (and not to allow any third party) to profit or make any
// 	charge for the Source Code, or Executable Code, any
// 	Exploitation of the Source Code or Executable Code, or for any
// 	Derivative Works;
//   3.1.5 
// 	not to place any restrictions on the operability of the Source 
// 	Code;
//   3.1.6 
// 	to attach prominent notices to any Derivative Works stating
// 	that you have changed the Source Code or Executable Code and to
// 	include the details anddate of such change; and
//   3.1.7 
//   	not to Exploit the Source Code or Executable Code otherwise than
// 	as expressly permitted by  this Agreement.
// 



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "project.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*entity_force_action_names [] =
	{
	
		"FORCE_ACTION_INVALID",
		"FORCE_ACTION_RETREAT",
		"FORCE_ACTION_NOTHING",
		"FORCE_ACTION_RECON",
		"FORCE_ACTION_INTERCEPT",
		"FORCE_ACTION_DEEP_STRIKE",
		"NUM_ENTITY_FORCE_ACTIONS"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*entity_force_attitude_names [] =
	{
		"FORCE_ATTITUDE_COWARD",
		"FORCE_ATTITUDE_PASSIVE",
		"FORCE_ATTITUDE_CAUTIOUS",
		"FORCE_ATTITUDE_NORMAL",
		"FORCE_ATTITUDE_FEISTY",
		"FORCE_ATTITUDE_AGGRESSIVE",
		"FORCE_ATTITUDE_DESTRUCTIVE",
		"FORCE_ATTITUDE_ERRATIC",
		"NUM_ENTITY_FORCE_ATTITUDES"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*entity_force_names [] =
	{
		"FORCE_UNKNOWN",
		"FORCE_AIR",
		"FORCE_GROUND",
		"FORCE_SEA",
		"NUM_ENTITY_FORCES"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*campaign_result_names [] =
	{
	
		"NONE",
		"FAIL",
		"SUCCESS",
		"STALEMATE",
	
		"NUM_CAMPAIGN_RESULT_TYPES"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*campaign_trigger_names [] =
	{

  		"NONE",
		"BALANCE_OF_POWER",
		"TASK_COMPLETED",
		"TASK_FAILED",
		"OBJECT_DESTROYED",
		"OBJECT_FIRED",
		"OBJECT_TARGETED",
		"OBJECT_LANDED",
		"INEFFICIENT_KEYSITE",
		"WAYPOINT_REACHED",
		"SECTOR_WON",
		"SECTOR_LOST",
		"SECTOR_REACHED",
		"TIME_DURATION",
		"VARIABLE_CONDITION",
		"RANDOM",
		"USER_LANDED",
		"KEY_PRESS",
	
		"NUM_CAMPAIGN_TRIGGERS"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char
	*force_info_catagory_names [] =
	{
	
		"ARMED_FIXED_WING",
		"UNARMED_FIXED_WING",
		"ARMED_HELICOPTER",
		"UNARMED_HELICOPTER",
		"ARMED_ROUTED_VEHICLE",
		"UNARMED_ROUTED_VEHICLE",
		"ARMED_SHIP_VEHICLE",
		"UNARMED_SHIP_VEHICLE",
		"NUM_FORCE_INFO_CATAGORIES"
	};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
