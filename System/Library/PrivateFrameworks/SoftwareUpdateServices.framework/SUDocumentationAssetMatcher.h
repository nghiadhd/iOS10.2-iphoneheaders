/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class ASAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {

	ASAsset* _suAsset;

}
+(id)matcherForInstalledDocumentationFromAsset:(id)arg1 ;
+(id)matcherDocumentationFromAsset:(id)arg1 ;
-(void)dealloc;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 ;
-(id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1 ;
-(id)_queryPredicateForProperties:(id)arg1 ;
@end

