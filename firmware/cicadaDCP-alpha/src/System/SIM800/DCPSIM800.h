/**
 * CICADA DCP Firmware for the ESP32
 *
 *    VERSION: 0.0.1-alpha
 *    DATE   : 2021-01
 *    AUTHORS: André Ivo <andre.ivo@gmail.com.br>
 *    LICENSE: CC-BY-4.0
 *       SITE: https://github.com/andreivo/CicadaProject
 */

#ifndef DCPSIM800_h
#define DCPSIM800_h

#define TINY_GSM_MODEM_SIM800 //Tipo de modem que estamos usando
#include "../DCPSystem.h"
#include <TinyGsmClient.h>

class DCPSIM800 {
public:
    DCPSIM800();
    void turnOn();
    void turnOff();
    boolean setupSIM800Module();
    String getNetworkDate();
    TinyGsmSim800 getModem();
    String getSimCCID();
    String getOperator();
    IPAddress getLocalIP();
    String getSignalQuality();
    String getIMEI();
    String getIMSI();
    void resetConfig();
    void setAPN(String apn);
    void setUSER(String user);
    void setPWD(String pwd);
    boolean isConnected();
    String sendAT(String comm);

    int nextTimeSlotToRevalidateConn;
    boolean modemOn = false;
    boolean enableRevalidate = true;
    void nextSlotToRevalidateConn();
    boolean onTimeToRevalidateConn();
    void revalidateConnection();
    int getCSQasQuality(int CSQ);
};
#endif
