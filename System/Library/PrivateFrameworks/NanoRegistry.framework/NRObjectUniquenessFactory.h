/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRObjectUniquenessFactory : NSObject {

	NSMutableDictionary* _uniqueObjects;
	NSObject*<OS_dispatch_queue> _uniqueObjectsQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)getUniqueObject:(id)arg1 ;
-(void)deallocObject:(id)arg1 ;
@end

