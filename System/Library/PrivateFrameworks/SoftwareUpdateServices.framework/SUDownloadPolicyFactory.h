/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUDownloadPolicyFactory : NSObject
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 ;
+(int)downloadPolicyTypeForClass:(id)arg1 ;
+(id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2 ;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 ;
@end

