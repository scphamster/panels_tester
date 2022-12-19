#pragma once

namespace ProjCfg
{
enum BluetoothCfg {
    SppQueueLen            = 10,
    SppTaskStackSize       = 4000,
    SppTaskPrio            = 10,
    SppSendTimeoutMs       = 10,
    SppReaderTaskStackSize = 3096,
    SppReaderTaskPrio      = 5,
    SppWriterTaskStackSize = 3048,
    SppWriterTaskPrio      = 4,
};

enum BoardsConfigs {
    IICSpeedHz = 50000,
    SDA_Pin    = 33,
    SCL_Pin    = 32,
};

enum Tasks {
    VoltageCheckTaskPio           = 6,
    VoltageCheckTaskStackSize     = 4000,
    MainMeasurementsTaskPrio      = 5,
    MainMeasurementsTaskStackSize = 4000
};

enum class ComponentLogSwitch : bool {
    IIC      = true,
    IOBoards = true,
    Main     = true,
};
}