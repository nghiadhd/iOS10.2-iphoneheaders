/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	char _type;
	BOOL _decoded;
	char _padding[2];

}
-(id)initWithObjCType:(char)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(char)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

