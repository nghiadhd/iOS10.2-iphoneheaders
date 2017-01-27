/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXCallDirectoryHostDelegate <NSObject>
@required
-(void)callDirectoryHost:(id)arg1 requestedReloadForExtension:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)callDirectoryHost:(id)arg1 requestedDataRemovalForExtension:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)callDirectoryHost:(id)arg1 requestedFirstIdentificationEntriesForPhoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)callDirectoryHost:(id)arg1 requestedToSynchronizeExtensionsWithCompletionHandler:(/*^block*/id)arg2;
-(void)callDirectoryHost:(id)arg1 requestedPrioritizedExtensionIdentifiersWithCompletionHandler:(/*^block*/id)arg2;
-(void)callDirectoryHost:(id)arg1 requestedToSetPrioritizedExtensionIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)callDirectoryHost:(id)arg1 requestedToPerformMigrationsWithCompletionHandler:(/*^block*/id)arg2;

@end

