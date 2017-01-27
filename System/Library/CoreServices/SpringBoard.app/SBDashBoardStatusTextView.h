/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, SBUILegibilityLabel, NSString, NSArray;

@interface SBDashBoardStatusTextView : UIView <SBUILegibility> {

	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	SBUILegibilityLabel* _internalLegalTextLabel;
	SBUILegibilityLabel* _deviceInformationLabel;
	SBUILegibilityLabel* _supervisionLabel;
	unsigned long long _transactionCount;
	NSString* _internalLegalText;
	NSString* _supervisionText;
	NSArray* _deviceInformationText;

}

@property (nonatomic,copy) NSString * internalLegalText;                              //@synthesize internalLegalText=_internalLegalText - In the implementation block
@property (nonatomic,copy) NSString * supervisionText;                                //@synthesize supervisionText=_supervisionText - In the implementation block
@property (nonatomic,copy) NSArray * deviceInformationText;                           //@synthesize deviceInformationText=_deviceInformationText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
-(void)updateTextsWithBlock:(/*^block*/id)arg1 ;
-(void)setDeviceInformationText:(NSArray *)arg1 ;
-(void)setSupervisionText:(NSString *)arg1 ;
-(void)setInternalLegalText:(NSString *)arg1 ;
-(void)_updateLegibilityStrength;
-(void)_updateTextViewsIfNecessary;
-(double)_spacingBetweenNonLegalLabels;
-(void)_updateTextViews;
-(void)_updateInternalLegalLabel;
-(void)_updateSupervisionLabel;
-(void)_updateDeviceInformationLabel;
-(double)_nonLegalLabelFontLeading;
-(double)_nonLegalTextParagraphSpacing;
-(double)_lineHeightOfNonLegalLabels;
-(NSString *)internalLegalText;
-(NSString *)supervisionText;
-(NSArray *)deviceInformationText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_font;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1 ;
@end

