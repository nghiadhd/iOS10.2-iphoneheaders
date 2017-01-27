/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriAppContextProviding.h>

@class NSString;

@interface AFDistributedMessagingCenterContextProvider : NSObject <AFSiriAppContextProviding> {

	NSString* _bundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAppContextWithDeliveryHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppBundleIdentifier:(id)arg1 ;
@end

