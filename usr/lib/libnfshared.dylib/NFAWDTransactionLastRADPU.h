/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTransactionLastAPDUSentEvent, NSString;

@interface NFAWDTransactionLastRADPU : NSObject <NFAWDEventProtocol> {

	AWDNFCTransactionLastAPDUSentEvent* _metric;

}

@property (nonatomic,retain) AWDNFCTransactionLastAPDUSentEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
-(void)setMetric:(AWDNFCTransactionLastAPDUSentEvent *)arg1 ;
-(AWDNFCTransactionLastAPDUSentEvent *)metric;
@end

