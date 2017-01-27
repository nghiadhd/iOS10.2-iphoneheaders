/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBClient;

@interface AXBBlueLightManager : NSObject {

	CBClient* _brightnessClient;
	BOOL _blueLightStatusEnabled;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)supportsBlueLightReduction;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(BOOL)supportsAdaptation;
@end

