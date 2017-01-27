/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface _UITableViewCellBadge : UIView {

	BOOL _isSelected;
	NSString* _text;
	CGSize _textSize;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize isSelected=_isSelected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_sizeToFit;
-(void)setIsSelected:(BOOL)arg1 ;
@end

