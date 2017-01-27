/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject {

	FCDateRange* _dateRange;
	unsigned long long _fixedArticleCount;
	long long _feedType;
	NSString* _sessionID;

}

@property (nonatomic,retain) FCDateRange * dateRange;                           //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) unsigned long long fixedArticleCount;              //@synthesize fixedArticleCount=_fixedArticleCount - In the implementation block
@property (assign,nonatomic) long long feedType;                                //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(FCDateRange *)dateRange;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(unsigned long long)fixedArticleCount;
-(void)setFixedArticleCount:(unsigned long long)arg1 ;
@end

