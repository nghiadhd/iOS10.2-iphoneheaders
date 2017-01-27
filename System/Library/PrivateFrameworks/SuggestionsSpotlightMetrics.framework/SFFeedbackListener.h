/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFeedbackListener <NSObject>
@optional
-(void)searchViewDidAppear:(id)arg1;
-(void)searchViewDidDisappear:(id)arg1;
-(void)cardViewDidDisappear:(id)arg1;
-(void)didStartSearch:(id)arg1;
-(void)didEndSearch:(id)arg1;
-(void)didRankSections:(id)arg1;
-(void)didEngageResult:(id)arg1;
-(void)didEngageSuggestion:(id)arg1;
-(void)didEngageCardSection:(id)arg1;
-(void)didErrorOccur:(id)arg1;
-(void)sendCustomFeedback:(id)arg1;
-(void)resultsDidBecomeVisible:(id)arg1;
-(void)suggestionsDidBecomeVisible:(id)arg1;
-(void)didReceiveResultsAfterTimeout:(id)arg1;
-(void)didAppendLateSections:(id)arg1;
-(void)didClearInput:(id)arg1;
-(void)didEngageSection:(id)arg1;
-(void)sectionHeaderDidBecomeVisible:(id)arg1;
-(void)didGoToSite:(id)arg1;

@end

