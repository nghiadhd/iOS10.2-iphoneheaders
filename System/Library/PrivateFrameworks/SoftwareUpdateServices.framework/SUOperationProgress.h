/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _phase;
	float _percentComplete;
	float _normalizedPercentComplete;
	double _timeRemaining;

}

@property (nonatomic,retain) NSString * phase;                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) float normalizedPercentComplete;              //@synthesize normalizedPercentComplete=_normalizedPercentComplete - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(float)percentComplete;
-(void)setPhase:(NSString *)arg1 ;
-(NSString *)phase;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(float)normalizedPercentComplete;
-(BOOL)isDone;
-(void)setNormalizedPercentComplete:(float)arg1 ;
@end

