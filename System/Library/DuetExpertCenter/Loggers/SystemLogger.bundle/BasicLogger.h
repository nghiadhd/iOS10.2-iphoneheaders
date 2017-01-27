/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Loggers/SystemLogger.bundle/SystemLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECFeedbackLogger.h>

@class PETScalarEventTracker, NSString;

@interface BasicLogger : NSObject <_DECFeedbackLogger> {

	PETScalarEventTracker* _mmAppSuggestion;
	PETScalarEventTracker* _heroAppSuggestion;

}

@property (nonatomic,retain) PETScalarEventTracker * mmAppSuggestion;                //@synthesize mmAppSuggestion=_mmAppSuggestion - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * heroAppSuggestion;              //@synthesize heroAppSuggestion=_heroAppSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PETScalarEventTracker *)heroAppSuggestion;
-(void)setMmAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(void)setHeroAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)mmAppSuggestion;
-(id)init;
-(void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
@end
