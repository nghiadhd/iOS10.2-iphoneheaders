/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NFSession;
@class NSObject;

@interface PKPaymentSessionHandle : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;
	id<NFSession> _sessionHandle;

}
+(id)paymentSessionHandleWithInternalSessionHandle:(id)arg1 ;
-(id)initWithInternalSessionHandle:(id)arg1 ;
-(BOOL)isFirstInQueue;
-(void)invalidateSession;
@end

