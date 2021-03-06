/*
    Arms for iSENSE
    Copyright (C) 2018 Engaging Computing Group

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

namespace Config {

// A joke
//const String deviceName = "pudding" ;

// The domain name of iSENSE
const String iSENSEHost = "isenseproject.org" ;

// The path the the version of the API to be targeted
const String iSENSEAPIPath = "/api/v1" ;

// The path to the particular endpoint to be targeted within the API
// /projects/2156 is Plinko!
const String iSENSEAPIEndpoint = "/projects/2156" ;

// iSENSE certificate fingerprint FIXME: this is irelevant if https is broken
const String iSENSEFingerprint_SHA1 = "04 C2 40 07 A4 AE 98 71 76 A3 60 ED 3A 33 4E 89 28 B7 D4 4C" ;

// Port to use in connection to iSENSE
const uint16_t iSENSEPort = 80 ;

/*
    TODO:
    -- add a way to specify the display method (linear, logarithmic, binary)
    -- add more display methods
*/

// This may not be the best way to do this
const String targetKey = "dataSetCount" ;

// The expected range of the retrieved value. The servo arm will be adjusted to show how far
// the retrieved values is between these values. If the value is outside this range, the servo
// arm will be moved to either extreme position (0 for <= low bound, 180 for >= high bound)
const double displayLowBound = 1600;
const double displayHighBound = 1700.0 ;

} // namespace Config

#endif // CONFIG_H