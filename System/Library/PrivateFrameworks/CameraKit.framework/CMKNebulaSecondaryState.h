/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface CMKNebulaSecondaryState : NSObject <NSCoding> {

	NSDate* _stopTime;
	long long _stopReasons;
	NSDate* _lastMovieWriteAttemptTime;
	long long _movieWriteAttemptsCount;
	long long _failedStateReadAttemptsCount;

}

@property (nonatomic,retain) NSDate * stopTime;                                   //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) long long stopReasons;                               //@synthesize stopReasons=_stopReasons - In the implementation block
@property (nonatomic,readonly) NSDate * lastMovieWriteAttemptTime;                //@synthesize lastMovieWriteAttemptTime=_lastMovieWriteAttemptTime - In the implementation block
@property (nonatomic,readonly) long long movieWriteAttemptsCount;                 //@synthesize movieWriteAttemptsCount=_movieWriteAttemptsCount - In the implementation block
@property (assign,nonatomic) long long failedStateReadAttemptsCount;              //@synthesize failedStateReadAttemptsCount=_failedStateReadAttemptsCount - In the implementation block
+(id)secondaryStateWithContentsOfFile:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)stopTime;
-(void)setStopTime:(NSDate *)arg1 ;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(void)setStopReasons:(long long)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(void)notifyWillAttemptToWriteMovie;
-(void)setFailedStateReadAttemptsCount:(long long)arg1 ;
-(long long)failedStateReadAttemptsCount;
-(NSDate *)lastMovieWriteAttemptTime;
-(long long)movieWriteAttemptsCount;
@end

