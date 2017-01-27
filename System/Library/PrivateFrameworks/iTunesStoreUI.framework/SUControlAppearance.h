/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface SUControlAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _textAttributes;
	NSMutableDictionary* _titlePositions;

}

@property (nonatomic,readonly) long long numberOfImages; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)textAttributesForState:(unsigned long long)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTextAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)imageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_copyKeyForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)enumerateTitlePositionsUsingBlock:(/*^block*/id)arg1 ;
-(void)styleButton:(id)arg1 ;
-(void)styleBarButtonItem:(id)arg1 ;
-(long long)numberOfImages;
@end

