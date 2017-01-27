/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSExtensionContextHosting.h>

@protocol PKPlugIn, OS_dispatch_queue;
@class NSString, NSDictionary, NSBundle, NSMutableDictionary, NSSet, BKSProcessAssertion, NSUUID, NSObject, NSIndexSet, NSArray;

@interface NSExtension : NSObject <_NSExtensionContextHosting> {

	BOOL _observingHostAppStateChanges;
	NSString* _identifier;
	NSString* _version;
	NSDictionary* _attributes;
	NSDictionary* _infoDictionary;
	NSString* _extensionPointIdentifier;
	/*^block*/id _requestCompletionBlock;
	/*^block*/id _requestCancellationBlock;
	/*^block*/id _requestInterruptionBlock;
	id __stashedPlugInConnection;
	id<PKPlugIn> __plugIn;
	NSBundle* __extensionBundle;
	/*^block*/id __requestPostCompletionBlock;
	/*^block*/id __requestPostCompletionBlockWithItems;
	NSMutableDictionary* __extensionExpirationIdentifiers;
	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	NSSet* __allowedErrorClasses;
	BKSProcessAssertion* __extensionProcessAssertion;
	long long __assertionRefCount;
	NSUUID* _connectionUUID;
	NSObject*<OS_dispatch_queue> __safePluginQueue;

}

@property (nonatomic,readonly) NSIndexSet * pu_supportedMediaTypes; 
@property (getter=_isMarkedNew,nonatomic,readonly) BOOL _markedNew; 
@property (retain) id _stashedPlugInConnection;                                                                                                              //@synthesize _stashedPlugInConnection=__stashedPlugInConnection - In the implementation block
@property (setter=_setPlugIn:,nonatomic,retain) id<PKPlugIn> _plugIn;                                                                                        //@synthesize _plugIn=__plugIn - In the implementation block
@property (setter=_setExtensionBundle:,nonatomic,retain) NSBundle * _extensionBundle;                                                                        //@synthesize _extensionBundle=__extensionBundle - In the implementation block
@property (nonatomic,copy) id _requestPostCompletionBlock;                                                                                                   //@synthesize _requestPostCompletionBlock=__requestPostCompletionBlock - In the implementation block
@property (nonatomic,copy) id _requestPostCompletionBlockWithItems;                                                                                          //@synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems - In the implementation block
@property (setter=_setExtensionExpirationsIdentifiers:,nonatomic,retain) NSMutableDictionary * _extensionExpirationIdentifiers;                              //@synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers - In the implementation block
@property (setter=_setExtensionServiceConnections:,nonatomic,retain) NSMutableDictionary * _extensionServiceConnections;                                     //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,nonatomic,retain) NSMutableDictionary * _extensionContexts;                                                         //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionState:,getter=_extensionState,nonatomic,copy) NSDictionary * _extensionState; 
@property (setter=_setAllowedErrorClasses:,nonatomic,copy) NSSet * _allowedErrorClasses;                                                                     //@synthesize _allowedErrorClasses=__allowedErrorClasses - In the implementation block
@property (setter=_setExtensionProcessAssertion:,nonatomic,retain) BKSProcessAssertion * _extensionProcessAssertion;                                         //@synthesize _extensionProcessAssertion=__extensionProcessAssertion - In the implementation block
@property (assign,setter=_setAssertionRefCount:,nonatomic) long long _assertionRefCount;                                                                     //@synthesize _assertionRefCount=__assertionRefCount - In the implementation block
@property (assign,setter=_setObservingHostAppStateChanges:,getter=_isObservingHostAppStateChanges,nonatomic) BOOL observingHostAppStateChanges;              //@synthesize observingHostAppStateChanges=_observingHostAppStateChanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * version;                                                                                                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * infoDictionary;                                                                                                    //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,copy) NSString * extensionPointIdentifier;                                                                                              //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSUUID * connectionUUID;                                                                                                          //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> _safePluginQueue;                                                                                  //@synthesize _safePluginQueue=__safePluginQueue - In the implementation block
@property (nonatomic,readonly) BOOL optedIn; 
@property (nonatomic,copy) id requestCompletionBlock;                                                                                                        //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (nonatomic,copy) id requestCancellationBlock;                                                                                                      //@synthesize requestCancellationBlock=_requestCancellationBlock - In the implementation block
@property (nonatomic,copy) id requestInterruptionBlock;                                                                                                      //@synthesize requestInterruptionBlock=_requestInterruptionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1 ;
+(id)_intents_extensionMatchingAttributesForIntents:(id)arg1 ;
+(void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)appAllowedToTalkToSiri:(id)arg1 ;
+(id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3 ;
+(void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(/*^block*/id)arg2 ;
+(void)_intents_matchExtensionsForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_intents_findAppsWithAnIntentsServiceExtension:(/*^block*/id)arg1 ;
+(void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(/*^block*/id)arg1 ;
+(void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(/*^block*/id)arg1 ;
+(void)initializeFiltering;
+(id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2 ;
+(BOOL)_shouldLogExtensionDiscovery;
+(BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(id)predicateForActivationRule:(id)arg1 ;
+(void)initialize;
+(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(void)endMatchingExtensions:(id)arg1 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)extensionsWithMatchingAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)pu_supportsMediaType:(unsigned long long)arg1 ;
-(NSIndexSet *)pu_supportedMediaTypes;
-(BOOL)nc_hasExplicitUserElectionState;
-(id)nc_description;
-(id)nc_extensionContainerBundleIdentifier;
-(id)nc_extensionContainerBundleProxy;
-(BOOL)_intents_extensionSupportsAtLeastOneSiriIntent;
-(void)instantiateViewControllerWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(id)__UIKit_upcall_icons;
-(NSSet *)_allowedErrorClasses;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)_extensionState;
-(void)_setExtensionState:(id)arg1 ;
-(BOOL)_isMarkedNew;
-(void)_didShowExtensionManagementInterface;
-(void)_didShowNewExtensionIndicator;
-(void)_resetExtensionState;
-(id)_initWithPKPlugin:(id)arg1 ;
-(BOOL)_wantsProcessPerRequest;
-(id)_bareExtensionServiceConnection;
-(void)_didCreateExtensionContext:(id)arg1 ;
-(id)requestInterruptionBlock;
-(NSObject*<OS_dispatch_queue>)_safePluginQueue;
-(void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_requestPostCompletionBlock;
-(void)_hostWillEnterForegroundNote:(id)arg1 ;
-(void)_hostDidEnterBackgroundNote:(id)arg1 ;
-(void)_hostWillResignActiveNote:(id)arg1 ;
-(void)_hostDidBecomeActiveNote:(id)arg1 ;
-(id)requestCompletionBlock;
-(id)_requestPostCompletionBlockWithItems;
-(id)requestCancellationBlock;
-(id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2 ;
-(int)_plugInProcessIdentifier;
-(void)set_stashedPlugInConnection:(id)arg1 ;
-(void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(id)_stashedPlugInConnection;
-(BOOL)_isSystemExtension;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)setExtensionPointIdentifier:(NSString *)arg1 ;
-(void)_setExtensionBundle:(id)arg1 ;
-(NSMutableDictionary *)_extensionExpirationIdentifiers;
-(void)_setExtensionExpirationsIdentifiers:(id)arg1 ;
-(void)_setAllowedErrorClasses:(id)arg1 ;
-(BKSProcessAssertion *)_extensionProcessAssertion;
-(void)_setExtensionProcessAssertion:(id)arg1 ;
-(long long)_assertionRefCount;
-(void)_setAssertionRefCount:(long long)arg1 ;
-(BOOL)_isObservingHostAppStateChanges;
-(void)_setObservingHostAppStateChanges:(BOOL)arg1 ;
-(NSUUID *)connectionUUID;
-(void)setConnectionUUID:(NSUUID *)arg1 ;
-(void)set_safePluginQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDictionary *)infoDictionary;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSArray *)icons;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)_setPlugIn:(id)arg1 ;
-(id<PKPlugIn>)_plugIn;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(BOOL)_isPhotoServiceAccessGranted;
-(id)_extensionContextForUUID:(id)arg1 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSBundle *)_extensionBundle;
-(BOOL)optedIn;
-(BOOL)attemptOptIn:(id*)arg1 ;
-(BOOL)attemptOptOut:(id*)arg1 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_kill:(int)arg1 ;
-(void)setRequestInterruptionBlock:(id)arg1 ;
-(void)set_requestPostCompletionBlockWithItems:(id)arg1 ;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)setRequestCancellationBlock:(id)arg1 ;
-(NSString *)extensionPointIdentifier;
-(void)beginExtensionRequestWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_safelyEndUsing:(/*^block*/id)arg1 ;
-(void)_safelyBeginUsing:(/*^block*/id)arg1 ;
-(int)pidForRequestIdentifier:(id)arg1 ;
-(void)set_requestPostCompletionBlock:(id)arg1 ;
@end

