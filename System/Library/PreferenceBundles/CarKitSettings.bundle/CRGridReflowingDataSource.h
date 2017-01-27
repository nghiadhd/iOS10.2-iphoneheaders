/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRGridPageDataSource.h>

@class NSIndexPath, NSArray;

@interface CRGridReflowingDataSource : CRGridPageDataSource

@property (nonatomic,readonly) unsigned long long numberOfPages; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfFirstAvailableSlot; 
@property (nonatomic,readonly) NSArray * currentIconOrder; 
-(id)indexPathForIcon:(id)arg1 ;
-(id)appendIcon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)currentIconOrder;
-(unsigned long long)indexOfFirstAvailableRowInSection:(unsigned long long)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(void)reflowSectionsIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)insertIcon:(id)arg1 atIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertIcon:(id)arg1 atIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_operationsForInsertingIcon:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(void)insertPlaceholderCellAtIndexPath:(id)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2 ;
-(unsigned long long)indexOfFirstAvailableSection;
-(NSIndexPath *)indexPathOfFirstAvailableSlot;
-(unsigned long long)numberOfSections;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(unsigned long long)numberOfPages;
@end

