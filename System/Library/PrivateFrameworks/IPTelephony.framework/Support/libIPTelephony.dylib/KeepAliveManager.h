/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/PCConnectionManagerDelegate.h>

@class PCConnectionManager, NSString;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _manager;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _keepAliveId;
	ImsKeepAliveDelegate* _delegate;
	BOOL _enableWakeUpOnWifi;
	BOOL _keepAliveStarted;
	WiFiManagerClientRef _wifiManagerRef;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)startKeepAlive;
-(id)initWithIdentifier:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 maxInterval:(double)arg2 enableWakeUp:(BOOL)arg3 delegate:(ImsKeepAliveDelegate*)arg4 ;
-(void)stopKeepAlive;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(void)startWakeUpOnWifi;
-(void)stopWakeUpOnWifi;
@end

