/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont;


@protocol MFModernAtomViewResembling <NSObject>
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(void)setScale:(double)arg1;
-(double)scale;
-(UIEdgeInsets)edgeInsets;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(CGPoint)baselinePoint;
-(UIFont *)titleFont;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1;
-(BOOL)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1;
-(unsigned long long)presentationOptions;
-(void)setTitleFont:(id)arg1;
-(void)setSeparatorHidden:(BOOL)arg1;
-(void)setPresentationOptions:(unsigned long long)arg1;

@end

