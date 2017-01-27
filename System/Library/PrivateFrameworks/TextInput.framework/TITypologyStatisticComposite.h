/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@class NSArray;

@interface TITypologyStatisticComposite : TITypologyStatistic {

	NSArray* _statistics;

}

@property (nonatomic,readonly) NSArray * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)statisticCompositeWithStatistics:(id)arg1 ;
-(void)visitTypologyRecord:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg1 ;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(void)visitRecordSetOriginalInput:(id)arg1 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordRefinements:(id)arg1 ;
-(void)visitRecordReplacements:(id)arg1 ;
-(void)visitRecordAcceptedCandidate:(id)arg1 ;
-(void)visitRecordCandidateResultSet:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)prepareForComputation;
-(id)aggregateReport;
-(void)finalizeComputation;
-(id)structuredReport;
-(void)visitTypologyLog:(id)arg1 ;
-(NSArray *)statistics;
@end

