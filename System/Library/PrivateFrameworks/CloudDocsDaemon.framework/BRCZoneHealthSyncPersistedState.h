/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>

@class NSDate, CKServerChangeToken;

@interface BRCZoneHealthSyncPersistedState : BRCPersistedState {

	BOOL _needsSyncDown;
	NSDate* _lastSyncDownDate;
	CKServerChangeToken* _changeToken;
	unsigned long long _requestID;

}

@property (readonly) NSDate * lastSyncDownDate;                                //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL needsSyncDown;                               //@synthesize needsSyncDown=_needsSyncDown - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)requestID;
-(void)zoneHealthWasReset;
-(NSDate *)lastSyncDownDate;
-(BOOL)needsSyncDown;
-(CKServerChangeToken *)changeToken;
-(void)setNeedsSyncDown:(BOOL)arg1 ;
-(void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(id)initWithZoneHealthState:(id)arg1 ;
-(unsigned long long)allocateNextRequestID;
@end

