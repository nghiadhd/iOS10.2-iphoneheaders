/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebDeviceOrientationProvider.h>

@class WebDeviceOrientationProviderMockInternal, NSString;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {

	WebDeviceOrientationProviderMockInternal* m_internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)startUpdating;
-(void)stopUpdating;
-(id)lastOrientation;
-(id)init;
-(void)dealloc;
-(void)setOrientation:(id)arg1 ;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
@end

