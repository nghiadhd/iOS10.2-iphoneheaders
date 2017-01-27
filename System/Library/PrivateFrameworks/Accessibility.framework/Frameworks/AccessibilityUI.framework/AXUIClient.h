/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIMessageSenderDelegate.h>

@protocol AXUIClientDelegate;
@class NSString, AXUIMessageSender, AXUIClientConnection, NSDictionary;

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate> {

	BOOL _registeredWithServer;
	id<AXUIClientDelegate> _delegate;
	NSString* _serviceBundleName;
	AXUIMessageSender* _messageSender;
	AXUIClientConnection* _clientConnection;
	NSString* _clientIdentifier;
	NSDictionary* _initializationMessage;

}

@property (nonatomic,copy) NSString * serviceBundleName;                                           //@synthesize serviceBundleName=_serviceBundleName - In the implementation block
@property (nonatomic,retain) AXUIMessageSender * messageSender;                                    //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,retain) AXUIClientConnection * clientConnection;                              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,getter=isRegisteredWithServer,nonatomic) BOOL registeredWithServer;              //@synthesize registeredWithServer=_registeredWithServer - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * initializationMessage;                                   //@synthesize initializationMessage=_initializationMessage - In the implementation block
@property (assign,nonatomic) id<AXUIClientDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AXUIClientDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<AXUIClientDelegate>)delegate;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)clientIdentifier;
-(void)setServiceBundleName:(NSString *)arg1 ;
-(BOOL)isRegisteredWithServer;
-(void)setRegisteredWithServer:(BOOL)arg1 ;
-(void)setInitializationMessage:(NSDictionary *)arg1 ;
-(void)_requestInitializationMessageFromDelegateIfNeeded;
-(NSString *)serviceBundleName;
-(NSDictionary *)initializationMessage;
-(id)initWithIdentifier:(id)arg1 serviceBundleName:(id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3 ;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2 ;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setMessageSender:(AXUIMessageSender *)arg1 ;
-(AXUIMessageSender *)messageSender;
-(AXUIClientConnection *)clientConnection;
-(void)setClientConnection:(AXUIClientConnection *)arg1 ;
@end

