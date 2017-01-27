/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@interface PGCommonTitleUtility : NSObject
+(id)titleWithLineBreakForTitle:(id)arg1 ;
+(id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(BOOL)arg3 ;
+(id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(/*^block*/id)arg3 reverse:(BOOL)arg4 ;
+(id)_locationLabelForDimension:(unsigned long long)arg1 ;
+(id)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(NSRange)arg2 searchForward:(BOOL)arg3 ;
+(id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2 ;
+(id)addressNodesFromMomentNodes:(id)arg1 ;
+(BOOL)isLargeCountryForAddressNode:(id)arg1 ;
+(BOOL)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2 ;
+(id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(/*^block*/id)arg3 ;
+(BOOL)containsCelebrationForDateNodes:(id)arg1 holidayName:(id*)arg2 ;
+(id)holidayNameForDateNodes:(id)arg1 ;
+(id)bestAddressNodeForMomentNodes:(id)arg1 ;
+(void)startAndEndDateFromDateNodes:(id)arg1 result:(/*^block*/id)arg2 ;
+(id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2 ;
+(id)_sortedAreaNodesByWeightFromAreaNodes:(id)arg1 ;
+(unsigned long long)dimensionForLabel:(id)arg1 ;
@end

