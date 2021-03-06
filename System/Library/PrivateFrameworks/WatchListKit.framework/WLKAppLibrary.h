/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, PSSSSubscriptionManagerInternal, NSObject, NSString;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSArray* _allAppBundleIdentifiers;
	NSArray* _installedAppBundleIdentifiers;
	NSArray* _subscribedAppBundleIdentifiers;
	NSArray* _testAppBundleIdentifiers;
	NSDictionary* _subscriptionInfoByIdentifier;
	PSSSSubscriptionManagerInternal* _subscriptionManager;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	BOOL _appLibraryNeedsRefresh;
	long long _ignoreAppLibraryChangesCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAppLibrary;
+(id)localizedNameForBundle:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)refresh;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)subscriptionInfoByBundleIdentifier;
-(void)_refreshAppLibraryWithCompletion:(/*^block*/id)arg1 ;
-(id)installedAppBundleIdentifiers;
-(id)subscribedAppBundleIdentifiers;
-(id)testAppBundleIdentifiers;
-(id)allAppBundleIdentifiers;
-(void)beginIgnoringAppLibraryChanges;
-(void)endIgnoringAppLibraryChanges;
@end

