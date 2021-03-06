/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class NSArray, NSString, NSDate, NSNumber, NSURL, EKPersistentSuggestedEventInfo;

@interface EKPersistentEvent : EKPersistentCalendarItem {

	SCD_Struct_EK7 _cachedDurationUnits;

}

@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,readonly) BOOL allowsParticipationStatusModifications; 
@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) SCD_Struct_EK7 durationUnits; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (nonatomic,readonly) int birthdayID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * responseComment; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,readonly) unsigned invitationChangedProperties; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long availability; 
@property (assign,nonatomic) long long privacyLevel; 
@property (getter=isFloating,nonatomic,readonly) BOOL floating; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isMeeting,nonatomic,readonly) BOOL meeting; 
@property (getter=isInvitation,nonatomic,readonly) BOOL invitation; 
@property (assign,nonatomic) long long travelAdvisoryBehavior; 
@property (assign,nonatomic) BOOL needsOccurrenceCacheUpdate; 
@property (assign,nonatomic) long long participationStatus; 
@property (nonatomic,readonly) long long pendingParticipationStatus; 
@property (assign,nonatomic) long long locationPredictionState; 
@property (nonatomic,copy) NSDate * originalStartDate; 
@property (nonatomic,retain) EKPersistentSuggestedEventInfo * suggestedEventInfo; 
@property (assign,nonatomic) BOOL firedTTL; 
@property (nonatomic,copy) NSDate * proposedStartDate; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
-(void)setActions:(NSArray *)arg1 ;
-(id)description;
-(double)duration;
-(NSArray *)actions;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isFloating;
-(void)addAction:(id)arg1 ;
-(id)initCommon;
-(BOOL)refresh;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(NSNumber *)travelTime;
-(unsigned long long)invitationStatus;
-(void)_invalidateCachedDurationUnits;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(BOOL)_areDurationUnitsCached;
-(BOOL)hasValidEventAction;
-(BOOL)isInvitation;
-(BOOL)_hasExternalIDOrDeliverySource;
-(long long)pendingParticipationStatus;
-(void)_adjustForNewCalendar;
-(void)_updateSelfFromDetachedEventIfNeededForDelete;
-(long long)travelAdvisoryBehavior;
-(void)setOriginalStartDate:(NSDate *)arg1 ;
-(void)setLocationPredictionState:(long long)arg1 ;
-(int)birthdayID;
-(SCD_Struct_EK7)durationUnits;
-(BOOL)isMeeting;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(long long)birthdayId;
-(unsigned)invitationChangedProperties;
-(BOOL)disallowProposeNewTime;
-(id)committedStartDate;
-(BOOL)allowsParticipationStatusModifications;
-(void)deleteFromOccurrenceDateOnward:(id)arg1 ;
-(void)filterExceptionDates;
-(void)clearExceptionDatesAndUpdateDetachedOriginalDates;
-(EKPersistentSuggestedEventInfo *)suggestedEventInfo;
-(void)setSuggestedEventInfo:(EKPersistentSuggestedEventInfo *)arg1 ;
-(void)setFiredTTL:(BOOL)arg1 ;
-(void)removeAction:(id)arg1 ;
-(NSDate *)proposedStartDate;
-(NSString *)eventIdentifier;
-(long long)participationStatus;
-(id)organizer;
-(void)setProposedStartDate:(NSDate *)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setParticipationStatus:(long long)arg1 ;
-(NSString *)responseComment;
-(void)setResponseComment:(NSString *)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(NSDate *)originalStartDate;
-(BOOL)responseMustApplyToAll;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(int)entityType;
-(NSDate *)endDate;
-(BOOL)canForward;
-(BOOL)validate:(id*)arg1 ;
-(long long)locationPredictionState;
-(BOOL)firedTTL;
@end

