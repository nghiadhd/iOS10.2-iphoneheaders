/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantType; 
@property (assign,nonatomic) long long pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(long long)participantRole;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(BOOL)statusChanged;
-(BOOL)commentChanged;
-(BOOL)proposedStartDateChanged;
-(void)setCommentChanged:(BOOL)arg1 ;
-(void)setStatusChanged:(BOOL)arg1 ;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(int)entityType;
-(long long)participantType;
-(void)setParticipantType:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(long long)participantStatus;
-(NSDate *)lastModified;
@end

