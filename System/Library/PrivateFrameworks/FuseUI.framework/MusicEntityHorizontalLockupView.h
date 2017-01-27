/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@protocol MusicEntityHorizontalLockupViewDelegate;
@class MPUHalfTintedTransportButton, UIImageView, UIButton, NSString, MusicEntityViewContentDescriptor;

@interface MusicEntityHorizontalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {

	MPUHalfTintedTransportButton* _addButton;
	UIImageView* _availableOfflineBadgeImageView;
	UIButton* _checkmarkButton;
	UIImageView* _explicitBadgeImageView;
	BOOL _isAvailableOffline;
	BOOL _isContainedWithinSplitViewPrimary;
	SCD_Struct_Mu4 _delegateRespondsToSelector;
	id<MusicEntityHorizontalLockupViewDelegate> _delegate;
	UIButton* _contextualActionsButton;
	double _textContentLeadingInset;

}

@property (assign,nonatomic,__weak) id<MusicEntityHorizontalLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize; 
@property (nonatomic,readonly) UIButton * contextualActionsButton;                                     //@synthesize contextualActionsButton=_contextualActionsButton - In the implementation block
@property (nonatomic,readonly) double textContentLeadingInset;                                         //@synthesize textContentLeadingInset=_textContentLeadingInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 artworkSize:(CGSize)arg4 ;
+(double)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 textDescriptorHeightAdditions:(double)arg4 artworkSize:(CGSize)arg5 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicEntityHorizontalLockupViewDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicEntityHorizontalLockupViewDelegate>)delegate;
-(BOOL)_shouldShowPlayButton;
-(void)music_inheritedLayoutInsetsDidChange;
-(CGSize)artworkSize;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(UIButton *)contextualActionsButton;
-(double)textContentLeadingInset;
-(id)_addButton;
-(BOOL)_shouldLayoutAsEditing;
-(void)_addButtonTouchUpInside:(id)arg1 ;
-(void)_addButtonTouchDownInside:(id)arg1 ;
-(void)_addButtonTouchEntered:(id)arg1 ;
-(void)_addButtonTouchExited:(id)arg1 ;
-(void)_contextualActionsButtonTapped:(id)arg1 ;
@end

