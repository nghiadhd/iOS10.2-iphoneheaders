/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class SFSearchResult, NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {

	long long _matchLocation;
	SFSearchResult* _sfSearchResultValue;

}

@property (nonatomic,readonly) long long matchLocation;                               //@synthesize matchLocation=_matchLocation - In the implementation block
@property (nonatomic,readonly) BOOL matchLocationIsInURL; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
+(long long)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(long long)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(NSString *)description;
-(id)title;
-(id)originalURLString;
-(id)initWithMatchLocation:(long long)arg1 ;
-(id)userVisibleURLString;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(BOOL)isTopHit;
-(long long)matchLocation;
-(BOOL)matchLocationIsInURL;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

