/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/AXIDCRemoteControllerDelegate.h>

@protocol AXIDCControllerBrowserDelegateProtocol, AXIDCManagerSecurityDelegate;
@class AXIDCSlaveController, NSString, NSNetServiceBrowser, NSMutableArray;

@interface AXIDCManager : NSObject <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate> {

	Class _slaveClass;
	Class _remoteClass;
	id<AXIDCControllerBrowserDelegateProtocol> _delegate;
	id<AXIDCManagerSecurityDelegate> _securityDelegate;
	long long _state;
	AXIDCSlaveController* _slaveController;
	NSString* _serviceType;
	NSNetServiceBrowser* _browser;
	NSMutableArray* _remoteControllers;

}

@property (nonatomic,retain) NSString * serviceType;                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) AXIDCSlaveController * slaveController;                           //@synthesize slaveController=_slaveController - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * browser;                                    //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteControllers;                               //@synthesize remoteControllers=_remoteControllers - In the implementation block
@property (assign,nonatomic) id<AXIDCControllerBrowserDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate;                //@synthesize securityDelegate=_securityDelegate - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AXIDCControllerBrowserDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id<AXIDCControllerBrowserDelegateProtocol>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)initWithServiceType:(id)arg1 remoteClass:(Class)arg2 andSlaveClass:(Class)arg3 ;
-(Class)validateClass:(Class)arg1 isKindOfClass:(Class)arg2 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)setSlaveController:(AXIDCSlaveController *)arg1 ;
-(void)setRemoteControllers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)remoteControllers;
-(AXIDCSlaveController *)slaveController;
-(void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(/*^block*/id)arg3 ;
-(BOOL)shouldBecomeMaster;
-(void)clearControllers;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteControllerForHostname:(id)arg1 ;
-(void)controller:(id)arg1 didReceiveData:(id)arg2 ;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)controllerDidFinishConnecting:(id)arg1 ;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2 ;
-(id<AXIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id<AXIDCManagerSecurityDelegate>)arg1 ;
-(id)availableControllers;
-(id)availableRemoteControllers;
-(void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)becomeMaster;
-(void)transitionToSlaveWithCompletion:(/*^block*/id)arg1 ;
-(NSNetServiceBrowser *)browser;
-(void)setBrowser:(NSNetServiceBrowser *)arg1 ;
@end

