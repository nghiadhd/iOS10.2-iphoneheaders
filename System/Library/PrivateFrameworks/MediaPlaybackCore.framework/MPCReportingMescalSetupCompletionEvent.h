/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCReportingEvent.h>

@class NSError, NSString;

@interface MPCReportingMescalSetupCompletionEvent : NSObject <MPCReportingEvent> {

	NSError* _error;
	double _setupDuration;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double setupDuration;                  //@synthesize setupDuration=_setupDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(double)setupDuration;
-(void)setSetupDuration:(double)arg1 ;
@end

