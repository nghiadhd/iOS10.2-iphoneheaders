/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/system/libxpc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libxpc.dylib/OS_xpc_object.h>
#import <libobjc.A.dylib/OS_xpc_service.h>

@protocol OS_xpc_service <OS_xpc_object>
@end


@class NSString;

@interface OS_xpc_service : OS_xpc_object <OS_xpc_service>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)_xref_dispose;
@end

