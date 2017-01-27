/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;
@class NSMapTable, NSObject, TUCallProvider, NSArray, NSString;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate> {

	NSMapTable* _delegateToQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallProviderManagerDataSource> _dataSource;

}

@property (nonatomic,retain) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUCallProviderManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) TUCallProvider * telephonyProvider; 
@property (nonatomic,readonly) TUCallProvider * faceTimeProvider; 
@property (nonatomic,readonly) TUCallProvider * defaultProvider; 
@property (nonatomic,readonly) TUCallProvider * emergencyProvider; 
@property (nonatomic,readonly) TUCallProvider * voicemailProvider; 
@property (nonatomic,copy,readonly) NSArray * providers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)serviceForProvider:(id)arg1 video:(BOOL)arg2 ;
+(id)defaultProviders;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(id<TUCallProviderManagerDataSource>)dataSource;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSArray *)providers;
-(void)providersChangedForDataSource:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 queue:(id)arg2 ;
-(TUCallProvider *)telephonyProvider;
-(TUCallProvider *)faceTimeProvider;
-(NSMapTable *)delegateToQueue;
-(id)providerWithIdentifier:(id)arg1 ;
-(id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1 ;
-(id)providersPassingTest:(/*^block*/id)arg1 ;
-(TUCallProvider *)voicemailProvider;
-(id)providerWithService:(int)arg1 video:(BOOL*)arg2 ;
-(TUCallProvider *)emergencyProvider;
-(id)providerForRecentCall:(id)arg1 ;
-(id)providerForFavoritesEntry:(id)arg1 ;
-(void)setDelegateToQueue:(NSMapTable *)arg1 ;
-(TUCallProvider *)defaultProvider;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end

