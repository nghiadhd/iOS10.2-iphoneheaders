/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {

	BOOL _deferredEnabled;
	CGRect _deferredFrame;
	NSMutableDictionary* _deferredImages;
	NSMutableDictionary* _deferredTitles;
	BOOL _isDeferringInterfaceUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)dealloc;
-(CGRect)frame;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_saveImagesAsDeferred;
-(void)_saveTitlesAsDeferred;
@end

