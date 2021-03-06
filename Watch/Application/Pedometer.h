//==============================================================================
//  Copyright 2011 Meta Watch Ltd. - http://www.MetaWatch.org/
// 
//  Licensed under the Meta Watch License, Version 1.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//      http://www.MetaWatch.org/licenses/license-1.0.html
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//==============================================================================

/******************************************************************************/
/*! \file Pedometer.h
 *
 * This is an example task that blocks on a counting semaphore.
 * When enabled it generates a message to the phone when the watch is shaken.
 * The default stack configuration may not support the amount of traffic that
 * it generates.
 */
/******************************************************************************/

#ifndef PEDOMETER_H
#define PEDOMETER_H

/*! Initialize accelerometer, setup task and counting semaphore */
void InitializePedometerTask(void);

/*! The pedometer task blocks on a counting semaphore */
void IncrementPedometerSemaphoreFromIsr(void);

#endif /*PEDOMETER_H */
