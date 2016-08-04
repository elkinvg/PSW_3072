/*----- PROTECTED REGION ID(PowerSupply_PSW_3072.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        PowerSupply_PSW_3072.cpp
//
// description : C++ source for the PowerSupply_PSW_3072 class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               PowerSupply_PSW_3072 are implemented in this file.
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
#include <PowerSupply_PSW_3072Class.h>

/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072.cpp

/**
 *  PowerSupply_PSW_3072 class description:
 *    Tango Server for PowerSupply PSW_30-72 Instek.
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name          |  Method name
//================================================================
//  State                 |  Inherited (no method)
//  Status                |  Inherited (no method)
//  MeasureUpdate         |  measure_update
//  On                    |  on
//  Off                   |  off
//  SetVoltageLevel       |  set_voltage_level
//  SetCurrentLevel       |  set_current_level
//  UpdateCurrVoltLevels  |  update_curr_volt_levels
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  volt_meas   |  Tango::DevDouble	Scalar
//  curr_meas   |  Tango::DevDouble	Scalar
//  volt_level  |  Tango::DevDouble	Scalar
//  curr_level  |  Tango::DevDouble	Scalar
//================================================================

namespace PowerSupply_PSW_3072_ns
{
/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::PowerSupply_PSW_3072()
 *	Description : Constructors for a Tango device
 *                implementing the classPowerSupply_PSW_3072
 */
//--------------------------------------------------------
PowerSupply_PSW_3072::PowerSupply_PSW_3072(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::constructor_1
}
//--------------------------------------------------------
PowerSupply_PSW_3072::PowerSupply_PSW_3072(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::constructor_2
}
//--------------------------------------------------------
PowerSupply_PSW_3072::PowerSupply_PSW_3072(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::delete_device()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::delete_device
	delete[] attr_volt_meas_read;
	delete[] attr_curr_meas_read;
	delete[] attr_volt_level_read;
	delete[] attr_curr_level_read;
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::init_device()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::init_device_before
	

	//	Get the device properties from database
	get_device_property();
	
	attr_volt_meas_read = new Tango::DevDouble[1];
	attr_curr_meas_read = new Tango::DevDouble[1];
	attr_volt_level_read = new Tango::DevDouble[1];
	attr_curr_level_read = new Tango::DevDouble[1];
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::init_device) ENABLED START -----*/
	
    attr_curr_level_read[0] = -1;
    attr_volt_level_read[0] = -1;

    try {
        DEBUG_STREAM << "Socket:    " << socket << endl;
        socketProxy = new Tango::DeviceProxy(socket);
    } catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
    }

    check_psstate();
    //updateCurrVoltLevels();
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::init_device
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::get_device_property()
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("Socket"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on PowerSupply_PSW_3072Class to get class property
		Tango::DbDatum	def_prop, cl_prop;
		PowerSupply_PSW_3072Class	*ds_class =
			(static_cast<PowerSupply_PSW_3072Class *>(get_device_class()));
		int	i = -1;

		//	Try to initialize Socket from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  socket;
		else {
			//	Try to initialize Socket from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  socket;
		}
		//	And try to extract Socket value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  socket;

	}

	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::get_device_property_after
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::always_executed_hook()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::always_executed_hook) ENABLED START -----*/
	
    // ??? if check_socket_state() ?
    check_psstate();
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::read_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute volt_meas related method
 *	Description: the output voltage
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::read_volt_meas(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::read_volt_meas(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::read_volt_meas) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_volt_meas_read);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::read_volt_meas
}
//--------------------------------------------------------
/**
 *	Read attribute curr_meas related method
 *	Description: the output current
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::read_curr_meas(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::read_curr_meas(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::read_curr_meas) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_curr_meas_read);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::read_curr_meas
}
//--------------------------------------------------------
/**
 *	Read attribute volt_level related method
 *	Description: the voltage level in volts
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::read_volt_level(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::read_volt_level(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::read_volt_level) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_volt_level_read);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::read_volt_level
}
//--------------------------------------------------------
/**
 *	Read attribute curr_level related method
 *	Description: The current level in amps
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::read_curr_level(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::read_curr_level(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::read_curr_level) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_curr_level_read);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::read_curr_level
}

//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command MeasureUpdate related method
 *	Description: Takes a measurement and updates the average output current and voltage
 *
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::measure_update()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::MeasureUpdate()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::measure_update) ENABLED START -----*/

    auto currVolt = getValuesOfCurrAndVolt(MEASCURRVOLT);

    attr_curr_meas_read[0] = currVolt.first;
    attr_volt_meas_read[0] = currVolt.second;

	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::measure_update
}
//--------------------------------------------------------
/**
 *	Command On related method
 *	Description: Turns the output on.
 *
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::on()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::On()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::on) ENABLED START -----*/
    Tango::DeviceData input;
    input << OUTPUTMODEON;
    try {
        socketProxy->command_inout("Write", input);
        this->set_state(Tango::ON);
        this->set_status("Output status is On");
    }
    catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
    }
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::on
}
//--------------------------------------------------------
/**
 *	Command Off related method
 *	Description: Turns the output off.
 *
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::off()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::Off()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::off) ENABLED START -----*/
	
    Tango::DeviceData input;
    input << OUTPUTMODEOFF;
    try {
        socketProxy->command_inout("Write", input);
        this->set_state(Tango::OFF);
        this->set_status("Output status is OFF");
    }
    catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
    }

	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::off
}
//--------------------------------------------------------
/**
 *	Command SetVoltageLevel related method
 *	Description: Sets the voltage level in volts.
 *
 *	@param argin Voltage level in volts
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::set_voltage_level(Tango::DevDouble argin)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::SetVoltageLevel()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::set_voltage_level) ENABLED START -----*/
    forSettingOfLevels(argin, SETVOLTLEVEL);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::set_voltage_level
}
//--------------------------------------------------------
/**
 *	Command SetCurrentLevel related method
 *	Description: Sets or queries the current level in amps.
 *
 *	@param argin The current level in amps.
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::set_current_level(Tango::DevDouble argin)
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::SetCurrentLevel()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::set_current_level) ENABLED START -----*/
    forSettingOfLevels(argin, SETCURLEVEL);
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::set_current_level
}
//--------------------------------------------------------
/**
 *	Command UpdateCurrVoltLevels related method
 *	Description: Queries the current level in amps and the voltage level in volts.
 *
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::update_curr_volt_levels()
{
	DEBUG_STREAM << "PowerSupply_PSW_3072::UpdateCurrVoltLevels()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::update_curr_volt_levels) ENABLED START -----*/
	
    if (isSocketOn) {
        auto currVolt = getValuesOfCurrAndVolt(GETCURRVOLTLEVEL);

        attr_curr_level_read[0] = currVolt.first;
        attr_volt_level_read[0] = currVolt.second;
    }
    else
    {
        attr_curr_level_read[0] = -1;
        attr_volt_level_read[0] = -1;
    }
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::update_curr_volt_levels
}
//--------------------------------------------------------
/**
 *	Method      : PowerSupply_PSW_3072::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void PowerSupply_PSW_3072::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::add_dynamic_commands
}

/*----- PROTECTED REGION ID(PowerSupply_PSW_3072::namespace_ending) ENABLED START -----*/

void PowerSupply_PSW_3072::check_psstate()
{
    Tango::DeviceData input, output;
    string outState;

    check_socket_state();

    if(isSocketOn) {
        if (attr_curr_level_read[0] == -1 || attr_volt_level_read[0] == -1) {
            //updateCurrVoltLevels();
            update_curr_volt_levels();
        }
        try {
            input << OUTPUTMODESTATUS;
            output = socketProxy->command_inout("WriteAndRead",input);
            output >> outState;
        } catch (Tango::DevFailed &e) {
            Tango::Except::print_exception(e);
            return;
        }

        unsigned short isActive;

        try {
            isActive = stoi(outState);
        } catch (const std::invalid_argument& ia) {
            isActive = 0;
            ERROR_STREAM << "Invalid argument in out_state: " << ia.what() << '\n';
        }

        if (isActive) {
            set_state(Tango::ON);
            set_status("Output status is On");
        } else {
            set_state(Tango::OFF);
            set_status("Output status is Off");
        }
    }
    else {
        set_state(Tango::FAULT);
        set_status("Can't connect to socket");
        reconnectSocket();
    }
}

void PowerSupply_PSW_3072::check_socket_state()
{
    Tango::DeviceData outputCom;
    Tango::DevState stateSocket;

    try {
        outputCom = socketProxy->command_inout("State");
        outputCom >> stateSocket;
        if (stateSocket == Tango::ON) {
            isSocketOn = true;
        }
        else if (stateSocket == Tango::OFF || stateSocket == Tango::FAULT)
        {
            isSocketOn = false;
        }
    } catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
        isSocketOn = false;
    }
}

//void PowerSupply_PSW_3072::updateCurrVoltLevels()
//{
//    if (isSocketOn) {
//        auto currVolt = getValuesOfCurrAndVolt(GETCURRVOLTLEVEL);

//        attr_curr_level_read[0] = currVolt.first;
//        attr_volt_level_read[0] = currVolt.second;
//    }
//    else
//    {
//        attr_curr_level_read[0] = -1;
//        attr_volt_level_read[0] = -1;
//    }
//}

std::pair<Tango::DevDouble, Tango::DevDouble> PowerSupply_PSW_3072::getValuesFromResponse(string reply)
{
    //  Formate of response: current;volt
    std::size_t found;
    Tango::DevDouble cur, volt;

    found = reply.find(';');
    if (found == std::string::npos) {
        ERROR_STREAM << "Response from the source is unknown format";
        return make_pair(-1, -1);
    }

    try {
        cur = stod(reply.substr(0, found));
        volt = stod(reply.substr(found + 1));
        return make_pair(cur, volt);
    }
    catch (const std::invalid_argument& ia) {
        ERROR_STREAM << "Invalid argument: " << ia.what() << '\n';
    }
    catch (const std::out_of_range& oor) {
        ERROR_STREAM << "Out of Range error: " << oor.what() << '\n';
    }
    return make_pair(-1, -1);
}

std::pair<Tango::DevDouble, Tango::DevDouble> PowerSupply_PSW_3072::getValuesOfCurrAndVolt(string command)
{
    //  Formate of input command:  command1?;:command2? 
    //  command1 - for current, command2 - for volt
    Tango::DeviceData input, output;
    std::string reply;

    try {
        input << command;
        output = socketProxy->command_inout("WriteAndRead", input);
        output >> reply;
        if (command == GETCURRVOLTLEVEL)
            DEBUG_STREAM << "REPLY getValuesOfCurrAndVolt: " << reply << endl;
    }
    catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
        return make_pair(-1, -1);
    }
    return getValuesFromResponse(reply);
}

void PowerSupply_PSW_3072::forSettingOfLevels(Tango::DevDouble argin, string command)
{
    Tango::DeviceData input;

    stringstream ss;
    ss << command << argin;

    Tango::DevString commIn = Tango::string_dup(ss.str().c_str());

    try {
        input << commIn;
        socketProxy->command_inout("Write", input);
    }
    catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
    }
}

void PowerSupply_PSW_3072::reconnectSocket()
{
    try {
        socketProxy->command_inout("Reconnect");
    } catch (Tango::DevFailed &e) {
        Tango::Except::print_exception(e);
    }
}

/*----- PROTECTED REGION END -----*/	//	PowerSupply_PSW_3072::namespace_ending
} //	namespace
