/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject, NSArray;

@interface MRTelevisionManager : NSObject {

	NSPointerArray* _televisionsPointerArray;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSArray * allTelevisions; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(NSArray *)allTelevisions;
-(id)televisionWithName:(id)arg1 ;
-(void)registerTelevision:(id)arg1 ;
-(void)clearTelevisions;
@end

