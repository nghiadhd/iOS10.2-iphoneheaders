/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCHeadlineTemplate.h>

@class FCTextInfo;

@interface FCImageOnTopPremiumHeadlineTemplate : FCHeadlineTemplate {

	FCTextInfo* _headlineSubtitleTextInfo;

}

@property (nonatomic,copy) FCTextInfo * headlineSubtitleTextInfo;              //@synthesize headlineSubtitleTextInfo=_headlineSubtitleTextInfo - In the implementation block
+(id)_defaultSubtitleTextColor;
+(id)debug_templateForHash:(unsigned long long)arg1 ;
-(id)loadableFonts;
-(id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2 ;
-(id)_allThemePropertyNames;
-(id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2 allowNil:(BOOL)arg3 ;
-(FCTextInfo *)headlineSubtitleTextInfo;
-(void)setHeadlineSubtitleTextInfo:(FCTextInfo *)arg1 ;
@end

