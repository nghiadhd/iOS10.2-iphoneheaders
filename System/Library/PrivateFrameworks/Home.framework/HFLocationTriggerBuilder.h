/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTriggerBuilder.h>

@class CLCircularRegion;

@interface HFLocationTriggerBuilder : HFTriggerBuilder {

	CLCircularRegion* _region;

}

@property (nonatomic,copy) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
+(BOOL)supportsConditions;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(CLCircularRegion *)region;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(id)_updateRegion;
-(id)_allActionSets;
-(BOOL)requiresConfirmationToRun;
@end

