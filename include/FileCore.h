// ConfigFile.h

/* ESParasite Data Logger
        Authors: Andy  (SolidSt8Dad)Eakin

        Please see /ATTRIB for full credits and OSS License Info
        Please see /LIBRARIES for necessary libraries
        Please see /VERSION for Hstory

        All Derived Content is subject to the most restrictive licence of it's
        source.

        All Original content is free and unencumbered software released into the
        public domain.

        The Author(s) are extremely grateful for the amazing open source
        communities that work to support all of the sensors, microcontrollers,
        web standards, etc.

*/

#ifndef INCLUDE_FILECONFIG_H_
#define INCLUDE_FILECONFIG_H_

namespace ESParaSite {
namespace FileCore {

bool loadConfig();
bool saveConfig();

} // namespace FileCore
} // namespace ESParaSite

#endif // INCLUDE_FILECONFIG_H_
