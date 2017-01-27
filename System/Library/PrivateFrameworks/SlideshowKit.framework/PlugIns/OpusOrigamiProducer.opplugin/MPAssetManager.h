/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MPAssetManager : NSObject
+(id)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 ;
+(id)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 ;
+(void)releaseSharedManager;
+(void)setInhibitSharedManagerInit:(BOOL)arg1 ;
+(id)convertCGImageToBuffer:(CGImageRef)arg1 ;
+(id)sharedManager;
-(double)longitudeForAssetAtPath:(id)arg1 ;
-(double)altitudeForAssetAtPath:(id)arg1 ;
-(double)latitudeForAssetAtPath:(id)arg1 ;
-(id)keywordsForAssetAtPath:(id)arg1 ;
-(id)creationDateForAssetAtPath:(id)arg1 ;
-(unsigned long long)mediaTypeForAssetAtPath:(id)arg1 ;
-(id)regionsOfInterestForAsset:(CGImageRef)arg1 ;
-(void)cacheAttributes:(id)arg1 forPath:(id)arg2 ;
-(double)durationForAssetAtPath:(id)arg1 ;
-(id)absolutePathFromPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(id)regionsOfInterestForAssetAtPath:(id)arg1 ;
-(double)posterTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)locationHierarchyForAssetAtPath:(id)arg1 ;
@end

