/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface PGCurationCache : CLSDBCache
+(id)defaultCache;
-(id)dataModelName;
-(BOOL)isMomentLocalIdentifierInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(void)invalidateCacheForMomentIdentifier:(id)arg1 ;
-(void)invalidateCacheForMomentIdentifiers:(id)arg1 ;
-(void)invalidateCacheForMoment:(id)arg1 ;
-(void)invalidateCacheForMoment:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 referenceAsset:(id)arg3 precision:(unsigned long long)arg4 ;
-(void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(void)setMomentInteresting:(BOOL)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(id)curatedKeyAssetForMoment:(id)arg1 referenceAsset:(id)arg2 precision:(unsigned long long)arg3 ;
-(id)curatedAssetsForMoment:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)isMomentInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(double)contentScoreForMoment:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
@end

