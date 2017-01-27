/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconView.h>

@interface SBStarkIconView : SBIconView {

	BOOL _alwaysAppearsFocused;

}

@property (assign,nonatomic) BOOL alwaysAppearsFocused;              //@synthesize alwaysAppearsFocused=_alwaysAppearsFocused - In the implementation block
+(CGSize)defaultIconSize;
+(CGSize)maxLabelSize;
+(UIEdgeInsets)minimumInterIconSpacing;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(double)_labelHeight;
+(int)_defaultIconFormat;
+(BOOL)canShowLabelAccessoryView;
+(UIEdgeInsets)iconImagePaddingInsets;
-(void)setAlwaysAppearsFocused:(BOOL)arg1 ;
-(CGRect)_frameForLabel;
-(id)_labelImageParameters;
-(BOOL)alwaysAppearsFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
@end

