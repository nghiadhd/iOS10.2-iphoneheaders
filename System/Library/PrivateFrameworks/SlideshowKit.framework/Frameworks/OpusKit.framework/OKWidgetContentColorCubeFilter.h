/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorCubeFilter.h>

@class NSNumber, UIColor, NSData;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter> {

	NSNumber* _inputMinHueAngle;
	NSNumber* _inputMaxHueAngle;
	UIColor* _inputReplaceColor;
	NSData* _cubeData;

}

@property (nonatomic,retain) NSNumber * inputMinHueAngle;              //@synthesize inputMinHueAngle=_inputMinHueAngle - In the implementation block
@property (nonatomic,retain) NSNumber * inputMaxHueAngle;              //@synthesize inputMaxHueAngle=_inputMaxHueAngle - In the implementation block
@property (nonatomic,retain) UIColor * inputReplaceColor;              //@synthesize inputReplaceColor=_inputReplaceColor - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithMinHueAngle:(id)arg1 inputMaxHueAngle:(id)arg2 inputReplaceColor:(id)arg3 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)createCubeWithMinHueAngle:(double)arg1 maxHueAngle:(double)arg2 ;
-(void)setInputMinHueAngle:(NSNumber *)arg1 ;
-(void)setInputMaxHueAngle:(NSNumber *)arg1 ;
-(void)setInputReplaceColor:(UIColor *)arg1 ;
-(void)rgbToHSV:(float*)arg1 hsv:(float*)arg2 ;
-(void)setSettingInputReplaceColor:(id)arg1 ;
-(void)setSettingInputMinHueAngle:(id)arg1 ;
-(void)setSettingInputMaxHueAngle:(id)arg1 ;
-(NSNumber *)inputMinHueAngle;
-(NSNumber *)inputMaxHueAngle;
-(UIColor *)inputReplaceColor;
@end

