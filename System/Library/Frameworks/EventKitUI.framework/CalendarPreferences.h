/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSArray, NSNumber, NSString, NSDate;

@interface CalendarPreferences : NSObject {

	CalPreferences* _preferences;
	BOOL _drawDebugViewColors;

}

@property (assign,nonatomic) BOOL showWeekNumbers; 
@property (assign,nonatomic) BOOL showListView; 
@property (assign,nonatomic) BOOL showMonthDividedListView; 
@property (assign,nonatomic) BOOL viewedTimeZoneAutomatic; 
@property (assign,nonatomic) BOOL requestSyncOnApplicationLaunch; 
@property (assign,nonatomic) BOOL drawDebugViewColors;                                                       //@synthesize drawDebugViewColors=_drawDebugViewColors - In the implementation block
@property (assign,nonatomic) BOOL immediateAlarmCreation; 
@property (assign,nonatomic) BOOL showEventsInPhoneMonthView; 
@property (assign,nonatomic) BOOL showExperimentalUI; 
@property (assign,nonatomic) BOOL showDetailedListView; 
@property (assign,nonatomic) BOOL disableContinuity; 
@property (assign,nonatomic) BOOL swipeToDeleteEnabled; 
@property (assign,nonatomic) BOOL largeListViewDisclosingEventDetails; 
@property (assign,nonatomic) BOOL showWindowDebugButton; 
@property (assign,getter=isShortResumeToTodayTimeout,nonatomic) BOOL shortResumeToTodayTimeout; 
@property (assign,nonatomic) BOOL hideInlineDayViewInEventDetails; 
@property (assign,nonatomic) BOOL disableTodayPushes; 
@property (assign,nonatomic) BOOL enableAvatars; 
@property (assign,nonatomic) unsigned long long promptForCommentWhenDeclining; 
@property (assign,nonatomic) unsigned long long debugOccurrenceViewIconOverload; 
@property (nonatomic,retain) NSArray * calendarUUIDsExcludedFromNotifications; 
@property (nonatomic,retain) NSNumber * weekStart; 
@property (nonatomic,retain) NSNumber * lastSuspendTime; 
@property (nonatomic,retain) NSNumber * lastViewedDate; 
@property (nonatomic,retain) NSNumber * lastViewMode; 
@property (nonatomic,retain) NSNumber * dayViewHourScale; 
@property (nonatomic,retain) NSNumber * weekViewHourScale; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSString * overlayCalendarID; 
@property (nonatomic,retain) NSDate * simulatedCurrentDate; 
@property (nonatomic,retain) NSNumber * locationSearchResultLimit; 
@property (nonatomic,retain) NSNumber * lastConfirmedSplashScreenVersionViewed; 
@property (assign,nonatomic) BOOL eventAutocompleteEnabled; 
@property (nonatomic,retain) NSArray * deselectedCalendarSyncHashes; 
+(id)sharedPreferences;
-(id)init;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)overlayCalendarID;
-(NSNumber *)weekStart;
-(BOOL)showWeekNumbers;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(BOOL)enableAvatars;
-(NSNumber *)locationSearchResultLimit;
-(NSNumber *)dayViewHourScale;
-(void)setDayViewHourScale:(NSNumber *)arg1 ;
-(unsigned long long)debugOccurrenceViewIconOverload;
-(BOOL)immediateAlarmCreation;
-(BOOL)eventAutocompleteEnabled;
-(BOOL)hideInlineDayViewInEventDetails;
-(NSArray *)deselectedCalendarSyncHashes;
-(void)setDeselectedCalendarSyncHashes:(NSArray *)arg1 ;
-(NSDate *)simulatedCurrentDate;
-(void)setSimulatedCurrentDate:(NSDate *)arg1 ;
-(void)setWeekStart:(NSNumber *)arg1 ;
-(NSNumber *)lastViewMode;
-(void)setLastViewMode:(NSNumber *)arg1 ;
-(NSNumber *)lastSuspendTime;
-(void)setLastSuspendTime:(NSNumber *)arg1 ;
-(NSNumber *)weekViewHourScale;
-(void)setWeekViewHourScale:(NSNumber *)arg1 ;
-(void)setOverlayCalendarID:(NSString *)arg1 ;
-(BOOL)showListView;
-(void)setShowListView:(BOOL)arg1 ;
-(BOOL)showMonthDividedListView;
-(void)setShowMonthDividedListView:(BOOL)arg1 ;
-(void)setImmediateAlarmCreation:(BOOL)arg1 ;
-(BOOL)viewedTimeZoneAutomatic;
-(void)setViewedTimeZoneAutomatic:(BOOL)arg1 ;
-(BOOL)requestSyncOnApplicationLaunch;
-(void)setRequestSyncOnApplicationLaunch:(BOOL)arg1 ;
-(NSArray *)calendarUUIDsExcludedFromNotifications;
-(void)setCalendarUUIDsExcludedFromNotifications:(NSArray *)arg1 ;
-(BOOL)showEventsInPhoneMonthView;
-(void)setShowEventsInPhoneMonthView:(BOOL)arg1 ;
-(void)setLocationSearchResultLimit:(NSNumber *)arg1 ;
-(unsigned long long)promptForCommentWhenDeclining;
-(void)setPromptForCommentWhenDeclining:(unsigned long long)arg1 ;
-(void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1 ;
-(BOOL)showExperimentalUI;
-(void)setShowExperimentalUI:(BOOL)arg1 ;
-(BOOL)showDetailedListView;
-(void)setShowDetailedListView:(BOOL)arg1 ;
-(BOOL)disableContinuity;
-(void)setDisableContinuity:(BOOL)arg1 ;
-(BOOL)swipeToDeleteEnabled;
-(void)setSwipeToDeleteEnabled:(BOOL)arg1 ;
-(BOOL)largeListViewDisclosingEventDetails;
-(void)setLargeListViewDisclosingEventDetails:(BOOL)arg1 ;
-(BOOL)showWindowDebugButton;
-(void)setShowWindowDebugButton:(BOOL)arg1 ;
-(void)setHideInlineDayViewInEventDetails:(BOOL)arg1 ;
-(BOOL)isShortResumeToTodayTimeout;
-(void)setShortResumeToTodayTimeout:(BOOL)arg1 ;
-(NSNumber *)lastConfirmedSplashScreenVersionViewed;
-(void)setLastConfirmedSplashScreenVersionViewed:(NSNumber *)arg1 ;
-(BOOL)disableTodayPushes;
-(void)setDisableTodayPushes:(BOOL)arg1 ;
-(void)setEnableAvatars:(BOOL)arg1 ;
-(void)setEventAutocompleteEnabled:(BOOL)arg1 ;
-(BOOL)drawDebugViewColors;
-(void)setDrawDebugViewColors:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSNumber *)arg1 ;
-(NSNumber *)lastViewedDate;
@end

