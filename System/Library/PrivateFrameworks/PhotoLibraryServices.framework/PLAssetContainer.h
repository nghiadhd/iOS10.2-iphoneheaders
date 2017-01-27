/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@optional
-(NSDate *)startDate;
-(NSDate *)endDate;

@required
-(NSString *)title;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(NSOrderedSet *)assets;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(id)arg1;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;

@end

