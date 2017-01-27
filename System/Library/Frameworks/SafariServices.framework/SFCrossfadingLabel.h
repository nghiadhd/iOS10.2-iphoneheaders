/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class UIColor;

@interface SFCrossfadingLabel : UILabel {

	double _fromHue;
	double _fromSaturation;
	double _fromBrightness;
	UIColor* _fromColor;
	long long _mode;
	double _progress;

}

@property (nonatomic,retain) UIColor * fromColor;              //@synthesize fromColor=_fromColor - In the implementation block
@property (assign,nonatomic) long long mode;                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double progress;                  //@synthesize progress=_progress - In the implementation block
-(void)setProgress:(double)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(double)progress;
-(void)_updateCrossfade;
-(void)setFromColor:(UIColor *)arg1 ;
-(UIColor *)fromColor;
@end

