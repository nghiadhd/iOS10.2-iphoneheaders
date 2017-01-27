/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLTimeReferenceManager;
@class NSString;

@interface PLTimeReference : NSObject {

	double _offset;
	id<PLTimeReferenceManager> _timeManager;
	long long _timeReferenceType;
	NSString* _entryDefinitionKey;

}

@property (assign,nonatomic) double offset;                             //@synthesize offset=_offset - In the implementation block
@property (retain) id<PLTimeReferenceManager> timeManager;              //@synthesize timeManager=_timeManager - In the implementation block
@property (assign) long long timeReferenceType;                         //@synthesize timeReferenceType=_timeReferenceType - In the implementation block
@property (retain) NSString * entryDefinitionKey;                       //@synthesize entryDefinitionKey=_entryDefinitionKey - In the implementation block
+(id)defaultsKeyFromEntryDefinitionKey:(id)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(id)currentTime;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3 ;
-(id<PLTimeReferenceManager>)timeManager;
-(void)initializeOffsetWithEntries:(id)arg1 ;
-(id)removeTimeOffsetFromReferenceTime:(id)arg1 ;
-(id)addTimeOffsetToMonotonicTime:(id)arg1 ;
-(long long)timeReferenceType;
-(NSString *)entryDefinitionKey;
-(void)writeOffsetToDefaults;
-(void)setTimeManager:(id<PLTimeReferenceManager>)arg1 ;
-(void)setTimeReferenceType:(long long)arg1 ;
-(void)setEntryDefinitionKey:(NSString *)arg1 ;
@end

