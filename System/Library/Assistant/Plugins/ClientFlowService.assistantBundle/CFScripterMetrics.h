/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CFScripterMetrics : NSObject <NSSecureCoding> {

	double _jsContextCreatedInWarmup;
	double _jsContextSetupTime;
	double _jsEvaluationTime;
	double _jsExecutionTime;
	double _scripterExecutionStartTime;
	long long _scriptLoadType;

}

@property (assign,nonatomic) double jsContextCreatedInWarmup;                //@synthesize jsContextCreatedInWarmup=_jsContextCreatedInWarmup - In the implementation block
@property (assign,nonatomic) double jsContextSetupTime;                      //@synthesize jsContextSetupTime=_jsContextSetupTime - In the implementation block
@property (assign,nonatomic) double jsEvaluationTime;                        //@synthesize jsEvaluationTime=_jsEvaluationTime - In the implementation block
@property (assign,nonatomic) double jsExecutionTime;                         //@synthesize jsExecutionTime=_jsExecutionTime - In the implementation block
@property (assign,nonatomic) double scripterExecutionStartTime;              //@synthesize scripterExecutionStartTime=_scripterExecutionStartTime - In the implementation block
@property (assign,nonatomic) long long scriptLoadType;                       //@synthesize scriptLoadType=_scriptLoadType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScriptLoadType:(long long)arg1 ;
-(id)timingsInfoForCommand:(id)arg1 executionStart:(double)arg2 ;
-(long long)scriptLoadType;
-(double)jsContextCreatedInWarmup;
-(void)setJsExecutionTime:(double)arg1 ;
-(void)setJsEvaluationTime:(double)arg1 ;
-(id)useCaseStringForCommand:(id)arg1 ;
-(void)setJsContextCreatedInWarmup:(double)arg1 ;
-(double)jsContextSetupTime;
-(void)setJsContextSetupTime:(double)arg1 ;
-(double)jsEvaluationTime;
-(double)jsExecutionTime;
-(double)scripterExecutionStartTime;
-(void)setScripterExecutionStartTime:(double)arg1 ;
@end

