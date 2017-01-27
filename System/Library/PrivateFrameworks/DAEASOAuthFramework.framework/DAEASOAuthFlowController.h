/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SL_OOPAuthFlowDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {

	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(/*^block*/id)arg2 ;
-(void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(/*^block*/id)arg2 ;
-(id)initialRedirectURL;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1 ;
-(id)authURLForUsername:(id)arg1 ;
-(id)requestForAuthURL:(id)arg1 ;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1 ;
@end

