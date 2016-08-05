/*----- PROTECTED REGION ID(PowerSupply_PSW_3072StateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        PowerSupply_PSW_3072StateMachine.cpp
//
// description : State machine file for the PowerSupply_PSW_3072 class
//
// project :     PowerSupply PSW_30-72 Gw Instek
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
// Elkin V. � JINR
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <PowerSupply_PSW_3072.h>

/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::PowerSupply_PSW_3072StateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  OFF     |  
//  FAULT   |  


namespace PowerSupply_PSW_3072_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_volt_meas_allowed()
 *	Description : Execution allowed for volt_meas attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_volt_meas_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for volt_meas attribute in read access.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::volt_measStateAllowed_READ) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::volt_measStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_curr_meas_allowed()
 *	Description : Execution allowed for curr_meas attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_curr_meas_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for curr_meas attribute in read access.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::curr_measStateAllowed_READ) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::curr_measStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_volt_level_allowed()
 *	Description : Execution allowed for volt_level attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_volt_level_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for volt_level attribute in read access.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::volt_levelStateAllowed_READ) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::volt_levelStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_curr_level_allowed()
 *	Description : Execution allowed for curr_level attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_curr_level_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for curr_level attribute in read access.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::curr_levelStateAllowed_READ) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::curr_levelStateAllowed_READ
	return true;
}

//=================================================
//		pipe Allowed Methods
//=================================================
//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_PipeAttrs_allowed()
 *	Description : Execution allowed for PipeAttrs pipe
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_PipeAttrs_allowed(TANGO_UNUSED(Tango::PipeReqType type))
{
	//	Not any excluded states for PipeAttrs pipe in read access.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::PipeAttrsStateAllowed_READ) ENABLED START -----*/

    /*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::PipeAttrsStateAllowed_READ
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_MeasureUpdate_allowed()
 *	Description : Execution allowed for MeasureUpdate attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_MeasureUpdate_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for MeasureUpdate command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::MeasureUpdateStateAllowed) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::MeasureUpdateStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_On_allowed()
 *	Description : Execution allowed for On attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_On_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for On command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::OnStateAllowed) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
    if(this->get_state() == Tango::ON)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::OnStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_Off_allowed()
 *	Description : Execution allowed for Off attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_Off_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Off command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::OffStateAllowed) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
    if(this->get_state() == Tango::OFF)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::OffStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_SetVoltageLevel_allowed()
 *	Description : Execution allowed for SetVoltageLevel attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_SetVoltageLevel_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetVoltageLevel command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::SetVoltageLevelStateAllowed) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::SetVoltageLevelStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_SetCurrentLevel_allowed()
 *	Description : Execution allowed for SetCurrentLevel attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_SetCurrentLevel_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetCurrentLevel command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::SetCurrentLevelStateAllowed) ENABLED START -----*/
    //check_socket_state();
	//check_psstate();
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::SetCurrentLevelStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::is_UpdateCurrVoltLevels_allowed()
 *	Description : Execution allowed for UpdateCurrVoltLevels attribute
 */
//--------------------------------------------------------
bool PowerSupply_PSW_3072::is_UpdateCurrVoltLevels_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for UpdateCurrVoltLevels command.
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::UpdateCurrVoltLevelsStateAllowed) ENABLED START -----*/
    if (!isSocketOn)
        return false;
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::UpdateCurrVoltLevelsStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::PowerSupply_PSW_3072StateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::PowerSupply_PSW_3072StateAllowed.AdditionalMethods

}	//	End of namespace
