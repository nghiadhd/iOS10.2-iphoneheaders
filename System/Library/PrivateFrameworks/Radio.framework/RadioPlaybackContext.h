/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {

	long long _numberOfSkipsUsed;
	NSArray* _trackPlaybackDescriptorQueue;

}

@property (nonatomic,readonly) long long numberOfSkipsUsed;                              //@synthesize numberOfSkipsUsed=_numberOfSkipsUsed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackPlaybackDescriptorQueue;              //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)playbackContextDictionary;
-(long long)numberOfSkipsUsed;
-(NSArray *)trackPlaybackDescriptorQueue;
@end

