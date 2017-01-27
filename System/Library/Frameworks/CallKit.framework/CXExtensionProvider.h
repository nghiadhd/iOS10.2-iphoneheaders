/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXProvider.h>
#import <libobjc.A.dylib/CXProviderExtensionVendorContextDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling> {

	CXProviderExtensionVendorContext* _extensionContext;

}

@property (nonatomic,retain) CXProviderExtensionVendorContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(CXProviderExtensionVendorContext *)extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setExtensionContext:(CXProviderExtensionVendorContext *)arg1 ;
-(void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(BOOL)arg2 ;
-(id)hostProtocolDelegate;
-(BOOL)requiresProxyingAVAudioSessionState;
@end

