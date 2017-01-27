/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying> {

	unsigned long long _limit;
	unsigned long long _offset;

}

@property (nonatomic,readonly) unsigned long long limit;               //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)offset;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
@end

