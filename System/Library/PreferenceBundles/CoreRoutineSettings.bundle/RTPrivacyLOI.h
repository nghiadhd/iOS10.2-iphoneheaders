/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <MapKit/MKCircle.h>
#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTLocationOfInterest, NSArray, NSString;

@interface RTPrivacyLOI : MKCircle <RTMapAndTableRowItem> {

	long long state;
	RTLocationOfInterest* loi;
	NSArray* destinations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) RTLocationOfInterest * loi; 
@property (nonatomic,retain) NSArray * destinations; 
+(id)privacyLOIWithLocationOfInterest:(id)arg1 shiftedCoordinate:(SCD_Struct_RT0)arg2 ;
+(id)privacyLOIWithLocationOfInterest:(id)arg1 ;
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(void)setLoi:(RTLocationOfInterest *)arg1 ;
-(RTLocationOfInterest *)loi;
-(NSString *)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSArray *)destinations;
-(void)setDestinations:(NSArray *)arg1 ;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
@end

