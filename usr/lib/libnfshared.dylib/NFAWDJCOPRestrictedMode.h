/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCJCOPRestrictedModeEvent, NSString;

@interface NFAWDJCOPRestrictedMode : NSObject <NFAWDEventProtocol> {

	AWDNFCJCOPRestrictedModeEvent* _metric;

}

@property (assign,nonatomic) BOOL contactlessMode; 
@property (nonatomic,retain) AWDNFCJCOPRestrictedModeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
-(BOOL)contactlessMode;
-(void)setContactlessMode:(BOOL)arg1 ;
-(void)setMetric:(AWDNFCJCOPRestrictedModeEvent *)arg1 ;
-(AWDNFCJCOPRestrictedModeEvent *)metric;
@end

