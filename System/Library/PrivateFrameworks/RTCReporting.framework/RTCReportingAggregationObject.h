/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ClientSessionReplyInterface.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {

	/*^block*/id _aggregationBlock;

}
-(void)dealloc;
-(void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(id)initWithAggregationBlock:(/*^block*/id)arg1 ;
@end

