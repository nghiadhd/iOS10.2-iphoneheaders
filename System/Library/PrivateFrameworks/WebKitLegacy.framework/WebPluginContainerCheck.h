/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebPluginContainerCheckController;
@class NSURLRequest, NSString, WebPolicyDecisionListener;

@interface WebPluginContainerCheck : NSObject {

	NSURLRequest* _request;
	NSString* _target;
	id<WebPluginContainerCheckController> _controller;
	id _resultObject;
	SEL _resultSelector;
	id _contextInfo;
	BOOL _done;
	WebPolicyDecisionListener* _listener;

}
+(id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6 ;
-(id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6 ;
-(void)_continueWithPolicy:(int)arg1 ;
-(id)_actionInformationWithURL:(id)arg1 ;
-(BOOL)_isForbiddenFileLoad;
-(void)_askPolicyDelegate;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(id)contextInfo;
@end

