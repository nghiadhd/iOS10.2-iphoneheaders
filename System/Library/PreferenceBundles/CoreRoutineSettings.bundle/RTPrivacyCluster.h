/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <MapKit/MKPolygon.h>

@class NSSet, UIColor;

@interface RTPrivacyCluster : MKPolygon {

	NSSet* _privacyLOIs;
	long long _nameStyle;
	NSSet* _countrySet;
	NSSet* _administrativeAreaSet;
	NSSet* _localitySet;
	NSSet* _nameSet;
	NSSet* _subNameSet;

}

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSSet * privacyLOIs;              //@synthesize privacyLOIs=_privacyLOIs - In the implementation block
+(id)privacyClusterWithMapRect:(SCD_Struct_RT1)arg1 privacyLOIs:(id)arg2 ;
-(id)privacyLOIsSortedByRecent;
-(void)_nameUsingPrivacyLOIs:(id)arg1 ;
-(BOOL)containsCluster:(id)arg1 ;
-(id)privacyLOIsSortedByFrequency;
-(SCD_Struct_RT1)bestFitMapRect;
-(NSSet *)privacyLOIs;
-(id)localizedInformation;
-(id)combineWithCluster:(id)arg1 ;
-(id)description;
-(id)name;
-(UIColor *)color;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
-(id)longName;
@end

