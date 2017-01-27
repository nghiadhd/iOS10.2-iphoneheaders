/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMedicalIDEditorMultilineStringCell.h>

@class UIView, UIButton, NSString, UIImage;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell {

	UIView* _nameBottomSeparator;
	UIButton* _editPhotoButton;
	UIButton* _editPhotoLabelButton;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIImage * photo; 
@property (nonatomic,readonly) UIButton * editPhotoButton;                   //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,readonly) UIButton * editPhotoLabelButton;              //@synthesize editPhotoLabelButton=_editPhotoLabelButton - In the implementation block
+(BOOL)showsLabelAndValue;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setPhoto:(UIImage *)arg1 ;
-(UIButton *)editPhotoButton;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIImage *)photo;
-(UIButton *)editPhotoLabelButton;
-(void)_adjustEditPhotoButtonFontSizeIfNecessary;
@end

