/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIViewControllerWrapperView : UIView {

	BOOL _tightWrappingDisabled;

}

@property (assign,nonatomic) BOOL tightWrappingDisabled;              //@synthesize tightWrappingDisabled=_tightWrappingDisabled - In the implementation block
+(id)existingWrapperViewForView:(id)arg1 ;
+(id)wrapperViewForView:(id)arg1 frame:(CGRect)arg2 ;
+(id)wrapperViewForView:(id)arg1 wrapperFrame:(CGRect)arg2 viewFrame:(CGRect)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTightWrappingDisabled:(BOOL)arg1 ;
-(BOOL)tightWrappingDisabled;
-(void)unwrapView;
-(void)unwrapView:(id)arg1 ;
@end

