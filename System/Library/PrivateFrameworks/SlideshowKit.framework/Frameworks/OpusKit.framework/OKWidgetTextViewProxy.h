/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetTextViewProxyExports.h>

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {

	UIEdgeInsets _textEdgeInsets;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)layoutSettingsKeys;
-(CGRect)textViewFrame;
-(UIEdgeInsets)textEdgeInsets;
-(UIEdgeInsets)settingTextEdgeInsets;
-(void)setSettingTextEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithWidget:(id)arg1 ;
@end

