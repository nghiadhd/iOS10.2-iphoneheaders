/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@interface CAMShutterButtonRingView : UIView {

	BOOL _showContrastBorder;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) CAMShutterButtonSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL showContrastBorder;                //@synthesize showContrastBorder=_showContrastBorder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(BOOL)showContrastBorder;
@end

