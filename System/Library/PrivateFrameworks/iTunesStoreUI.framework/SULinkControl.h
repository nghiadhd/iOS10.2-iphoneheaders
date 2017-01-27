/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel;

@interface SULinkControl : UIControl {

	UILabel* _label;
	BOOL _shouldDrawUnderline;
	unsigned _sizeIsDirty : 1;
	long long _style;

}

@property (assign,nonatomic) BOOL shouldDrawUnderline;              //@synthesize shouldDrawUnderline=_shouldDrawUnderline - In the implementation block
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)setStyle:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateLabel;
-(void)setShouldDrawUnderline:(BOOL)arg1 ;
-(BOOL)shouldDrawUnderline;
-(id)_label;
@end

