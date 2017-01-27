/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBlurEffect.h>

@class UIColor;

@interface _UIPopoverBackgroundVisualEffect : UIBlurEffect {

	BOOL _tintColorIsTranslucent;
	UIColor* _tintColor;

}

@property (nonatomic,copy,readonly) UIColor * tintColor;                 //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) BOOL tintColorIsTranslucent;              //@synthesize tintColorIsTranslucent=_tintColorIsTranslucent - In the implementation block
+(id)effectWithStyle:(long long)arg1 tint:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(id)effectSettings;
-(BOOL)tintColorIsTranslucent;
@end

