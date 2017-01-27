/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDModifyProtocol
@required
-(void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)synchronizeWithMobileInstallation;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setHandlerOptions:(unsigned)arg1 forContentType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1;

@end

