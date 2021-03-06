/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView, SiriUIKeyline, NSString, SiriMoviesShowtimeListView;

@interface SiriMoviesChevronButton : UIButton {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _accessoryLabel;
	UIImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	double _buttonWidth;
	BOOL _hasChevron;
	double _rightInset;
	NSString* _primaryString;
	NSString* _secondaryString;
	SiriMoviesShowtimeListView* _showtimeListView;
	NSString* _accessoryString;
	long long _keylineType;

}

@property (assign,nonatomic) BOOL hasChevron;                                            //@synthesize hasChevron=_hasChevron - In the implementation block
@property (assign,nonatomic) double rightInset;                                          //@synthesize rightInset=_rightInset - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                   //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                 //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) SiriMoviesShowtimeListView * showtimeListView;              //@synthesize showtimeListView=_showtimeListView - In the implementation block
@property (nonatomic,retain) NSString * accessoryString;                                 //@synthesize accessoryString=_accessoryString - In the implementation block
@property (assign,nonatomic) long long keylineType;                                      //@synthesize keylineType=_keylineType - In the implementation block
+(double)buttonHeight;
-(SiriMoviesShowtimeListView *)showtimeListView;
-(double)_RightLabelMargin;
-(void)setAccessoryString:(NSString *)arg1 ;
-(NSString *)accessoryString;
-(void)setShowtimeListView:(SiriMoviesShowtimeListView *)arg1 ;
-(double)_chevronYOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(BOOL)arg1 ;
-(long long)keylineType;
-(BOOL)hasChevron;
-(double)rightInset;
-(void)setRightInset:(double)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)primaryString;
-(NSString *)secondaryString;
@end

