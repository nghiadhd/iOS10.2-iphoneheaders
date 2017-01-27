/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSMutableArray, NSObject;

@interface NFPowerAssertion : NSObject {

	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	unsigned _assertionID;
	NSMutableArray* _assertionHolders;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedPowerAssertion;
-(id)init;
-(void)dealloc;
-(void)releasePowerAssertion:(id)arg1 ;
-(void)holdPowerAssertion:(id)arg1 ;
@end

