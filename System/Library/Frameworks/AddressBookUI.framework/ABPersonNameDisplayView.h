/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPasteboardControl.h>

@class ABNamePropertyGroup, NSString, UILabel, UIFont, ABStyleProvider, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl {

	ABNamePropertyGroup* _namePropertyGroup;
	int _primaryProperty;
	NSString* _primaryPropertyFormattingCountryCode;
	double _minimumHeight;
	BOOL _alignOnBottom;
	UILabel* _headlineLabel;
	UILabel* _tagLineLabel;
	UILabel* _messageLabel;
	UILabel* _messageDetailLabel;
	UIFont* _messageFont;
	UIFont* _messageDetailFont;
	ABStyleProvider* _styleProvider;
	NSString* _customHeadline;
	NSString* _customTagLine;
	NSString* _customMessage;
	NSString* _customMessageDetail;
	UIView* _customMessageView;

}

@property (nonatomic,retain) ABNamePropertyGroup * namePropertyGroup;                    //@synthesize namePropertyGroup=_namePropertyGroup - In the implementation block
@property (assign,nonatomic) int primaryProperty;                                        //@synthesize primaryProperty=_primaryProperty - In the implementation block
@property (nonatomic,copy) NSString * primaryPropertyFormattingCountryCode;              //@synthesize primaryPropertyFormattingCountryCode=_primaryPropertyFormattingCountryCode - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL alignOnBottom;                                         //@synthesize alignOnBottom=_alignOnBottom - In the implementation block
@property (nonatomic,copy) NSString * headline;                                          //@synthesize customHeadline=_customHeadline - In the implementation block
@property (nonatomic,copy) NSString * tagLine;                                           //@synthesize customTagLine=_customTagLine - In the implementation block
@property (nonatomic,copy) NSString * message;                                           //@synthesize customMessage=_customMessage - In the implementation block
@property (nonatomic,retain) UIFont * messageFont;                                       //@synthesize messageFont=_messageFont - In the implementation block
@property (nonatomic,copy) NSString * messageDetail;                                     //@synthesize customMessageDetail=_customMessageDetail - In the implementation block
@property (nonatomic,retain) UIFont * messageDetailFont;                                 //@synthesize messageDetailFont=_messageDetailFont - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIView * customMessageView;                                 //@synthesize customMessageView=_customMessageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(int)primaryProperty;
-(BOOL)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)arg1 ;
-(void)abMenuControllerWillHide;
-(void)_updateHeadlineText;
-(void)_updateTagLineText;
-(void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2 ;
-(void)_setFont:(id)arg1 isDetail:(BOOL)arg2 ;
-(id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned long long)arg2 ;
-(void)initializeHeadlineAndTaglineIfNeeded;
-(double)_heightForLabelsForWidth:(double)arg1 ;
-(CGSize)multilineLabel:(id)arg1 sizeThatFits:(CGSize)arg2 ;
-(void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1 ;
-(id)_copyPrimaryValue;
-(id)_copyTagLine;
-(void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3 ;
-(void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setNamePropertyGroup:(ABNamePropertyGroup *)arg1 ;
-(void)setTagLine:(NSString *)arg1 ;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(void)reloadNameDataAnimated:(BOOL)arg1 ;
-(void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(ABNamePropertyGroup *)namePropertyGroup;
-(NSString *)primaryPropertyFormattingCountryCode;
-(void)setPrimaryPropertyFormattingCountryCode:(NSString *)arg1 ;
-(BOOL)alignOnBottom;
-(void)setAlignOnBottom:(BOOL)arg1 ;
-(NSString *)tagLine;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(double)minimumHeight;
-(void)setPrimaryProperty:(int)arg1 ;
-(void)setMinimumHeight:(double)arg1 ;
-(NSString *)headline;
-(void)setHeadline:(NSString *)arg1 ;
-(UIFont *)messageFont;
@end

