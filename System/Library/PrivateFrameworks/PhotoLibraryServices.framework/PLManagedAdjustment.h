/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSString, NSDictionary, PLManagedAsset;

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (assign,nonatomic) int adjustmentType; 
@property (nonatomic,copy) NSString * filterName; 
@property (nonatomic,copy) NSDictionary * filterSettings; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)insertInPhotoLibrary:(id)arg1 ;
+(void)fixupAssetSizeFromAdjustments:(id)arg1 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 effectFilterCount:(unsigned long long*)arg3 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 withOriginalImageSize:(CGSize)arg3 effectFilterCount:(unsigned long long*)arg4 ;
+(void)convertAffineTransform:(CGAffineTransform)arg1 andCropRect:(CGRect)arg2 toStraightenAngle:(double*)arg3 andCropRect:(CGRect*)arg4 ;
+(CGRect)convertCropRect:(CGRect)arg1 fromImageSize:(CGSize)arg2 toImageSize:(CGSize)arg3 ;
+(void)convertStraightenAngle:(double)arg1 andCropRect:(CGRect)arg2 toAffineTransform:(CGAffineTransform*)arg3 andCropRect:(CGRect*)arg4 ;
-(void)setAdjustmentType:(int)arg1 ;
-(id)metadataProperties;
-(int)adjustmentType;
@end

