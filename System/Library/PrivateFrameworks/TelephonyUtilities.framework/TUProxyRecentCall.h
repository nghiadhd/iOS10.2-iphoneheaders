/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class CHRecentCall, TUSearchController, NSString, CNContact, NSArray;

@interface TUProxyRecentCall : NSObject <TUSearchResult> {

	CHRecentCall* _recentCall;
	TUSearchController* _searchController;

}

@property (nonatomic,retain) CHRecentCall * recentCall;                //@synthesize recentCall=_recentCall - In the implementation block
@property (readonly) NSString * mostRecentCallInfo; 
@property (__weak) TUSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) NSString * idsUniqueId; 
@property (readonly) NSString * idsCanonicalDestination; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSArray *)handles;
-(NSString *)displayName;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(id)initWithRecentCall:(id)arg1 ;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(CHRecentCall *)recentCall;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(BOOL)mostRecentCallWasMissed;
-(NSString *)idsUniqueId;
-(NSString *)idsCanonicalDestination;
-(NSArray *)idsCanonicalDestinations;
-(NSString *)mostRecentCallInfo;
-(void)setRecentCall:(CHRecentCall *)arg1 ;
@end

