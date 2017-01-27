/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MusicProductDescriptionTableViewCellDelegate;
@class UILabel, UIButton, UITextView, MusicMediaDetailTintInformation, MusicProductDescription, NSString;

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate> {

	UILabel* _descriptionHeaderLabel;
	BOOL _hasValidMoreButtonSize;
	BOOL _needsForcedTextViewUpdate;
	UIButton* _moreButton;
	UITextView* _placeholderTextView;
	UITextView* _textView;
	SCD_Struct_Mu3 _delegateRespondsToSelector;
	BOOL _expanded;
	id<MusicProductDescriptionTableViewCellDelegate> _delegate;
	MusicMediaDetailTintInformation* _detailTintInformation;
	MusicProductDescription* _productDescription;
	long long _productDescriptionTextStyle;
	NSString* _productDescriptionTitle;
	long long _productDescriptionMaximumLengthForTextInput;

}

@property (assign,nonatomic,__weak) id<MusicProductDescriptionTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;                         //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                               //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription;                                    //@synthesize productDescription=_productDescription - In the implementation block
@property (assign,nonatomic) long long productDescriptionTextStyle;                                         //@synthesize productDescriptionTextStyle=_productDescriptionTextStyle - In the implementation block
@property (nonatomic,copy) NSString * productDescriptionTitle;                                              //@synthesize productDescriptionTitle=_productDescriptionTitle - In the implementation block
@property (assign,nonatomic) long long productDescriptionMaximumLengthForTextInput;                         //@synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicProductDescriptionTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MusicProductDescriptionTableViewCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(void)setProductDescriptionTextStyle:(long long)arg1 ;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
-(void)_handlePreferredContentSizeDidChangeNotification:(id)arg1 ;
-(id)_newTextView;
-(id)_placeholderAttributedText;
-(id)_loadTextAttributes;
-(void)_updateTextViewEditabilityForced:(BOOL)arg1 withEditing:(BOOL)arg2 ;
-(CGRect)_calculateContentBoundsWithBounds:(CGRect)arg1 ;
-(CGRect)_calculateHeaderLabelFrameWithinContentBounds:(CGRect)arg1 ;
-(void)_updateMoreButtonPropertiesWithTextViewSize:(CGSize)arg1 positionYDelta:(double)arg2 ;
-(void)_updatePlaceholderTextViewVisibility;
-(void)_updateTextViewWithProductDescriptionWithLayout:(BOOL)arg1 ;
-(void)_updateMaximumNumberOfLinesWithEditing:(BOOL)arg1 ;
-(void)_updateForPreferredFontChange;
-(unsigned long long)_calculateTextViewMaximumNumberOfLinesWithEditing:(BOOL)arg1 ;
-(void)_moreButtonAction:(id)arg1 ;
-(id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1 textColor:(id)arg2 ;
-(void)setProductDescriptionTitle:(NSString *)arg1 ;
-(long long)productDescriptionTextStyle;
-(NSString *)productDescriptionTitle;
-(long long)productDescriptionMaximumLengthForTextInput;
-(void)setProductDescriptionMaximumLengthForTextInput:(long long)arg1 ;
@end

