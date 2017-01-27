/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLActivityCriterion.h>

@class NSString, NSDictionary, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion {

	NSString* _entryKey;
	/*^block*/id _criterionBlock;
	NSDictionary* _filter;
	PLEntryNotificationOperatorComposition* _entryListener;

}

@property (copy) id criterionBlock;                                                     //@synthesize criterionBlock=_criterionBlock - In the implementation block
@property (retain) NSDictionary * filter;                                               //@synthesize filter=_filter - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * entryListener;              //@synthesize entryListener=_entryListener - In the implementation block
@property (readonly) NSString * entryKey;                                               //@synthesize entryKey=_entryKey - In the implementation block
+(id)pluggedInCriterion;
+(id)displayOffCriterion;
-(id)description;
-(void)setFilter:(NSDictionary *)arg1 ;
-(NSDictionary *)filter;
-(void)didEnableActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(id)initWithEntryKey:(id)arg1 withFilter:(id)arg2 withCriterionBlock:(/*^block*/id)arg3 ;
-(id)criterionBlock;
-(void)scheduleEntryListener;
-(void)setEntryListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(id)initWithEntryKey:(id)arg1 withCriterionBlock:(/*^block*/id)arg2 ;
-(void)setCriterionBlock:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)entryListener;
-(NSString *)entryKey;
@end

