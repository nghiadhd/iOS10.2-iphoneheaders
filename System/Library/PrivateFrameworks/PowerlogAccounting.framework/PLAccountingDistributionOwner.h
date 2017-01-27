/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@interface PLAccountingDistributionOwner : PLAccountingOwner {

	PLAccountingEnergyEstimateEventEntry* _energyEstimate;

}

@property (__weak) id<PLAccountingDistributionOwnerManager> manager; 
@property (retain) PLAccountingEnergyEstimateEventEntry * energyEstimate;              //@synthesize energyEstimate=_energyEstimate - In the implementation block
-(void)run;
-(id)range;
-(id)ID;
-(id)activationDate;
-(id)initWithEnergyEstimate:(id)arg1 ;
-(void)setRunDate:(id)arg1 ;
-(PLAccountingEnergyEstimateEventEntry *)energyEstimate;
-(void)setEnergyEstimate:(PLAccountingEnergyEstimateEventEntry *)arg1 ;
-(void)distribute;
@end

