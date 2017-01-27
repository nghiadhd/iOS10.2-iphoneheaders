/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface NTKSolarDiskView : UIView {

	double _horizonLine;
	UIView* _sunUpView;
	UIView* _sunDownView;

}

@property (nonatomic,retain) UIView * sunUpView;                //@synthesize sunUpView=_sunUpView - In the implementation block
@property (nonatomic,retain) UIView * sunDownView;              //@synthesize sunDownView=_sunDownView - In the implementation block
@property (assign,nonatomic) double horizonLine;                //@synthesize horizonLine=_horizonLine - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCenter:(CGPoint)arg1 ;
-(double)horizonLine;
-(UIView *)sunUpView;
-(UIView *)sunDownView;
-(void)setHorizonLine:(double)arg1 ;
-(void)setSunUpView:(UIView *)arg1 ;
-(void)setSunDownView:(UIView *)arg1 ;
@end

