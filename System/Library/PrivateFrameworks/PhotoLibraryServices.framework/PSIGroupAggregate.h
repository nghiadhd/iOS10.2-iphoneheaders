/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _rangesMatchingTokens;
	NSMutableArray* _groups;
	NSMutableArray* _assetIdArrays;
	NSMutableArray* _primaryAssetIdArrays;
	NSMutableArray* _secondaryAssetIdArrays;
	NSMutableArray* _aggregatedGroupIds;

}

@property (readonly) NSArray * searchTokens;              //@synthesize searchTokens=_searchTokens - In the implementation block
-(void)dealloc;
-(void)pop;
-(id)initWithSearchTokens:(id)arg1 ;
-(void)postProcessGroupResults:(id)arg1 ;
-(id)newGroupResult;
-(BOOL)pushGroup:(id)arg1 secondaryPairedGroup:(id)arg2 ;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3 ;
-(CFArrayRef)_newSortedGroupIds;
-(BOOL)_verifySortedGroupIdsUnique;
-(BOOL)_prefer:(id)arg1 over:(id)arg2 ;
-(NSArray *)searchTokens;
@end
