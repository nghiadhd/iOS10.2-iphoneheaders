/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDReadProtocol
@required
-(void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(BOOL)arg5 preferredLocalizations:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(void)getServerStoreWithCompletionHandler:(/*^block*/id)arg1;
-(void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(/*^block*/id)arg1;
-(void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getDiskUsage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getLocalizationDictionaryForTypeWithIdentifier:(id)arg1 UUID:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resolveQueries:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getServerStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getKernelPackageExtensionsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getURLOverrideForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)bindDocumentProxy:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

