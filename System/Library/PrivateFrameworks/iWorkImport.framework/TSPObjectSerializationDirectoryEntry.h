/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPObjectSerializationDirectoryEntry : NSObject {

	unsigned long long _offset;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                //@synthesize size=_size - In the implementation block
-(id)initWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)size;
-(unsigned long long)offset;
@end

