/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProvider, CDPAuthProvider;
@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;

@interface CDPController : NSObject {

	CDPContext* _context;
	id<CDPStateUIProvider> _uiProvider;
	id<CDPAuthProvider> _authProvider;
	CDPDaemonConnection* _daemonConn;
	CDPStateUIProviderProxy* _uiProviderProxy;

}

@property (nonatomic,retain) CDPDaemonConnection * daemonConn;                       //@synthesize daemonConn=_daemonConn - In the implementation block
@property (nonatomic,retain) CDPStateUIProviderProxy * uiProviderProxy;              //@synthesize uiProviderProxy=_uiProviderProxy - In the implementation block
@property (nonatomic,readonly) CDPContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;                      //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPAuthProvider> authProvider;                       //@synthesize authProvider=_authProvider - In the implementation block
-(id)init;
-(void)invalidate;
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setAuthProvider:(id<CDPAuthProvider>)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(CDPDaemonConnection *)daemonConn;
-(CDPStateUIProviderProxy *)uiProviderProxy;
-(id<CDPAuthProvider>)authProvider;
-(void)setDaemonConn:(CDPDaemonConnection *)arg1 ;
-(void)setUiProviderProxy:(CDPStateUIProviderProxy *)arg1 ;
-(id<CDPStateUIProvider>)uiProvider;
@end

