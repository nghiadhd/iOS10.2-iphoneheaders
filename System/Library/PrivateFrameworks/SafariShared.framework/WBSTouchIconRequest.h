/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest {

	NSString* _monogramTitle;
	CGSize _minimumIconSize;
	CGSize _maximumIconSize;

}

@property (nonatomic,readonly) CGSize minimumIconSize;                     //@synthesize minimumIconSize=_minimumIconSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumIconSize;                     //@synthesize maximumIconSize=_maximumIconSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogramTitle;              //@synthesize monogramTitle=_monogramTitle - In the implementation block
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)monogramTitle;
-(CGSize)maximumIconSize;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
@end

