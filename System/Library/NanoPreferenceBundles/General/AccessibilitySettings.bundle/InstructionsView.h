/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UILabel, NSMutableArray;

@interface InstructionsView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	CGSize _totalSize;
	UILabel* _headerLabel;
	NSMutableArray* _contentLabels;
	double _backgroundInset;
	double backgroundInset;

}

@property (assign,nonatomic) double backgroundInset; 
-(void)_initializeContent;
-(void)layoutSubviews;
-(double)backgroundInset;
-(void)setBackgroundInset:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

