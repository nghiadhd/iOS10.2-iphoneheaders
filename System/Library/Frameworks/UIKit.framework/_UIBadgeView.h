/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSMutableDictionary, NSString, NSDictionary, UIColor;

@interface _UIBadgeView : UIView {

	UILabel* _label;
	UIImageView* _background;
	NSMutableDictionary* _mergedTextAttributes;
	NSString* _text;
	NSDictionary* _textAttributes;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;              //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)layoutSubviews;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)_updateBackground;
-(void)_setupLabelIfNecessary;
-(void)_applyTextToLabel;
@end

