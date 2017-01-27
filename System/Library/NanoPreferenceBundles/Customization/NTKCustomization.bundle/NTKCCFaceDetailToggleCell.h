/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCDetailTableViewCell.h>

@protocol NTKCCFaceDetailToggleCellDelegate;
@class UISwitch;

@interface NTKCCFaceDetailToggleCell : NTKCCDetailTableViewCell {

	UISwitch* _switch;
	id<NTKCCFaceDetailToggleCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<NTKCCFaceDetailToggleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(void)_switchToggled;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<NTKCCFaceDetailToggleCellDelegate>)arg1 ;
-(double)rowHeight;
-(id<NTKCCFaceDetailToggleCellDelegate>)delegate;
-(BOOL)on;
-(void)setOn:(BOOL)arg1 ;
@end

