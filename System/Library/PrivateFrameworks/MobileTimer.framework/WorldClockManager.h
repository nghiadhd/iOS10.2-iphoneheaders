/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WorldClockPreferences, NSDate, NSArray;

@interface WorldClockManager : NSObject {

	BOOL _dirty;
	NSMutableArray* _cities;
	WorldClockPreferences* _defaults;
	NSDate* lastModified;

}

@property (nonatomic,retain) NSDate * lastModified; 
@property (nonatomic,readonly) NSArray * cities;                 //@synthesize cities=_cities - In the implementation block
+(id)sharedManager;
+(id)sharedManagerWithPreferences:(id)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(NSArray *)cities;
-(id)initWithPreferences:(id)arg1 ;
-(void)addDefaultCitiesIfNeeded;
-(id)worldClockCityFromPersistenceRepresentation:(id)arg1 ;
-(void)pushCityPropertiesToPreferences;
-(void)_notifyNano;
-(id)worldClockCityFromPersistenceDictionary:(id)arg1 ;
-(id)worldClockCityFromPersistenceArray:(id)arg1 ;
-(id)fixUpCityProperties:(id)arg1 ;
-(void)saveCities;
-(BOOL)canAddCity;
-(id)cityWithIdUrl:(id)arg1 ;
-(unsigned long long)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)removeAllCities;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)checkIfCitiesModified;
-(void)loadCities;
-(NSDate *)lastModified;
@end

