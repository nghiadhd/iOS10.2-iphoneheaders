/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@class PFUbiquityBaselineHeuristics;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {

	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (assign) NSObject*<PFUbiquityBaselineRollOperationDelegate> delegate; 
-(id)retainedDelegate;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollOperationDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<PFUbiquityBaselineRollOperationDelegate>)delegate;
-(void)main;
@end

