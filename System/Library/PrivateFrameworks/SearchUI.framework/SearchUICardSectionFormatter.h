/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont;

@interface SearchUICardSectionFormatter : NSObject {

	BOOL _primaryTextIsVibrant;
	BOOL _secondaryTextIsVibrant;
	unsigned long long _style;
	double _imageYInset;
	double _imageXInset;
	double _primaryTextLeadingInset;
	double _secondaryTextLeadingInset;
	double _primaryTextBaselineFromBottom;
	double _primaryTextBaselineFromTop;
	double _secondaryTextBaselineFromBottom;
	double _secondaryTextBaselineFromTop;
	UIFont* _primaryFont;
	UIFont* _secondaryFont;

}

@property (assign,nonatomic) unsigned long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double imageYInset;                                  //@synthesize imageYInset=_imageYInset - In the implementation block
@property (assign,nonatomic) double imageXInset;                                  //@synthesize imageXInset=_imageXInset - In the implementation block
@property (assign,nonatomic) double primaryTextLeadingInset;                      //@synthesize primaryTextLeadingInset=_primaryTextLeadingInset - In the implementation block
@property (assign,nonatomic) double secondaryTextLeadingInset;                    //@synthesize secondaryTextLeadingInset=_secondaryTextLeadingInset - In the implementation block
@property (assign,nonatomic) double primaryTextBaselineFromBottom;                //@synthesize primaryTextBaselineFromBottom=_primaryTextBaselineFromBottom - In the implementation block
@property (assign,nonatomic) double primaryTextBaselineFromTop;                   //@synthesize primaryTextBaselineFromTop=_primaryTextBaselineFromTop - In the implementation block
@property (assign,nonatomic) double secondaryTextBaselineFromBottom;              //@synthesize secondaryTextBaselineFromBottom=_secondaryTextBaselineFromBottom - In the implementation block
@property (assign,nonatomic) double secondaryTextBaselineFromTop;                 //@synthesize secondaryTextBaselineFromTop=_secondaryTextBaselineFromTop - In the implementation block
@property (nonatomic,retain) UIFont * primaryFont;                                //@synthesize primaryFont=_primaryFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryFont;                              //@synthesize secondaryFont=_secondaryFont - In the implementation block
@property (assign,nonatomic) BOOL primaryTextIsVibrant;                           //@synthesize primaryTextIsVibrant=_primaryTextIsVibrant - In the implementation block
@property (assign,nonatomic) BOOL secondaryTextIsVibrant;                         //@synthesize secondaryTextIsVibrant=_secondaryTextIsVibrant - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithRowCardSectionType:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(void)setImageYInset:(double)arg1 ;
-(void)setPrimaryTextLeadingInset:(double)arg1 ;
-(void)setSecondaryTextLeadingInset:(double)arg1 ;
-(void)setPrimaryTextBaselineFromTop:(double)arg1 ;
-(void)setPrimaryTextBaselineFromBottom:(double)arg1 ;
-(void)setSecondaryTextIsVibrant:(BOOL)arg1 ;
-(void)setPrimaryTextIsVibrant:(BOOL)arg1 ;
-(id)initWithRowCardSection:(id)arg1 style:(unsigned long long)arg2 ;
-(double)imageYInset;
-(double)imageXInset;
-(void)setImageXInset:(double)arg1 ;
-(double)primaryTextLeadingInset;
-(double)secondaryTextLeadingInset;
-(double)primaryTextBaselineFromBottom;
-(double)primaryTextBaselineFromTop;
-(double)secondaryTextBaselineFromBottom;
-(void)setSecondaryTextBaselineFromBottom:(double)arg1 ;
-(double)secondaryTextBaselineFromTop;
-(void)setSecondaryTextBaselineFromTop:(double)arg1 ;
-(BOOL)primaryTextIsVibrant;
-(BOOL)secondaryTextIsVibrant;
-(UIFont *)primaryFont;
-(void)setPrimaryFont:(UIFont *)arg1 ;
-(UIFont *)secondaryFont;
-(void)setSecondaryFont:(UIFont *)arg1 ;
@end

