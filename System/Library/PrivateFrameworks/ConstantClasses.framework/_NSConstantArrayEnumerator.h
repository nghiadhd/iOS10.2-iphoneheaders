/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator {

	id* objects;
	unsigned long long capacity;
	unsigned long long index;

}
-(id)allObjects;
-(id)nextObject;
-(id)initWithArray:(id*)arg1 capacity:(unsigned long long)arg2 ;
@end
