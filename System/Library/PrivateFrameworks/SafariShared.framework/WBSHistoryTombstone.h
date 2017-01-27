/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary;

@interface WBSHistoryTombstone : NSObject {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;
	double _startTime;
	double _endTime;
	long long _generation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * urlString;                                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSData * urlHash;                                     //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) NSData * urlSalt;                                     //@synthesize urlSalt=_urlSalt - In the implementation block
@property (nonatomic,readonly) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long generation;                                 //@synthesize generation=_generation - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isSecure;
-(double)startTime;
-(NSDictionary *)dictionaryRepresentation;
-(double)endTime;
-(NSString *)urlString;
-(BOOL)matchesVisitTime:(double)arg1 urlString:(id)arg2 ;
-(id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6 ;
-(id)secureTombstoneWithSalt:(id)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 historyStore:(id)arg2 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
-(long long)generation;
@end

