/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_queue, AFSiriTaskServiceDelegate;
@class AFSiriTaskService, NSObject, NSString;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering> {

	AFSiriTaskService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) AFSiriTaskService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AFSiriTaskServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AFSiriTaskServiceDelegate>)arg1 ;
-(id<AFSiriTaskServiceDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setService:(AFSiriTaskService *)arg1 ;
-(AFSiriTaskService *)service;
@end

