/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray;


@protocol _UIViewPresentation <NSObject>
@property (nonatomic,__weak,readonly) UIView * view; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,retain) NSArray * subviews; 
@property (nonatomic,retain) id<_UIViewPresentation> superview; 
@required
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1;
-(void)addSubview:(id)arg1;
-(void)removeFromSuperview;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1;
-(UIView *)view;
-(id<_UIViewPresentation>)superview;
-(NSArray *)subviews;
-(void)setPosition:(CGPoint)arg1;
-(CGPoint)position;
-(void)setSubviews:(id)arg1;
-(void)setSuperview:(id)arg1;

@end

