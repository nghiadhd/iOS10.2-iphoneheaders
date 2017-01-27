/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(unsigned long long)flowIdentifier;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromStream:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

