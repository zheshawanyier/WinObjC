//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsDevicesPwmProvider.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_DEVICES_PWM_PROVIDER_EXPORT
#define OBJCUWP_WINDOWS_DEVICES_PWM_PROVIDER_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Devices_Pwm_Provider.lib")
#endif
#endif
#include <UWP/interopBase.h>

@protocol WDPPIPwmControllerProvider, WDPPIPwmProvider;

#import <Foundation/Foundation.h>

// Windows.Devices.Pwm.Provider.IPwmControllerProvider
#ifndef __WDPPIPwmControllerProvider_DEFINED__
#define __WDPPIPwmControllerProvider_DEFINED__

@protocol WDPPIPwmControllerProvider
@property (readonly) double actualFrequency;
@property (readonly) double maxFrequency;
@property (readonly) double minFrequency;
@property (readonly) int pinCount;
- (double)setDesiredFrequency:(double)frequency;
- (void)acquirePin:(int)pin;
- (void)releasePin:(int)pin;
- (void)enablePin:(int)pin;
- (void)disablePin:(int)pin;
- (void)setPulseParameters:(int)pin dutyCycle:(double)dutyCycle invertPolarity:(BOOL)invertPolarity;
@end

OBJCUWP_WINDOWS_DEVICES_PWM_PROVIDER_EXPORT
@interface WDPPIPwmControllerProvider : RTObject <WDPPIPwmControllerProvider>
@end

#endif // __WDPPIPwmControllerProvider_DEFINED__

// Windows.Devices.Pwm.Provider.IPwmProvider
#ifndef __WDPPIPwmProvider_DEFINED__
#define __WDPPIPwmProvider_DEFINED__

@protocol WDPPIPwmProvider
- (NSArray* /* RTObject<WDPPIPwmControllerProvider>* */)getControllers;
@end

OBJCUWP_WINDOWS_DEVICES_PWM_PROVIDER_EXPORT
@interface WDPPIPwmProvider : RTObject <WDPPIPwmProvider>
@end

#endif // __WDPPIPwmProvider_DEFINED__

