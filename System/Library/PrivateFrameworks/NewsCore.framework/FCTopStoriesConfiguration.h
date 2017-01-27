/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTPBTopStoriesConfig, NSString, NSDictionary;

@interface FCTopStoriesConfiguration : NSObject {

	NTPBTopStoriesConfig* _pbConfig;
	BOOL _pinningEnabled;
	BOOL _promotingEnabled;
	NSString* _channelID;
	long long _maximumArticleCount;
	long long _cutoffTime;
	NSDictionary* _styleConfigurations;
	long long _storyTypeTimeout;

}

@property (getter=isPinningEnabled,nonatomic,readonly) BOOL pinningEnabled;                  //@synthesize pinningEnabled=_pinningEnabled - In the implementation block
@property (getter=isPromotingEnabled,nonatomic,readonly) BOOL promotingEnabled;              //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) long long maximumArticleCount;                                //@synthesize maximumArticleCount=_maximumArticleCount - In the implementation block
@property (nonatomic,readonly) long long cutoffTime;                                         //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleConfigurations;                           //@synthesize styleConfigurations=_styleConfigurations - In the implementation block
@property (nonatomic,readonly) long long storyTypeTimeout;                                   //@synthesize storyTypeTimeout=_storyTypeTimeout - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isPinningEnabled;
-(id)initWithDefaults;
-(NSString *)channelID;
-(NSDictionary *)styleConfigurations;
-(long long)storyTypeTimeout;
-(id)initWithPBTopStoriesConfig:(id)arg1 ;
-(long long)maximumArticleCount;
-(long long)cutoffTime;
-(BOOL)isPromotingEnabled;
@end

