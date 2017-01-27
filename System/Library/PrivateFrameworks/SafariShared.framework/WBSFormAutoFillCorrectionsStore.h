/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillCorrectionsStore <NSObject>
@required
-(void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllLocalClassificationsWithCompletionHandler:(/*^block*/id)arg1;
-(void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

