/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUCellConfiguration.h>

@interface SUArrayCellConfiguration : SUCellConfiguration {

	unsigned long long _numberOfStrings;
	CGRect* _stringFrames;
	id* _strings;
	unsigned long long _numberOfImages;
	CGRect* _imageFrames;
	id* _images;
	id* _selectedImages;

}
-(void)dealloc;
-(void)reloadData;
-(unsigned long long)numberOfLabels;
-(id)stringForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(CGRect)frameForImageAtIndex:(unsigned long long)arg1 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2 ;
-(id)_accessibilityStringsArrayPointer;
-(unsigned long long)numberOfImages;
-(void)setLayoutSize:(CGSize)arg1 ;
@end

