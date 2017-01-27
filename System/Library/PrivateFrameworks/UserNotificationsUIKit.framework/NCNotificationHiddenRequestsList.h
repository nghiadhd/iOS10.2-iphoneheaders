/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface NCNotificationHiddenRequestsList : NSObject {

	NSMutableSet* _hiddenSectionStrings;
	NSMutableDictionary* _hiddenRequests;

}

@property (nonatomic,retain) NSMutableSet * hiddenSectionStrings;               //@synthesize hiddenSectionStrings=_hiddenSectionStrings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenRequests;              //@synthesize hiddenRequests=_hiddenRequests - In the implementation block
@property (nonatomic,readonly) NSSet * allNotificationRequests; 
-(id)init;
-(NSMutableDictionary *)hiddenRequests;
-(id)_requestsMatchingRequest:(id)arg1 inSet:(id)arg2 ;
-(id)_storageStringForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(NSMutableSet *)hiddenSectionStrings;
-(NSSet *)allNotificationRequests;
-(void)clearAllNotificationRequests;
-(void)addHiddenNotificationRequest:(id)arg1 ;
-(void)replaceHiddenNotificationRequest:(id)arg1 ;
-(void)removeHiddenNotificationRequest:(id)arg1 ;
-(BOOL)isHiddenNotificationRequest:(id)arg1 ;
-(void)addHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)removeHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(BOOL)isHiddenSectionIdentifer:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(id)hiddenNotificationRequestsForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)setHiddenSectionStrings:(NSMutableSet *)arg1 ;
-(void)setHiddenRequests:(NSMutableDictionary *)arg1 ;
@end

