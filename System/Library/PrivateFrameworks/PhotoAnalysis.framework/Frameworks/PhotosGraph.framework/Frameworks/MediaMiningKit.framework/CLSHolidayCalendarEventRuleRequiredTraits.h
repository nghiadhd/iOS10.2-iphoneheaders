/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits {

	BOOL _mustContainMePerson;
	unsigned long long _type;
	NSRange _peopleRange;

}

@property (assign,nonatomic) BOOL mustContainMePerson;              //@synthesize mustContainMePerson=_mustContainMePerson - In the implementation block
@property (assign,nonatomic) NSRange peopleRange;                   //@synthesize peopleRange=_peopleRange - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isCelebration; 
+(id)_locationTraitDebugStringForTrait:(unsigned long long)arg1 ;
+(id)_peopleTraitDebugStringForTrait:(unsigned long long)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(BOOL)evaluateWithTraits:(id)arg1 ;
-(BOOL)isCelebration;
-(BOOL)peopleCountRangeIsRequired;
-(NSRange)peopleRange;
-(BOOL)mustContainMePerson;
-(void)setMustContainMePerson:(BOOL)arg1 ;
-(void)setPeopleRange:(NSRange)arg1 ;
@end

