/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory, CNUIPRLikenessResolver, CNUIUserActionDiscoveringEnvironment;
@class CNUIContactsEnvironmentServicesProvider, CNUIAccountsFacade, CNUIFMFFacade, _DECConsumer, PRPersonaStore, CNContactStore, CNUIMeContactMonitor, CNUIIDSAvailabilityProvider, CNContactChangesNotifier, CNContactsEnvironment;

@interface CNUIContactsEnvironment : NSObject {

	long long _duetConsumer_once;
	long long _accountsFacade_once;
	long long _fmfFacade_once;
	long long _personaStore_once;
	long long _contactStore_once;
	long long _defaultSchedulerProvider_once;
	long long _placeholderProviderFactory_once;
	long long _meMonitor_once;
	long long _cachingLikenessResolver_once;
	long long _actionDiscoveringEnvironment_once;
	long long _idsAvailabilityProvider_once;
	long long _contactChangesNotifier_once;
	CNUIContactsEnvironmentServicesProvider* _servicesProvider;
	CNUIAccountsFacade* _accountsFacade;
	CNUIFMFFacade* _fmfFacade;
	_DECConsumer* _duetConsumer;
	PRPersonaStore* _personaStore;
	id<CNSchedulerProvider> _defaultSchedulerProvider;
	CNContactStore* _contactStore;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
	CNUIMeContactMonitor* _meMonitor;
	id<CNUIPRLikenessResolver> _cachingLikenessResolver;
	id<CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;
	CNContactChangesNotifier* _contactChangesNotifier;
	CNContactsEnvironment* _cnEnvironment;

}

@property (nonatomic,readonly) CNUIContactsEnvironmentServicesProvider * servicesProvider;                       //@synthesize servicesProvider=_servicesProvider - In the implementation block
@property (nonatomic,retain) CNUIAccountsFacade * accountsFacade;                                                //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (nonatomic,retain) CNUIFMFFacade * fmfFacade;                                                          //@synthesize fmfFacade=_fmfFacade - In the implementation block
@property (nonatomic,retain) _DECConsumer * duetConsumer;                                                        //@synthesize duetConsumer=_duetConsumer - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                                                      //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> defaultSchedulerProvider;                                   //@synthesize defaultSchedulerProvider=_defaultSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;                      //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                                                   //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNUIPRLikenessResolver> cachingLikenessResolver;                                 //@synthesize cachingLikenessResolver=_cachingLikenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;              //@synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment - In the implementation block
@property (nonatomic,retain) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;                              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
@property (nonatomic,retain) CNContactChangesNotifier * contactChangesNotifier;                                  //@synthesize contactChangesNotifier=_contactChangesNotifier - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * cnEnvironment;                                            //@synthesize cnEnvironment=_cnEnvironment - In the implementation block
+(id)currentEnvironment;
-(id)init;
-(id<CNUIPRLikenessResolver>)cachingLikenessResolver;
-(CNContactChangesNotifier *)contactChangesNotifier;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(CNContactStore *)contactStore;
-(PRPersonaStore *)personaStore;
-(_DECConsumer *)duetConsumer;
-(void)setDuetConsumer:(_DECConsumer *)arg1 ;
-(id<CNUIUserActionDiscoveringEnvironment>)actionDiscoveringEnvironment;
-(id<CNSchedulerProvider>)defaultSchedulerProvider;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(void)setIdsAvailabilityProvider:(CNUIIDSAvailabilityProvider *)arg1 ;
-(CNUIMeContactMonitor *)meMonitor;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(CNUIFMFFacade *)fmfFacade;
-(void)setFmfFacade:(CNUIFMFFacade *)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(CNUIContactsEnvironmentServicesProvider *)servicesProvider;
-(CNUIAccountsFacade *)accountsFacade;
-(CNContactsEnvironment *)cnEnvironment;
-(void)setAccountsFacade:(CNUIAccountsFacade *)arg1 ;
-(void)setDefaultSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(void)setCachingLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setActionDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(void)setContactChangesNotifier:(CNContactChangesNotifier *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

