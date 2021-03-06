/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/FacebookSettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface SLFacebookRegistrationLegalFooterView : UIView <PSHeaderFooterView, UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)_webFrameForFooterWidth:(double)arg1 ;
-(id)_baseURLString;
-(id)_bodyStyle;
-(id)_linkStyle;
-(id)_completeText;
-(id)_html;
-(void)_buildWebView;
-(void)layoutSubviews;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

