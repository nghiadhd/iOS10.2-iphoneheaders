/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityCollectionViewDescriptor.h>

@interface MusicLibrarySearchResultsCollectionViewDescriptor : MusicEntityCollectionViewDescriptor {

	BOOL _itemsFillRow;
	unsigned long long _numberOfItemsPerRow;
	double _itemPadding;

}

@property (assign,nonatomic) BOOL itemsFillRow;                                   //@synthesize itemsFillRow=_itemsFillRow - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsPerRow;              //@synthesize numberOfItemsPerRow=_numberOfItemsPerRow - In the implementation block
@property (assign,nonatomic) double itemPadding;                                  //@synthesize itemPadding=_itemPadding - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfItemsPerRow;
-(void)setNumberOfItemsPerRow:(unsigned long long)arg1 ;
-(void)setItemsFillRow:(BOOL)arg1 ;
-(double)itemPadding;
-(BOOL)itemsFillRow;
-(void)setItemPadding:(double)arg1 ;
@end

